#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>
#include <QUrl>
#include <QWebEngineView>

#include "appweb.h"
#include "appgalerie.h"

#include "iostream"
using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_BoutonAppWeb_clicked();

    void on_BoutonAppGalerie_clicked();

private:
    Ui::MainWindow *ui;

    AppWeb *windowWebVitrine;
    appGalerie *windowGalerie;

    QWebEngineView *wVitrine;


};

#endif // MAINWINDOW_H
