#ifndef MUSIC_INFO_H
#define MUSIC_INFO_H

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
#include "QDebug"
#include "iostream"
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QStringList>

#include <stdio.h>

class QSslError;

class Music_info: public QObject
{
    Q_OBJECT
    QNetworkAccessManager manager;
    QList<QNetworkReply *> currentDownloads;

public:
    Music_info();
    void search(QString artist, QString music);
    QString getLetra(void);

public slots:
    void downloadFinished(QNetworkReply *reply);
    void sslErrors(const QList<QSslError> &errors);
signals:
    void ready();
private:
    QString letra;
    QStringList propertyNames;
    QStringList propertyKeys;
    void doDownload(const QUrl &url);
};


#endif // MUSIC_INFO_H
