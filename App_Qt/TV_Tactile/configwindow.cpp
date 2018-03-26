#include "configwindow.h"
#include "ui_configwindow.h"

configWindow::configWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::configWindow)
{
    ui->setupUi(this);
}

configWindow::~configWindow()
{
    delete ui;
}
