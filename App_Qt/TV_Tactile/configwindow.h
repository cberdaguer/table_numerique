#ifndef CONFIGWINDOW_H
#define CONFIGWINDOW_H

#include <QDialog>
#include "dbmanager.h"

namespace Ui {
class configWindow;
}

class configWindow : public QDialog
{
    Q_OBJECT

public:
    explicit configWindow(QWidget *parent = 0, DbManager requete = DbManager());
    ~configWindow();

    int getOutvalue() const;

    QString getOuttheme() const;

private slots:
    void on_bRetour_clicked();

    void on_spinBox_valueChanged(const QString &arg1);

private:
    Ui::configWindow *ui;
    void ajoute_spinBox(QString arg1);
    int outvalue;
    DbManager db;
    QVector<QString> themes;
    QString outtheme;
};

#endif // CONFIGWINDOW_H
