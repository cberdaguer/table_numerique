#include "appgalerie.h"
#include "ui_appgalerie.h"

appGalerie::appGalerie(QWidget *parent,QVector<DataImg> vecDataImg) :
    QMainWindow(parent),
    ui(new Ui::appGalerie)
{
    ui->setupUi(this);
    this->VecDataImg = vecDataImg;

    QHBoxLayout *layout = new QHBoxLayout();
    QVector<QPushButton*> VecBut;   // Vecteur de bouton pour avoir autant de bouton que d'image
    foreach (DataImg img, VecDataImg) {
        // On ajoute les images dans des vecteurs pour les avoir dans toutes les methodes de la classe
        ui->txtPhotographe->setText(img.getPhotographe());
        ui->txtTitre->setText(img.getTitre());
        VecImg.push_back(img.getPhoto());
        VecImgScl.push_back(img.getMiniature());

        QPushButton *bouton = new QPushButton();
        QIcon ButtonIcon(VecImgScl.back());  // Ajout de l'image sur un bouton
        bouton->setText(QString::number(VecImg.size()-1));    // Ajout du num de bouton pour le recuperer facilement
        bouton->setIcon(ButtonIcon);
        bouton->setIconSize(VecImgScl.back().rect().size());
        bouton->setFixedSize(VecImgScl.back().rect().size());
        connect( bouton, &QPushButton::clicked, [=] { on_VecBut_clicked( bouton ); } ); // Connect a la methode on_VecBut_clicked
        VecBut.append(bouton);      // Ajout dans le vecteur
        layout->addWidget(bouton);  // Ajout dans le layout
    }
    ui->MiniatureScrollWidgetContents->setLayout(layout);   // Lorsque le for est fini on ajout le Layout dans Scroll
    ui->ImgPrincipal->setPixmap(VecImg.at(0));      // Place la premiere image du vecteur en image Principal
}

appGalerie::~appGalerie()
{
    delete ui;
}

void appGalerie::on_VecBut_clicked(QPushButton* bouton)
{
    int nb_bouton = bouton->text().toInt();
    ui->ImgPrincipal->setPixmap(VecImg.at(nb_bouton));
    ui->txtTitre->setText(VecDataImg.at(nb_bouton).getTitre());
    ui->txtPhotographe->setText(VecDataImg.at(nb_bouton).getPhotographe());
}

