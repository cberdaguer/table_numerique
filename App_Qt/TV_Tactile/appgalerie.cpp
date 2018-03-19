#include "appgalerie.h"
#include "ui_appgalerie.h"

appGalerie::appGalerie(QWidget *parent,QVector<DataImg> img) :
    QMainWindow(parent),
    ui(new Ui::appGalerie)
{
    ui->setupUi(this);

    QHBoxLayout *layout = new QHBoxLayout();
    QVector<QPushButton*> VecBut;   // Vecteur de bouton pour avoir autant de bouton que d'image
    pathImg.append(QCoreApplication::applicationDirPath()+"/Images");   // Chemin dossier ou les img on ete dl
    QDir Dir(pathImg);
    Dir.setNameFilters(QStringList()<<"*.png"<<"*.jpg");    // Choix extentions des fichiers
    QStringList fileList = Dir.entryList();
    pathImg.append("/");
    foreach (QString fichier, fileList) {
        QString l_chemin(pathImg + fichier);  // chemin vers fichier
        // Cree 2 QPixmap pour 2 tailles d'image
        QPixmap l_image(l_chemin);
        l_image = l_image.scaled(700, 700, Qt::KeepAspectRatioByExpanding);
        QPixmap l_imagescal = l_image.scaled(150, 150, Qt::KeepAspectRatioByExpanding);
        // On ajoute les images dans des vecteurs pour les avoir dans toutes les methodes de la classe
        VecImg.push_back(l_image);
        VecImgScl.push_back(l_imagescal);

        QPushButton *bouton = new QPushButton();
        QIcon ButtonIcon(l_imagescal);  // Ajout de l'image sur un bouton
        bouton->setText(QString::number(fileList.indexOf(fichier)));    // Ajout du num de bouton pour le recuperer facilement
        bouton->setIcon(ButtonIcon);
        bouton->setIconSize(l_imagescal.rect().size());
        bouton->setFixedSize(l_imagescal.rect().size());
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
    ui->ImgPrincipal->setPixmap(VecImg.at(bouton->text().toInt()));
}

