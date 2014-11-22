#ifndef MEDIAINFO_H
#define MEDIAINFO_H
#include "abstractmediainfo.h"
#include "music_info.h"
#include <QWidget>
#include <QString>
#include <QStandardItemModel>
#include <QStandardItem>


namespace Ui {
class MediaInfo;
}

class MediaInfo : public AbstractMediaInfo
{
  Q_OBJECT

public:
  explicit MediaInfo(QWidget *parent = 0);
  ~MediaInfo();

public slots:
  void setAtribute(QString property, QString value);
  void allReady();

private:
  Ui::MediaInfo *ui;
  Music_info music;
  QString artist, title, album, bitrate, codec, track;
  bool doDonwload;
  bool newTitle;
};

#endif // MEDIAINFO_H
