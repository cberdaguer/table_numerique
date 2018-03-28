#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>
#include <QUrl>
#include <QWebEngineView>

#include "appweb.h"
#include "appgalerie.h"
#include "dataimg.h"
#include "dbmanager.h"
#include "configwindow.h"

#include "iostream"
using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0, QVector<DataImg> img = QVector<DataImg>(), DbManager requete = DbManager(), int num_table = 0);
    ~MainWindow();

private slots:

    void on_BoutonAppWeb_clicked();

    void on_BoutonAppGalerie_clicked();

    void on_BoutonAppWeb2_clicked();


    void on_cbSite_activated(const QString &arg1);

    void on_cbVisite_activated(const QString &arg1);

private:
    Ui::MainWindow *ui;
    AppWeb *windowWebVitrine;
    AppWeb *windowWebVisite;
    appGalerie *windowGalerie;
    QWebEngineView *wVitrine;
    QWebEngineView *wVisite;
    QMap<QString,QString> mapSite;
    QMap<QString,QString> mapVisite;


};

#endif // MAINWINDOW_H
