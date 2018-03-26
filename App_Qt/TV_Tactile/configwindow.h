#ifndef CONFIGWINDOW_H
#define CONFIGWINDOW_H

#include <QDialog>

namespace Ui {
class configWindow;
}

class configWindow : public QDialog
{
    Q_OBJECT

public:
    explicit configWindow(QWidget *parent = 0);
    ~configWindow();

private:
    Ui::configWindow *ui;
};

#endif // CONFIGWINDOW_H
