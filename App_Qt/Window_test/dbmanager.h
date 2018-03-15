#ifndef DBMANAGER_H
#define DBMANAGER_H
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlRecord>

class DbManager
{
public:
    DbManager(const QString& path);
    void showPhoto();
    void SELECT_FROM_table(QString select, QString from,QString table);
    QVector<QString> query_theme(QString ville);
private:
    QSqlDatabase m_db;

private slots:
    void loadImage();
};

#endif // DBMANAGER_H
