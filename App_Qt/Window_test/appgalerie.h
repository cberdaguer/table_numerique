#ifndef APPGALERIE_H
#define APPGALERIE_H

#include <QMainWindow>
#include <QGraphicsItem>
#include <QPushButton>
#include <QDir>
#include <QStringList>
#include "dbmanager.h"
#include "filedownloader.h"

namespace Ui {
class appGalerie;
}

class appGalerie : public QMainWindow
{
    Q_OBJECT

public:
    explicit appGalerie(QWidget *parent = 0);
    ~appGalerie();

private:
    void on_VecBut_clicked(QPushButton *bouton);
    QPixmap imageprincipal;
    Ui::appGalerie *ui;
    FileDownloader *m_pImgCtrl;
    QString pathImg;
    QVector<QPixmap> VecImg;
    QVector<QPixmap> VecImgScl;


private slots:


};

#endif // APPGALERIE_H
