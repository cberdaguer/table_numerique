#include <QLabel>
#include <QApplication>


#include "iostream"
#include "mainwindow.h"
#include "dbmanager.h"
#include "qdownloader.h"
#include "dataimg.h"
#include "configwindow.h"

bool removeDir(const QString & dirName);
QVector<DataImg> DLSetImg();
QVector<DataImg> SetImgSansDL();

using namespace std;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    configWindow t;
   // t.exec();
    QVector<DataImg> vecAdrDataImg =  QVector<DataImg>();

            //  vecAdrDataImg = DLSetImg();    // DL photo + ajout photo dans vecAdrDataImg
            // vecAdrDataImg = SetImgSansDL();    //  Ajout photo dans vecAdrDataImg sans dl


    MainWindow Menu(0,vecAdrDataImg);                // La fenetre principal
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

QVector<DataImg> DLSetImg(){
    // Permet d'ajouter de cree les datas image avec la base de donnee, de telechager les photos
    // et de les ajouter aux datas

    // ---- REQUETE DATABASE MYSQL ----
    //DbManager Requete("/Users/tanguy/Desktop/Projet_IMERIR/table_numerique/Table-Tactile/table_numerique/db.sqlite3");
    DbManager Requete("192.168.1.25","table_numerique","tabapplication","tabvisa"); // Requet sur la base de donnée
    QVector<DataImg> vecDataOUT = Requete.query_theme_dataImg("perpignan");                  // Recupére adresse des images
    QString CheminImg(QCoreApplication::applicationDirPath()+"/Images/");

    // Efface le dossier avec les anciennes photos
    QDir Dir(QCoreApplication::applicationDirPath());
    if(Dir.exists("Images")) {
        removeDir(CheminImg);
        Dir.mkdir("Images");
    }
    else Dir.mkdir("Images");

    for (int i=0;i <vecDataOUT.size();i++) {
        QDownloader* l_imagedl= new QDownloader();
        QFileInfo fi(vecDataOUT.at(i).getAdressePhoto());    // Pour savoir si l'image est "jpg", "png",...
        QString l_nomImg(QString::number(i)+"."+fi.suffix());
        //vecAdrDataImg.at(i).setID(i);
        QString URL("http://192.168.1.25/media/"+vecDataOUT.at(i).getAdressePhoto()); // URL de ou sont hebergées les images
        l_imagedl->setFile(URL,CheminImg,l_nomImg);
        // Pixmap directement dans dataimg
        QString l_chemin(CheminImg + l_nomImg);  // chemin vers fichier
        QPixmap l_photo(l_chemin);
        DataImg l_data = vecDataOUT.at(i);
        l_data.setPhoto(l_photo,700,150);
        vecDataOUT.replace(i,l_data);
    }
    return vecDataOUT;
}

QVector<DataImg> SetImgSansDL(){
    // Permet d'ajouter de cree les data image avec la base de donnee, et d'ajouter les photos
    // aux datas sans telecharger les images


    // ---- REQUETE DATABASE MYSQL ----
    //DbManager Requete("/Users/tanguy/Desktop/Projet_IMERIR/table_numerique/Table-Tactile/table_numerique/db.sqlite3");
    DbManager Requete("192.168.1.25","table_numerique","tabapplication","tabvisa"); // Requet sur la base de donnée
    QVector<DataImg> vecDataOUT = Requete.query_theme_dataImg("perpignan");                  // Recupére adresse des images
    QString CheminImg(QCoreApplication::applicationDirPath()+"/Images/");
    QDir DirImg(CheminImg);
    DirImg.setNameFilters(QStringList()<<"*.png"<<"*.jpg");    // Choix extentions des fichiers
    QStringList fileList = DirImg.entryList();
    foreach (QString file, fileList) {
        int num = file.section(".",0,0).toInt();    // On recupere le titre qui correspond à la place dans le vecteur
        QPixmap l_photo(CheminImg + file);
        DataImg l_data = vecDataOUT.at(num);
        l_data.setPhoto(l_photo,700,150);
        vecDataOUT.replace(num,l_data);
    }
    return vecDataOUT;
}
