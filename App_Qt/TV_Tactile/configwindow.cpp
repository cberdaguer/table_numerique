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

void configWindow::on_bRetour_clicked()
{
    outvalue = ui->spinBox->value();
    configWindow::close();
}

int configWindow::getOutvalue() const
{
    return outvalue;
}
