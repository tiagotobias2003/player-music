#ifndef NOTICE_H
#define NOTICE_H

#include <QString>

class notice
{

public:
    notice();
    QString getHeadLine();
    QString getUrl();
    QString getPicture();
    void setHeadLine(QString headline);
    void setUrl(QString url);
    void setPicture(QString picture);

private:
    QString headline;
    QString url;
    QString picture;

};

#endif // NOTICE_H
