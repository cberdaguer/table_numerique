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

    int getOutvalue() const;

private slots:
    void on_bRetour_clicked();

private:
    Ui::configWindow *ui;
    int outvalue;
};

#endif // CONFIGWINDOW_H
