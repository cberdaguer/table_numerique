#include "configwindow.h"
#include "ui_configwindow.h"


configWindow::configWindow(QWidget *parent,DbManager requete) :
    QDialog(parent),
    ui(new Ui::configWindow)
{
    ui->setupUi(this);
    db = requete;
    ajoute_spinBox(QString::number(ui->spinBox->value()));
}

configWindow::~configWindow()
{
    delete ui;
}

void configWindow::on_bRetour_clicked()
{
    outvalue = ui->spinBox->value();
    outtheme = ui->comboBox->currentText();
    configWindow::close();
}

int configWindow::getOutvalue() const
{
    return outvalue;
}


void configWindow::on_spinBox_valueChanged(const QString &arg1)
{

    ajoute_spinBox(arg1);
}

QString configWindow::getOuttheme() const
{
    return outtheme;
}

void configWindow::ajoute_spinBox(QString arg1){
    themes = db.query_all("SELECT galerie_photo_theme.nom FROM gestion_table_table\
                                                INNER JOIN gestion_table_table_galerie\
                                                ON (gestion_table_table.id = gestion_table_table_galerie.table_id)\
                                                INNER JOIN galerie_photo_theme\
                                                ON (galerie_photo_theme.id = gestion_table_table_galerie.theme_id)\
                                                WHERE (gestion_table_table.numero = "+arg1+");");
   ui->comboBox->clear();
   foreach (QString theme, themes) ui->comboBox->addItem(theme);
   if(themes.size() == 0) ui->bRetour->setEnabled(false);
   else ui->bRetour->setEnabled(true);
}
