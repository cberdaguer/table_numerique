#ifndef DBMANAGER_H
#define DBMANAGER_H
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlRecord>



#include "iostream"
using namespace std;

class DbManager
{
public:
    DbManager(const QString& path);
    DbManager(const QString& IP, const QString &Name, const QString &UserName, const QString &Password);
    QVector<QString> query_theme(QString ville);


    //void showPhoto();
    //void SELECT_FROM_table(QString select, QString from,QString table);

private:
    QSqlDatabase m_db;

private slots:
    void loadImage();
};

#endif // DBMANAGER_H