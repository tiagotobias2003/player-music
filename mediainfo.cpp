#include "mediainfo.h"
#include "ui_mediainfo.h"
#include "mediainfo.h"
#include <QDebug>

MediaInfo::MediaInfo(QWidget *parent) :
  AbstractMediaInfo(parent),
  ui(new Ui::MediaInfo){
  ui->setupUi(this);
  connect(&music,SIGNAL(ready()),this,SLOT(allReady()));
  doDonwload = true;
  newTitle = false;
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
  if(property == "Title"){
    if(value != title) newTitle = true;
    title = value;
  }
  if(property == "AlbumTitle")
    album = value;
  if(property == "TrackNumber")
    track = value;
  if(property == "AudioBitRate")
    bitrate = value;
  if(property == "AudioCodec")
    codec = value;


  if(doDonwload && newTitle && artist != NULL)
  {
      qDebug() << "passou: "+artist+" - "+title;
      music.search(artist,title);
      doDonwload = false;
  }

    text = "Carregando informacoes...";

  // just display the text into the label :P
    ui->label->setText(artist+" / "+title+" / "+album+ " / "+track);
}

void MediaInfo::allReady()
{
    qDebug() << "alo";
     ui->label->setText(music.getLetra());
     doDonwload = true;
     newTitle = false;
}
