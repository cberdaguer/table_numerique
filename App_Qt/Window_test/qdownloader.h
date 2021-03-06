#ifndef QDOWNLOADER_H
#define QDOWNLOADER_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QFile>
#include <QStringList>
#include <QDir>
#include <QEventLoop>

class QDownloader : public QObject
{
    Q_OBJECT
public:
    explicit QDownloader(QObject *parent = 0);
    virtual ~QDownloader();
    void setFile(QString fileURL, QString filePath, QString fileName);
    bool removeDir(const QString & dirName);
    bool finish;

private:
    QNetworkAccessManager *manager;
    QNetworkReply *reply;
    QFile *file;

private slots:
    void onDownloadProgress(qint64,qint64);
    void onFinished(QNetworkReply*);
    void onReadyRead();
    void onReplyFinished();
};

#endif // QDOWNLOADER_H
