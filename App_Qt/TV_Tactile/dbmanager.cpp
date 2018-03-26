#include "dbmanager.h"


#define q2c(string) string.toStdString()

// DbManager Permet de se connecter à une base de données

DbManager::DbManager(const QString& path)
{
    m_db = QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName(path);

    if (!m_db.open())
    {
        qDebug() << "Error: connection with database fail";
    }
    else
    {
        qDebug() << "Database: connection ok";
    }
}

DbManager::DbManager(const QString& IP,const QString& Name,const QString& UserName,const QString& Password)
{

    // Connection MYSQL
    m_db = QSqlDatabase::addDatabase("QMYSQL");
    m_db.setHostName(IP);
    m_db.setDatabaseName(Name);
    m_db.setUserName(UserName);
    m_db.setPassword(Password);

    if (!m_db.open())
    {
        qDebug() << "Error: connection with database fail";
    }
    else
    {
        qDebug() << "Database: connection ok";
    }
}

QVector<QString> DbManager::query_theme(QString ville)
{
    // Cette fonction permet de renvoyer l'adresse des images pour une ville donnée en entrée
    QSqlQuery query;
    QVector<QString> out_nom_photo;
    QString requete("SELECT * FROM galerie_photo_photo\
                    INNER JOIN galerie_photo_theme\
                    ON (galerie_photo_photo.theme_id=galerie_photo_theme.id)\
                    WHERE(galerie_photo_theme.nom = '"+ville+"')");
                    if(query.exec(requete))
    {
                        while(query.next())
                        {
                            //std::cout << "    Nouvelle entrée" << std::endl;
                            for(int x=0; x < query.record().count(); ++x)
                            {
                                if(!q2c(query.record().fieldName(x)).compare("photo")){
                                    out_nom_photo.push_back(query.value(x).toString());
                                    std::cout << "        " << q2c(query.record().fieldName(x)) << " = " << q2c(query.value(x).toString()) << std::endl;
                                }
                            }
                        }
                    }
                    return out_nom_photo;
}


QVector<DataImg> DbManager::query_theme_dataImg(QString ville)
{
    // Cette fonction permet de renvoyer l'adresse des images pour une ville donnée en entrée
    QSqlQuery query;
    QVector<DataImg> out_data;
    QString requete("SELECT * FROM galerie_photo_photo\
                    INNER JOIN galerie_photo_theme\
                    ON (galerie_photo_photo.theme_id=galerie_photo_theme.id)\
                    WHERE(galerie_photo_theme.nom = '"+ville+"')");
                    if(query.exec(requete))
    {
                        while(query.next())
                        {
                            DataImg Img;
                            for(int x=0; x < query.record().count(); ++x)
                            {
                                if (!(query.record().fieldName(x).compare("titre"))) Img.setTitre( query.value(x).toString());
                                else if (!(query.record().fieldName(x).compare("photographe"))) Img.setPhotographe(query.value(x).toString());
                                else if (!(query.record().fieldName(x).compare("contenu"))) Img.setContenu(query.value(x).toString());
                                else if (!(query.record().fieldName(x).compare("photo"))) Img.setAdressePhoto(query.value(x).toString());
                                else if (!(query.record().fieldName(x).compare("date"))) Img.setDate(query.value(x).toString());
                                else if(!(query.record().fieldName(x).compare("theme_id"))) Img.setThemeID((query.value(x).toInt()));

                                std::cout << "        " << q2c(query.record().fieldName(x)) << " = " << q2c(query.value(x).toString()) << std::endl;
                                //}
                            }
                            out_data.push_back(Img);
                        }
                    }
                    return out_data;
}


QMap<QString,QVector<QString>> DbManager::query_requete(QString requete)
{
    // Cette fonction permet de renvoyer l'adresse des images pour une ville donnée en entrée
    QSqlQuery query;
    QMap<QString,QVector<QString>> out_data;
    if(query.exec(requete))
    {
        while(query.next())
        {
            for(int x=0; x < query.record().count(); ++x)
            {
                if(out_data.contains(query.record().fieldName(x))){
                    QVector<QString> old = out_data.value(query.record().fieldName(x));
                    old.append(query.value(x).toString());
                    out_data.insert(query.record().fieldName(x),old);
                }
                else{
                    QVector<QString> l_new;
                    l_new.push_back(query.value(x).toString());
                    out_data.insert(query.record().fieldName(x),l_new);
                }
                std::cout << "        " << q2c(query.record().fieldName(x)) << " = " << q2c(query.value(x).toString()) << std::endl;
                //}
            }
        }
    }
    return out_data;
}

QMap<QString,QString> DbManager::query_site(QString requete)
{
    // Cette fonction permet de renvoyer l'adresse des images pour une ville donnée en entrée
    QSqlQuery query;
    QMap<QString,QString> out_data;
    if(query.exec(requete))
    {
        while(query.next())
        {

            out_data.insert(query.value(0).toString(),query.value(1).toString());
        }
    }
    return out_data;
}
/*
void DbManager::showPhoto()
{
    QSqlQuery query("SELECT * FROM galerie_photo_photo ");


    //int idName = query.record().indexOf("photographe");
    int i=0;
    while (query.next())
    {
        QString name = query.value(i).toString();
        qDebug() << name;
        i++;
    }
}

void DbManager::SELECT_FROM_table(QString select, QString from,QString table)
{
    QSqlQuery query("SELECT " + select +"FROM " + from);
    int idName = query.record().indexOf(table);
    while (query.next())
    {
        QString name = query.value(idName).toString();
        qDebug() << name;
    }
}*/
