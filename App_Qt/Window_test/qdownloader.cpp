#include "qdownloader.h"

QDownloader::QDownloader(QObject *parent) :
    QObject(parent)
{
    manager = new QNetworkAccessManager;
}

QDownloader::~QDownloader()
{
    manager->deleteLater();
}

void QDownloader::setFile(QString fileURL,QString filePath,QString fileName)
{
    QEventLoop loop;
    finish = false;
    QString saveFilePath;
    saveFilePath = QString(filePath + fileName );

    QNetworkRequest request;
    request.setUrl(QUrl(fileURL));
    reply = manager->get(request);

    file = new QFile;
    file->setFileName(saveFilePath);
    file->open(QIODevice::WriteOnly);

    connect(reply,SIGNAL(downloadProgress(qint64,qint64)),this,SLOT(onDownloadProgress(qint64,qint64)));
    connect(manager,SIGNAL(finished(QNetworkReply*)),this,SLOT(onFinished(QNetworkReply*)));
    connect(reply,SIGNAL(readyRead()),this,SLOT(onReadyRead()));
    connect(reply,SIGNAL(finished()),this,SLOT(onReplyFinished()));
    connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
    loop.exec();
}

void QDownloader::onDownloadProgress(qint64 bytesRead,qint64 bytesTotal)
{
    // qDebug(QString::number(bytesRead).toLatin1() +" - "+ QString::number(bytesTotal).toLatin1());
}

void QDownloader::onFinished(QNetworkReply * reply)
{
    switch(reply->error())
    {
    case QNetworkReply::NoError:
    {
        qDebug("file is downloaded successfully.");
        finish = true;
    }break;
    default:{
        qDebug(reply->errorString().toLatin1());
    };
    }

    if(file->isOpen())
    {
        file->close();
        file->deleteLater();
    }
}

void QDownloader::onReadyRead()
{
    file->write(reply->readAll());
}

void QDownloader::onReplyFinished()
{
    if(file->isOpen())
    {
        file->close();
        file->deleteLater();
    }
}

