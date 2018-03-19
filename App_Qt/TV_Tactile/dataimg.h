#ifndef DATAIMG_H
#define DATAIMG_H

#include <QString.h>
#include <QPixmap>


class DataImg
{
public:
    DataImg();
    DataImg(int id,QString titre,QString photographe,QString contenu,QString date,int themeid);

    int ID;
    QString Titre;
    QString Photographe;
    QString Contenu;
    QString AdressePhoto;
    QString Date;
    int ThemeID;
    QPixmap Photo;
    QPixmap PhotoMiniature;


    int getID() const;
    void setID(int value);

    QString getTitre() const;
    void setTitre(const QString &value);

    QString getPhotographe() const;
    void setPhotographe(const QString &value);

    QString getContenu() const;
    void setContenu(const QString &value);

    QString getAdressePhoto() const;
    void setAdressePhoto(const QString &value);

    QString getDate() const;
    void setDate(const QString &value);

    int getThemeID() const;
    void setThemeID(int value);

    QPixmap getPhoto() const;
    void setPhoto(QPixmap value, int grande, int miniature);

    void Imgs(QPixmap value, int grande, int miniature);

protected:




};

#endif // DATAIMG_H
