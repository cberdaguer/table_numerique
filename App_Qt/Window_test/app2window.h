#ifndef APP2WINDOW_H
#define APP2WINDOW_H

#include <QMainWindow>
#include <QUrl>
#include <QWebEngineView>
#include <QGraphicsPixmapItem>
#include <QLabel>

namespace Ui {
class App2Window;
}

class App2Window : public QMainWindow
{
    Q_OBJECT

public:
    explicit App2Window(QWidget *parent = 0, QWebEngineView *web = 0);
    ~App2Window();

private slots:
    void on_pushButton_clicked();

private:
    Ui::App2Window *ui;
    QWebEngineView *WebView;
};

#endif // APP2WINDOW_H
