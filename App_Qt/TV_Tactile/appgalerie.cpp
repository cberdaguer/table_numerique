#include "appgalerie.h"
#include "ui_appgalerie.h"

appGalerie::appGalerie(QWidget *parent,QVector<DataImg> vecDataImg) :
    QMainWindow(parent),
    ui(new Ui::appGalerie)
{
    ui->setupUi(this);
    this->VecDataImg = vecDataImg;

    QHBoxLayout *layout = new QHBoxLayout();
    int incr=0;
    foreach (DataImg img, VecDataImg) {
        // On ajoute les images dans des vecteurs pour les avoir dans toutes les methodes de la classe
        ui->txtPhotographe->setText(img.getPhotographe());
        ui->txtTitre->setText(img.getTitre());

        QPushButton *bouton = new QPushButton();
        bouton->setFlat(true);
        QIcon ButtonIcon(img.getMiniature());  // Ajout de l'image sur un bouton
        bouton->setText(QString::number(incr));    // Ajout du num de bouton pour le recuperer facilement
        bouton->setIcon(ButtonIcon);
        bouton->setIconSize(img.getMiniature().rect().size());
        bouton->setFixedSize(img.getMiniature().rect().size());
        connect( bouton, &QPushButton::clicked, [=] { on_VecBut_clicked( bouton ); } ); // Connect a la methode on_VecBut_clicked
        VecBut.append(bouton);      // Ajout dans le vecteur
        layout->addWidget(bouton);  // Ajout dans le layout
        incr++;
    }
    if(!VecDataImg.isEmpty()){
        ui->MiniatureScrollWidgetContents->setLayout(layout);   // Lorsque le for est fini on ajout le Layout dans Scroll
        ui->ImgPrincipal->setPixmap(VecDataImg.at(0).getPhoto());      // Place la premiere image du vecteur en image Principal
        ui->txtPhotographe->setText(VecDataImg.at(0).getPhotographe());
        ui->txtTitre->setText(VecDataImg.at(0).getTitre());
        //ui->txtContenu->setText(VecDataImg.at(0).getContenu());
    }
}

appGalerie::~appGalerie()
{
    delete ui;
}

void appGalerie::on_VecBut_clicked(QPushButton* bouton)
{
    int nb_bouton = bouton->text().toInt();
    ui->ImgPrincipal->setPixmap(VecDataImg.at(nb_bouton).getPhoto());
    ui->txtTitre->setText(VecDataImg.at(nb_bouton).getTitre());
    ui->txtPhotographe->setText(VecDataImg.at(nb_bouton).getPhotographe());
    //ui->txtContenu->setText(VecDataImg.at(nb_bouton).getContenu());
}


void appGalerie::on_bRetour_clicked()
{
    //---- bouton Retour ----
    // Ferme la fenetre au click
    appGalerie::close();
}
