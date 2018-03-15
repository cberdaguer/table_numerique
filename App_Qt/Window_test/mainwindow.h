#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "appwindow.h"
#include "app2window.h"
#include "appgalerie.h"
#include "dbmanager.h"
#include "filedownloader.h"
#include "qdownloader.h"
#include <QApplication>
#include <QWidget>
#include <QDesktopServices>
#include <QUrl>
#include <QWebEngineView>

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
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_bGalerie_clicked();

    void loadImage();

private:
    Ui::MainWindow *ui;
    AppWindow *test;
    App2Window *test2;
    appGalerie *wGalerie;
    QWebEngineView *testweb;
    QWebEngineView *WebView;
    QVector<FileDownloader*> m_pImgCtrl;
    QVector<QPixmap> vecImgDl;
    QVector<QPixmap> vecImgScalDl;

};

#endif // MAINWINDOW_H
