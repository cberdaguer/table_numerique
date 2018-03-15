#include "dbmanager.h"
#include "iostream"

#define q2c(string) string.toStdString()


using namespace std;

DbManager::DbManager(const QString& path)
{
    m_db = QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName(path);
    /*m_db = QSqlDatabase::addDatabase("QMYSQL");
    m_db.setHostName("192.168.1.25");
    m_db.setDatabaseName("table_numerique");
    m_db.setUserName("tabapplication");
    m_db.setPassword("tabvisa");*/

    if (!m_db.open())
    {
        qDebug() << "Error: connection with database fail";
    }
    else
    {
        qDebug() << "Database: connection ok";
    }
}
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
}

QVector<QString> DbManager::query_theme(QString ville)
{
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
