#ifndef APPGALERIE_H
#define APPGALERIE_H

#include <QMainWindow>
#include <QPushButton>
#include <QDir>

#include "dataimg.h"

namespace Ui {
class appGalerie;
}

class appGalerie : public QMainWindow
{
    Q_OBJECT

public:
    explicit appGalerie(QWidget *parent = 0, QVector<DataImg> vecDataImg = QVector<DataImg>());
    ~appGalerie();

private:
    Ui::appGalerie *ui;
    void on_VecBut_clicked(QPushButton *bouton);
    QString pathImg;
    QVector<QPixmap> VecImg;
    QVector<QPixmap> VecImgScl;
    QVector<DataImg> VecDataImg;

};

#endif // APPGALERIE_H
