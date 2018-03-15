#ifndef APPWINDOW_H
#define APPWINDOW_H

#include <QMainWindow>
#include <QUrl>
#include <QWebEngineView>

namespace Ui {
class AppWindow;
}

class AppWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AppWindow(QWidget *parent = 0);
    ~AppWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AppWindow *ui;
    QWebEngineView *WebView;
};

#endif // APPWINDOW_H
