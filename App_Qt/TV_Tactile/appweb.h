#ifndef APPWEB_H
#define APPWEB_H

#include <QMainWindow>
#include <QUrl>
#include <QWebEngineView>

namespace Ui {
class AppWeb;
}

class AppWeb : public QMainWindow
{
    Q_OBJECT

public:
    explicit AppWeb(QWidget *parent = 0,QWebEngineView *web = 0);
    ~AppWeb();

private slots:
    void on_bRetour_clicked();

private:
    Ui::AppWeb *ui;
    QWebEngineView *wViewer;
};

#endif // APPWEB_H