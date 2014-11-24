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
    //ui->label->setText("As mãos da vovó\nAplaudiram na igreja no domingo de manhã\nAs mãos da vovó\nTocavam tamborim tão bem\nAs mãos da vovó\nCostumavam dar avisos\nEla dizia, Billy, não corra tão rápido\nVocê pode cair em um pedaço de vidro\nPode ter cobras na grama\nAs mãos da vovó\n\nAs mãos da vovó\n\n\n\n\n\n\n\nTESTE");
}

void MediaInfo::allReady()
{
     QString letra;
     letra = music.getLetra();
     ui->label->setText(letra);
     doDonwload = true;
     newTitle = false;
}
