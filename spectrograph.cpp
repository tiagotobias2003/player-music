#include "spectrograph.h"
#include <iostream>
#include <QtCore/qmath.h>
#include <QBrush>
#include <QPen>
#include <QGradient>
#include <QDebug>
#include <QResizeEvent>
#include <QTimerEvent>
#include <QPainterPath>
#include <QEasingCurve>
#include <QAction>
#include <QMessageBox>
#include <QMenu>
#include <QColorDialog>

Spectrograph::Spectrograph(QWidget *parent) :
  AbstractSpectrograph(parent){
  startTimer(15);
  NUM_BANDS = 16;
  spectrum.resize(NUM_BANDS);
  delay.resize(NUM_BANDS);
  for(int i=0; i<NUM_BANDS; i++){
      spectrum[i]=1;
      delay[i]=1;
  }
  leftLevel = rightLevel = 1;
  gradient = QLinearGradient(rect().topLeft(), rect().bottomLeft());
  gradient.setColorAt(1, Qt::black);
  gradient.setColorAt(0, Qt::black);
  gradientBrush = QBrush(gradient);
  gradientBrush.setStyle(Qt::SolidPattern);
  backgroundBrush.setColor(Qt::white);
  backgroundBrush.setStyle(Qt::SolidPattern);
  transparentBrush.setColor(Qt::transparent);
  elementColor = Qt::white;
  pen.setColor(elementColor);
  decayBrush.setColor(QColor(255,0,0,255));
  decayBrush.setStyle(Qt::SolidPattern);
  //barWidth = MIN_BARWIDTH;
  barWidth = 1;
  barSpacing = 1;

  //Selecionar tipo do spectrum a ser desenhado
  drawMode = 2;
  bgColor = Qt::white;
  changeSpectrumToBars = new QAction(QString("Bars"),this);
  connect(changeSpectrumToBars,SIGNAL(triggered()),this,SLOT(changeSpectrograph1()));
  changeSpectrumToMirror = new QAction(QString("Mirror"),this);
  connect(changeSpectrumToMirror,SIGNAL(triggered()),this,SLOT(changeSpectrograph2()));
  changeSpectrumToFlagella = new QAction(QString("Flagella"),this);
  connect(changeSpectrumToFlagella,SIGNAL(triggered()),this,SLOT(changeSpectrograph3()));
  changeSpectrumToCrazy = new QAction(QString("Crazy"),this);
  connect(changeSpectrumToCrazy,SIGNAL(triggered()),this,SLOT(changeSpectrograph4()));
  changeSpectrumToInverted = new QAction(QString("Inverted"),this);
  connect(changeSpectrumToInverted,SIGNAL(triggered()),this,SLOT(changeSpectrograph5()));

  bgColorAction = new QAction(QString("Background"),this);
  connect(bgColorAction,SIGNAL(triggered()),this,SLOT(selectBgColor()));
  elementColorAction = new QAction(QString("Element"),this);
  connect(elementColorAction,SIGNAL(triggered()),this,SLOT(selectElementColor()));

}

void Spectrograph::contextMenuEvent(QContextMenuEvent *e){
    QMenu menu(this);

    QMenu *spectrums = menu.addMenu("Spectrums");
    spectrums->addAction(changeSpectrumToBars);
    spectrums->addAction(changeSpectrumToMirror);
    spectrums->addAction(changeSpectrumToFlagella);
    spectrums->addAction(changeSpectrumToInverted);
    spectrums->addAction(changeSpectrumToCrazy);

    QMenu *colors = menu.addMenu("Colors");
    colors->addAction(bgColorAction);
    colors->addAction(elementColorAction);

    menu.exec(e->globalPos());
}

//Seleciona o tipo 1 barras
void Spectrograph::changeSpectrograph1(){
    drawMode = 1;
    /*QMessageBox m;
    QString text = "Spectrograph select = " + QString::number(drawMode);
    m.setText(text);
    m.exec();*/
}
void Spectrograph::changeSpectrograph2(){
    drawMode = 2;
}
void Spectrograph::changeSpectrograph3(){
    drawMode = 3;
}
void Spectrograph::changeSpectrograph4(){
    drawMode = 4;
}
void Spectrograph::changeSpectrograph5(){
    drawMode = 5;
}

void Spectrograph::resizeEvent(QResizeEvent *e){
  e->accept();
  gradient = QLinearGradient(rect().topLeft(), rect().bottomLeft());
  gradientBrush = QBrush(gradient);
  NUM_BANDS = width()/barWidth;
  if(NUM_BANDS > BAND_MAX){
    NUM_BANDS = BAND_MAX;
    barWidth = (float)width()/NUM_BANDS;
  }
  else{
    barWidth = MIN_BARWIDTH;
  }
  spectrum.resize(NUM_BANDS);
  delay.resize(NUM_BANDS);
  for(int i=0; i<NUM_BANDS; i++){
      spectrum[i]=1;
      delay[i]=1;
  }
  widgetHeight = height();
  repaint();
}

void Spectrograph::loadLevels(double left, double right){
  if(leftLevel < 5*width()/2*left)
    leftLevel = 5*width()/2*left;
  if(rightLevel < 5*width()/2*right)
    rightLevel = 5*width()/2*right;
}

void Spectrograph::paintEvent(QPaintEvent *e){
    Q_UNUSED(e);
    QPainter p(this);
    QPen pen;

    p.setRenderHint(QPainter::Antialiasing);
    p.setBrush(bgColor);
    p.drawRect(rect());
    pen.setStyle(Qt::SolidLine);
    pen.setColor(elementColor);

    switch (drawMode) {
    case 1:
        drawBars(p, pen);
        break;
    case 2:
        drawMirror(p, pen);
        break;
    case 3:
        drawFlagella(p, pen);
        break;
    case 4:
        drawCrazy(p, pen);
        break;
    case 5:
        drawInverted(p, pen);
        break;
    default:
        drawMirror(p, pen);
        break;
    }
}

//Spectrum do editado1
void Spectrograph::drawBars(QPainter &p, QPen &pen){
    float p1x, p1y, p2x;
    pen.setWidth(2);
    pen.setColor(elementColor);
    p.setPen(pen);
    for(int i=0; i<NUM_BANDS;i++){
      p1x = i*barWidth;
      p2x = p1x+barWidth;
      p1y = widgetHeight-spectrum[i];
      p.setBrush(gradientBrush);
      p.drawRect(QRectF(QPointF(p1x,p1y),QPointF(p2x,widgetHeight)));
    }
    p.setBrush(Qt::black);
    p.drawRect(0,height()-7,width(),7);
    p.setBrush(Qt::red);
    p.drawRoundedRect(width()/2-leftLevel,height()-6,leftLevel,6,3,3);
    p.setBrush(Qt::blue);
    p.drawRoundedRect(width()/2,height()-6,rightLevel,6,3,3);
    p.setPen(pen);
}


//Spectrum de Taynara
void Spectrograph::drawMirror(QPainter &p, QPen &pen){
    float p1x, p1y, p2x;
    pen.setColor(elementColor);
    pen.setWidth(1);
    p.setPen(pen);
    for(int i=0; i<NUM_BANDS;i++){
      p1x = i*barWidth;
      p2x = p1x+barWidth;
      p1y = spectrum[i]/2;
      p.setBrush(gradientBrush);
      p.drawRect(QRectF(QPointF(p1x,widgetHeight/2),QPointF(p2x,p1y+widgetHeight/2)));
    }
    for(int i=0; i<NUM_BANDS;i++){
      p1x = i*barWidth;
      p2x = p1x+barWidth;
      p1y = widgetHeight/2-spectrum[i]/2;
      p.setBrush(gradientBrush);
      p.drawRect(QRectF(QPointF(p1x,p1y),QPointF(p2x,widgetHeight/2)));
    }
}
//Spectrum do Tobias
void Spectrograph::drawFlagella(QPainter &p, QPen &pen){
    float p1x, p2x, p1y;
    pen.setWidth(1);
    p.setPen(pen);
    //Tenta evitar que a linha fique da mesma cor do fundo
    if(elementColor == bgColor){
        int red = 255 - bgColor.toRgb().red();
        int green = 255 - bgColor.toRgb().green();
        int blue = 255 - bgColor.toRgb().blue();
        elementColor = qRgb(red, green, blue);
    }
    for(int i=0; i<NUM_BANDS;i++){
        p1x = i*barWidth;
        p2x = barWidth;
        p1y = widgetHeight-spectrum[i];
        p.setBrush(gradientBrush);
        p.drawArc(p1x,p1y,p2x,widgetHeight,i,10*360);
    }
}
//Spectrum Crazy
void Spectrograph::drawCrazy(QPainter &p, QPen &pen){
    float p1x, p2x, p1y;
    pen.setWidth(1);
    p.setPen(pen);
    //Tenta evitar que a linha fique da mesma cor do fundo
    if(elementColor == bgColor){
        int red = 255 - bgColor.toRgb().red();
        int green = 255 - bgColor.toRgb().green();
        int blue = 255 - bgColor.toRgb().blue();
        elementColor = qRgb(red, green, blue);
    }
    for(int i=0; i<NUM_BANDS;i++){
        p1x = i*barWidth;
        p2x = barWidth;
        p1y = widgetHeight-spectrum[i];
        p.setBrush(gradientBrush);
        p.drawArc(p1x,p1y,p1x+p2x,widgetHeight,i,10*360);
    }
}
//Spectrum Inverted
void Spectrograph::drawInverted(QPainter &p, QPen &pen){
    float p1x, p1y, p2x;
    pen.setColor(elementColor);
    pen.setWidth(2);
    p.setPen(pen);
    for(int i=0; i<NUM_BANDS;i++){
      p1x = i*barWidth;
      p2x = p1x+barWidth;
      p1y = widgetHeight-spectrum[i];
      p.setBrush(gradientBrush);
      p.drawRect(QRectF(QPointF(p1x,p1y),QPointF(p2x,widgetHeight/10)));
    }
}

/*Spectrum do professor
void Spectrograph::drawProf()
{
    QPainter p(this);
    QPen pen;
    float p1x, p1y, p2x;

    p.setRenderHint(QPainter::Antialiasing);
    p.setBrush(Qt::black);
    p.drawRect(rect());
    pen.setStyle(Qt::SolidLine);
    pen.setColor(Qt::black);
    pen.setWidth(1);
    p.setPen(pen);
    for(int i=0; i<NUM_BANDS;i++){
      p1x = i*barWidth;
      p2x = p1x+barWidth;
      p1y = widgetHeight-spectrum[i];
      p.setBrush(gradientBrush);
      p.drawRect(QRectF(QPointF(p1x,p1y),QPointF(p2x,widgetHeight)));
    }
    p.setBrush(Qt::black);
    p.drawRect(0,height()-7,width(),7);
    p.setBrush(Qt::red);
    p.drawRoundedRect(width()/2-leftLevel,height()-6,leftLevel,6,3,3);
    p.setBrush(Qt::blue);
    p.drawRoundedRect(width()/2,height()-6,rightLevel,6,3,3);
    p.setPen(pen);
}*/

void Spectrograph::timerEvent(QTimerEvent *e){
  Q_UNUSED(e);
  for(int i=0; i<NUM_BANDS; i++){
    spectrum[i]-=delay[i];
    if(spectrum[i] <0 ){
      spectrum[i]=0;
    }
    delay[i]++;
  }
  if(leftLevel > 0)
    leftLevel--;
  if(rightLevel > 0)
    rightLevel--;
  repaint();
}

void Spectrograph::loadSamples(QVector<double> &_spectrum){
  int increment, value;
  increment = _spectrum.size()/NUM_BANDS;
  for(int i=0; i<NUM_BANDS;i++){
    value = ceil(_spectrum[i*increment]*height());
    if(value > spectrum[i]){
      spectrum[i] = value;
      delay[i] = 0;
    }
  }
  repaint();
}

void Spectrograph::selectBgColor(void){
    QColorDialog b;
    if(b.exec()){
        bgColor = b.selectedColor();
    }
     backgroundBrush.setColor(bgColor);
}

void Spectrograph::selectElementColor(void){
    QColorDialog b;
    if(b.exec()){
        elementColor = b.selectedColor();
    }
    pen.setColor(elementColor);
}
