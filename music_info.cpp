#include <QCoreApplication>

#include "music_info.h"
#include "QDebug"
#include "iostream"


QString letra;
QDebug deb = qDebug();


// constructor
Music_info::Music_info()
{

    // signal finish(), calls downloadFinished()
    connect(&manager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(downloadFinished(QNetworkReply*)));
}

void Music_info::search(QString artist, QString music)
{
        QString busca = "http://api.vagalume.com.br/search.php?art="+artist+"&mus="+music;
        QByteArray newbusca = busca.toLatin1();
        QUrl url = QUrl::fromEncoded(newbusca);
        doDownload(url);
}

QString Music_info::getLetra()
{
    return letra;
}

// Constructs a QList of QNetworkReply
void Music_info::doDownload(const QUrl &url)
{
    QNetworkRequest request(url);
    QNetworkReply *reply = manager.get(request);

#ifndef QT_NO_SSL
    connect(reply, SIGNAL(sslErrors(QList<QSslError>)), SLOT(sslErrors(QList<QSslError>)));
#endif

    // List of reply
    currentDownloads.append(reply);
}

void Music_info::downloadFinished(QNetworkReply *reply)
{
    QUrl url = reply->url();
     deb << reply->readAll();
    //deb << this->letra.toUtf8();
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
        deb << "todos os downloads finalizados";
        // all downloads finished
        //QCoreApplication::instance()->quit();
}

void Music_info::sslErrors(const QList<QSslError> &sslErrors)
{
#ifndef QT_NO_SSL
    foreach (const QSslError &error, sslErrors)
        fprintf(stderr, "SSL error: %s\n", qPrintable(error.errorString()));
#else
    Q_UNUSED(sslErrors);
#endif
}


