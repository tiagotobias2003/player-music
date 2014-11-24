#include <QCoreApplication>
#include "news.h"
#include <QDebug>
#include <QArrayData>


// constructor
news::news()
{

    // signal finish(), calls downloadFinished()
    connect(&manager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(downloadFinished(QNetworkReply*)));
}

void news::search()
{
        QString busca = "http://www.vagalume.com.br/news/index.js";
        QByteArray newbusca = busca.toLatin1();
        QUrl url = QUrl::fromEncoded(newbusca);
        doDownload(url);
}

QList<notice> news::getNews()
{
    return notices;
}

int news::getAmount()
{
    return amount;
}

// Constructs a QList of QNetworkReply
void news::doDownload(const QUrl &url)
{
    QNetworkRequest request(url);
    QNetworkReply *reply = manager.get(request);

#ifndef QT_NO_SSL
    connect(reply, SIGNAL(sslErrors(QList<QSslError>)), SLOT(sslErrors(QList<QSslError>)));
#endif

    // List of reply
    currentDownloads.append(reply);
}

void news::downloadFinished(QNetworkReply *reply)
{
    QUrl url = reply->url();
    //deb << this->contents.toUtf8();
    if (reply->error()) {
        fprintf(stderr, "Download of %s failed: %s\n",
                url.toEncoded().constData(),
                qPrintable(reply->errorString()));
    } else {
            printf("Download of succeeded\n");
    }

    currentDownloads.removeAll(reply);
    reply->deleteLater();

    if (currentDownloads.isEmpty())
    {
       QString contents = (QString)reply->readAll();

        QJsonDocument document = QJsonDocument::fromJson(contents.toUtf8());
        // The document wrap a jsonObject
        QJsonObject jsonObj = document.object();
        QJsonValue value =  jsonObj.value(QString("news"));
        QJsonArray array = value.toArray();
        amount = array.size();
        for(int i = 0; i < array.size(); i++)
        {
            QJsonObject item = array[i].toObject();
            QJsonValue headline =  item.value(QString("headline"));
            QJsonValue url =  item.value(QString("url"));
            QJsonValue pic =  item.value(QString("pic_src"));
            notice newNotice;
            newNotice.setHeadLine(headline.toString());
            newNotice.setUrl(url.toString());
            newNotice.setPicture(pic.toString());
            notices.append(newNotice);
        }
        emit ready();
    }
        // all downloads finished
        //QCoreApplication::instance()->quit();
}

void news::sslErrors(const QList<QSslError> &sslErrors)
{
#ifndef QT_NO_SSL
    foreach (const QSslError &error, sslErrors)
        fprintf(stderr, "SSL error: %s\n", qPrintable(error.errorString()));
#else
    Q_UNUSED(sslErrors);
#endif
}



