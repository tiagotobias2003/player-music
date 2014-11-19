#ifndef MEDIAINFO_H
#define MEDIAINFO_H
#include "abstractmediainfo.h"

#include <QWidget>
#include <QString>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QFile>
#include <QFileInfo>
#include <QList>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QSslError>
#include <QStringList>
#include <QTimer>
#include <QUrl>

namespace Ui {
class MediaInfo;
}

class MediaInfo : public AbstractMediaInfo
{
  Q_OBJECT
  QNetworkAccessManager manager;
  QList<QNetworkReply *> currentDownloads;

public:
  explicit MediaInfo(QWidget *parent = 0);
  ~MediaInfo();

public slots:
  void setAtribute(QString property, QString value);
  void downloadFinished(QNetworkReply *reply);
  void sslErrors(const QList<QSslError> &errors);

private:
  void search(QString artist, QString music);
  void doDownload(const QUrl &url);
  Ui::MediaInfo *ui;
  QString artist, title, album, bitrate, codec, track;
};

#endif // MEDIAINFO_H
