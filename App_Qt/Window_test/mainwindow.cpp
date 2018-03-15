#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    WebView = new QWebEngineView();
    WebView->load(QUrl("http://photo-journalisme.org/"));   // URL
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    MainWindow::close();
}

void MainWindow::on_pushButton_2_clicked()
{
    test = new AppWindow();
    test->showMaximized();
}

void MainWindow::on_pushButton_3_clicked()
{
    testweb = new QWebEngineView();
    testweb->load(QUrl("https://www.google.fr"));
    setCentralWidget(testweb);
}

void MainWindow::on_pushButton_4_clicked()
{
    test2 = new App2Window(0,WebView);
    test2->showMaximized();
}

void MainWindow::on_bGalerie_clicked()
{
    wGalerie = new appGalerie();
    wGalerie->showMaximized();
}

void MainWindow::loadImage()
{

    QPixmap buttonImage;
    buttonImage.loadFromData(m_pImgCtrl.last()->downloadedData());
    vecImgDl.push_back(buttonImage);
    buttonImage = buttonImage.scaled(600, 600, Qt::KeepAspectRatioByExpanding);
    vecImgScalDl.push_back(buttonImage);
    ui->test->setPixmap(buttonImage);
}
