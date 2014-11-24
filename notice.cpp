#include "notice.h"
#include <QString>

notice::notice()
{
    headline = "not found";
    url = "not found";
    picture  = "not found";
}

QString notice::getHeadLine()
{
    return headline;
}

QString notice::getUrl()
{
    return url;
}

QString notice::getPicture()
{
    return picture;
}

void notice::setHeadLine(QString headline)
{
    this->headline = headline;
}

void notice::setUrl(QString url)
{
    this-> url = url;
}

void notice::setPicture(QString picture)
{
    this-> picture = picture;
}
