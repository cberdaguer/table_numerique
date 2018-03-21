#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dataimg.h"

// MainWindow correspond à la page principal de l'application
// Il est possible d'ouvir toutes les applications depuis cette fenetre

MainWindow::MainWindow(QWidget *parent,QVector<DataImg> img) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Pre-load les pages web
    QUrl siteVitrine("http://photo-journalisme.org/");
    QUrl siteVisite("http://khent-hosting.fr/Visite_virtuelle_CIP_Complet/Exposition%20russie%201917%20CIP.html");
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
