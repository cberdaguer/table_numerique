#include "dataimg.h"

DataImg::DataImg()
{

}


DataImg::DataImg(int id,QString titre,QString photographe,QString contenu,QString date,int themeid)
{
    this->ID = id;
    this->Titre = titre;
    this->Photographe = photographe;
    this->Contenu = contenu;
    this->Date = date;
    this->ThemeID = themeid;
}

int DataImg::getID() const
{
    return ID;
}

void DataImg::setID(int value)
{
    ID = value;
}

QString DataImg::getTitre() const
{
    return Titre;
}

void DataImg::setTitre(const QString &value)
{
    Titre = value;
}

QString DataImg::getPhotographe() const
{
    return Photographe;
}

void DataImg::setPhotographe(const QString &value)
{
    Photographe = value;
}

QString DataImg::getContenu() const
{
    return Contenu;
}

void DataImg::setContenu(const QString &value)
{
    Contenu = value;
}

QString DataImg::getAdressePhoto() const
{
    return AdressePhoto;
}

void DataImg::setAdressePhoto(const QString &value)
{
    AdressePhoto = value;
}

QString DataImg::getDate() const
{
    return Date;
}

void DataImg::setDate(const QString &value)
{
    Date = value;
}

int DataImg::getThemeID() const
{
    return ThemeID;
}

void DataImg::setThemeID(int value)
{
    ThemeID = value;
}

QPixmap DataImg::getPhoto() const
{
    return Photo;
}

QPixmap DataImg::getMiniature() const
{
    return PhotoMiniature;
}

void DataImg::setPhoto(QPixmap value, int grande, int miniature)
{
    Photo = value.scaled(grande, grande, Qt::KeepAspectRatioByExpanding);
    PhotoMiniature = value.scaled(miniature, miniature, Qt::KeepAspectRatioByExpanding);
}



