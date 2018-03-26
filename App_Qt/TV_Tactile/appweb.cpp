#include "appweb.h"
#include "ui_appweb.h"

// AppWeb permet d'ouvrir une fenetre avec un site web a l'interieur
// Le site que l'on veut ouvrir est en entree de la classe : QWebEngineView *web

AppWeb::AppWeb(QWidget *parent,QWebEngineView *web,QUrl principal) :
    QMainWindow(parent),
    ui(new Ui::AppWeb)
{
    ui->setupUi(this);
    wViewer = web;
    saveURL = principal;
    ui->hLayout_Up->addWidget(wViewer);
}

AppWeb::~AppWeb()
{
    delete ui;
}

void AppWeb::on_bRetour_clicked()
{
            //---- bouton Retour ----
    // Ferme la fenetre au click

    // On charge la page principal avant de fermer pour ne pas re-ouvrir sur la page en cours
    wViewer->load(saveURL);
    AppWeb::close();

}

void AppWeb::setSaveURL(const QUrl &value)
{
    saveURL = value;
}
