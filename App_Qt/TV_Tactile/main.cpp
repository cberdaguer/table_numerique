#include <QLabel>
#include <QApplication>


#include "iostream"
#include "mainwindow.h"
#include "dbmanager.h"
#include "qdownloader.h"

bool removeDir(const QString & dirName);

using namespace std;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // ---- REQUETE DATABASE MYSQL ----
    //DbManager Requete("/Users/tanguy/Desktop/Projet_IMERIR/table_numerique/Table-Tactile/table_numerique/db.sqlite3");
    DbManager Requete("192.168.1.25","table_numerique","tabapplication","tabvisa"); // Requet sur la base de donnée
    QVector<QString> vecAdrImg = Requete.query_theme("perpignan");                  // Recupére adresse des images

    // ---- TELECHARGE IMAGES ----

    // Efface le dossier avec les anciennes photos
    /*
    QString CheminImg(QCoreApplication::applicationDirPath());
    QDir Dir(CheminImg);
    if(Dir.exists("Images")) {
        removeDir(CheminImg+"/Images");
        Dir.mkdir("Images");
    }
    else Dir.mkdir("Images");
    CheminImg.append("/Images/");
    // Telecharge les photos
    for (int i=0;i <vecAdrImg.size();i++) {
        QDownloader* l_imagedl= new QDownloader();
        QFileInfo fi(vecAdrImg.at(i));                                  // Pour savoir si l'image est "jpg", "png",...
        QString l_nomImg(QString::number(i)+"."+fi.suffix());
        QString URL("http://192.168.1.21:1234/media/"+vecAdrImg.at(i)); // URL de ou sont hebergées les images
        l_imagedl->setFile(URL,CheminImg,l_nomImg);
    }*/

    MainWindow Menu;                // La fenetre principal
    Menu.showMaximized();           // Affichage en plein ecran

    return app.exec();

}

bool removeDir(const QString & dirName)
{
    // Permet de supprimer un dossier avec le nom dirName
    // Retourn true si le fichier a bien été supprimer et false sinon
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
