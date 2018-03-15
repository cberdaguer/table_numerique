#include "appgalerie.h"
#include "ui_appgalerie.h"
#include "iostream"

using namespace std;



appGalerie::appGalerie(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::appGalerie)
{
    ui->setupUi(this);

    QVector<QPushButton*> VecBut;
    pathImg.append(QCoreApplication::applicationDirPath()+"/Images");
    QDir Dir(pathImg);
    Dir.setNameFilters(QStringList()<<"*.png"<<"*.jpg");
    QStringList fileList = Dir.entryList();
    pathImg.append("/");
    QHBoxLayout *layout = new QHBoxLayout();
    foreach (QString file, fileList) {
        QString l_path(pathImg+ file);
        QPixmap l_image(l_path);
        l_image = l_image.scaled(700, 700, Qt::KeepAspectRatioByExpanding);
        QPixmap l_imagescal = l_image.scaled(200, 200, Qt::KeepAspectRatioByExpanding);
        VecImg.push_back(l_image);
        VecImgScl.push_back(l_imagescal);
        QPushButton *bouton = new QPushButton();
        QIcon ButtonIcon(l_imagescal);
        bouton->setText(QString::number(fileList.indexOf(file)));
        bouton->setIcon(ButtonIcon);
        bouton->setIconSize(l_imagescal.rect().size());
        bouton->setFixedSize(l_imagescal.rect().size());
        connect( bouton, &QPushButton::clicked, [=] { on_VecBut_clicked( bouton ); } );
        VecBut.append(bouton);
        layout->addWidget(bouton);
    }
    ui->scrollAreaWidgetContents->setLayout(layout);


    QPixmap image(pathImg+"/"+"0.jpg");
    image = image.scaled(600, 600, Qt::KeepAspectRatioByExpanding);
    ui->lImage->setPixmap(image);

}

appGalerie::~appGalerie()
{
    delete ui;
}

void appGalerie::on_VecBut_clicked(QPushButton* bouton)
{
    ui->lImage->setPixmap(VecImg.at(bouton->text().toInt()));
    cout << bouton->text().toStdString()<<endl;
}



