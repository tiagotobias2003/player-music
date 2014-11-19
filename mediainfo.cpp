#include "mediainfo.h"
#include "ui_mediainfo.h"
#include "music_info.h"
#include <QDebug>

QDebug debug = qDebug();

MediaInfo::MediaInfo(QWidget *parent) :
  AbstractMediaInfo(parent),
  ui(new Ui::MediaInfo){
  ui->setupUi(this);
  // signal finish(), calls downloadFinished()
  connect(&manager, SIGNAL(finished(QNetworkReply*)),
          this, SLOT(downloadFinished(QNetworkReply*)));
}

MediaInfo::~MediaInfo(){
  delete ui;
}

// this function just assemble a large string with all information
// that is passed. you should modify it for your needs
void MediaInfo::setAtribute(QString property, QString value){
  QString text;
  if(property == "AlbumArtist")
    artist = value;
  if(property == "Title")
    title = value;
  if(property == "AlbumTitle")
    album = value;
  if(property == "TrackNumber")
    track = value;
  if(property == "AudioBitRate")
    bitrate = value;
  if(property == "AudioCodec")
    codec = value;

    search(artist,title);


    text = "Carregando informacoes...";

  // just display the text into the label :P
  ui->label->setText(text);
}

void MediaInfo::search(QString artist, QString music)
{
        QString busca = "http://api.vagalume.com.br/search.php?art="+artist+"&mus="+music;
        QByteArray newbusca = busca.toLatin1();
        QUrl url = QUrl::fromEncoded(newbusca);
        doDownload(url);
}

// Constructs a QList of QNetworkReply
void MediaInfo::doDownload(const QUrl &url)
{
    QNetworkRequest request(url);
    QNetworkReply *reply = manager.get(request);

#ifndef QT_NO_SSL
    connect(reply, SIGNAL(sslErrors(QList<QSslError>)), SLOT(sslErrors(QList<QSslError>)));
#endif

    // List of reply
    currentDownloads.append(reply);
}

void MediaInfo::downloadFinished(QNetworkReply *reply)
{
    QUrl url = reply->url();
    QString s_data = reply->readAll();
    ui->label->setText(s_data);
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
         printf("todos os downloads finalizados");
        // all downloads finished
        //QCoreApplication::instance()->quit();
}

void MediaInfo::sslErrors(const QList<QSslError> &sslErrors)
{
#ifndef QT_NO_SSL
    foreach (const QSslError &error, sslErrors)
        fprintf(stderr, "SSL error: %s\n", qPrintable(error.errorString()));
#else
    Q_UNUSED(sslErrors);
#endif
}
