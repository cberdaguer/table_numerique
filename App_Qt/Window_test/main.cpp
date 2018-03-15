#include "iostream"
#include "mainwindow.h"
#include "appwindow.h"
#include "dbmanager.h"
#include "filedownloader.h"
#include "qdownloader.h"
#include <QLabel>
#include <QDir>
#include <QApplication>


bool removeDir(const QString & dirName);

using namespace std;

int main(int argc, char *argv[])
{

    //QDownloader
    QApplication app(argc, argv);
    DbManager requete("/Users/tanguy/Desktop/Projet_IMERIR/table_numerique/Table-Tactile/table_numerique/db.sqlite3");
    QVector<QString> vecAdrImg = requete.query_theme("perpignan");

    QString path(QCoreApplication::applicationDirPath());

  /*  QDir Dir(path); // Efface le dir au debut
    if(Dir.exists("Images")) {
        removeDir(path+"/Images");
        Dir.mkdir("Images");
    }
    else{
        Dir.mkdir("Images");
    }
    path.append("/Images/");

    QVector<QDownloader*> imagedl;
    for (int i=0;i <vecAdrImg.size();i++) {
        QDownloader* l_imagedl= new QDownloader();
        imagedl.append(l_imagedl);
        QFileInfo fi(vecAdrImg.at(i));
        QString l_nomImg(QString::number(i)+"."+fi.suffix());
        QString URL("http://192.168.1.21:1234/media/"+vecAdrImg.at(i));
        l_imagedl->setFile(URL,path,l_nomImg);
    }*/
    MainWindow t;
    t.show();

    return app.exec();
}

bool removeDir(const QString & dirName)
{
    bool result = true;
    QDir dir(dirName);

    if (dir.exists(dirName)) {
        Q_FOREACH(QFileInfo info, dir.entryInfoList(QDir::NoDotAndDotDot | QDir::System | QDir::Hidden  | QDir::AllDirs | QDir::Files, QDir::DirsFirst)) {
            if (info.isDir()) {
                result = removeDir(info.absoluteFilePath());
            }
            else {
                result = QFile::remove(info.absoluteFilePath());
            }

            if (!result) {
                return result;
            }
        }
        result = dir.rmdir(dirName);
    }
    return result;
}
