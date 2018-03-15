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
