#include "mainwindow.h"
#include "ui_mainwindow.h"


// MainWindow correspond à la page principal de l'application
// Il est possible d'ouvir toutes les applications depuis cette fenetre

MainWindow::MainWindow(QWidget *parent,QVector<DataImg> img,DbManager requete,int num_table) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mapSite = requete.query_site("SELECT site_web_site.name, site_web_site.site from gestion_table_table\
                            INNER JOIN gestion_table_table_site\
                            ON (gestion_table_table.id = gestion_table_table_site.table_id)\
                            INNER JOIN site_web_site\
                            ON(site_web_site.id = gestion_table_table_site.site_id)\
                            WHERE (gestion_table_table.numero = "+QString::number(num_table)+");");

    mapVisite = requete.query_site("SELECT visite_virtuelle_visite.name, visite_virtuelle_visite.visite from gestion_table_table\
                              INNER JOIN gestion_table_table_visite\
                              ON (gestion_table_table.id = gestion_table_table_visite.table_id)\
                              INNER JOIN visite_virtuelle_visite\
                              ON (visite_virtuelle_visite.id = gestion_table_table_visite.visite_id)\
                              WHERE (gestion_table_table.numero = "+QString::number(num_table)+");");

    foreach (QString key, mapSite.keys()) ui->cbSite->addItem(key);
    foreach (QString key, mapVisite.keys()) ui->cbVisite->addItem(key);



            // Pre-load les pages web
    QUrl siteVitrine(mapSite.first());
    QUrl siteVisite(mapVisite.first());
    wVitrine = new QWebEngineView();
    wVitrine->load(siteVitrine);  // Load site vitrine
    wVisite = new QWebEngineView();
    wVisite->load(siteVisite);  // Load site vitrine


    windowWebVitrine = new AppWeb(0,wVitrine,siteVitrine);              // Crée la fenetre AppWeb non visible
    windowWebVisite = new AppWeb(0,wVisite,siteVisite);
    windowGalerie = new appGalerie(0,img);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_BoutonAppWeb_clicked()
{
    //---- BoutonAppWeb ----
    // Lance la fenetre appweb suite au click sur ce bouton

    if(windowWebVitrine->isVisible()==false){   // Permet de n'avoir que une seule fenetre ouverte à la fois
        windowWebVitrine->showMaximized();      // Ouvre en pleine ecran
    }
}

void MainWindow::on_BoutonAppGalerie_clicked()
{
    //---- BoutonAppGalerie ----
    // Lance la fenetre appGalerie suite au click sur ce bouton

    if(windowGalerie->isVisible()==false){   // Permet de n'avoir que une seule fenetre ouverte à la fois
        windowGalerie->showMaximized();      // Ouvre en pleine ecran
    }
}

void MainWindow::on_BoutonAppWeb2_clicked()
{
    //---- BoutonAppWeb ----
    // Lance la fenetre appweb suite au click sur ce bouton

    if(windowWebVisite->isVisible()==false){   // Permet de n'avoir que une seule fenetre ouverte à la fois
        windowWebVisite->showMaximized();      // Ouvre en pleine ecran
    }
}

void MainWindow::on_cbSite_activated(const QString &arg1)
{
    QUrl newURL(mapSite.value(arg1));
    wVitrine->load(newURL);
    windowWebVitrine->setSaveURL(newURL);
}

void MainWindow::on_cbVisite_activated(const QString &arg1)
{
    QUrl newURL(mapVisite.value(arg1));
    wVisite->load(newURL);
    windowWebVisite->setSaveURL(newURL);
}
