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
    QVector<DataImg> VecDataImg;
    QVector<QPushButton*> VecBut;   // Vecteur de bouton pour avoir autant de bouton que d'image

};

#endif // APPGALERIE_H
