#ifndef news_H
#define news_H


#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QSslError>
#include <QStringList>
#include <QTimer>
#include <QUrl>
#include "QDebug"
#include "iostream"
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <stdio.h>
#include <QString>
#include <QList>
#include "notice.h"

class QSslError;

class news: public QObject
{
    Q_OBJECT
    QNetworkAccessManager manager;
    QList<QNetworkReply *> currentDownloads;

public:
    news();
    void search();
    QList<notice> getNews(void);
    int getAmount();

public slots:
    void downloadFinished(QNetworkReply *reply);
    void sslErrors(const QList<QSslError> &errors);
signals:
    void ready();
private:
    QList<notice> notices;
    int amount;
    void doDownload(const QUrl &url);
};


#endif // news_H

