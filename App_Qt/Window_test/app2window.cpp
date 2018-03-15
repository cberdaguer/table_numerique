#include "app2window.h"
#include "ui_app2window.h"


App2Window::App2Window(QWidget *parent, QWebEngineView *web) :
    QMainWindow(parent),
    ui(new Ui::App2Window)
{
    ui->setupUi(this);
    WebView = web;

    ui->verticalLayout_7->addWidget(WebView);   // on le met dans le Layout

    // Ouvir une image
    QPixmap image("/Users/tanguy/Downloads/ra.jpg");
    QLabel *imageLabel = new QLabel();
    imageLabel->setPixmap(image);

}

App2Window::~App2Window()
{
    delete ui;
}

void App2Window::on_pushButton_clicked()
{
    WebView->load(QUrl("http://photo-journalisme.org/"));
    App2Window::close();
}
