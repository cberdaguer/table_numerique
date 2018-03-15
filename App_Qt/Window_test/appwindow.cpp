#include "appwindow.h"
#include "ui_appwindow.h"
#include <QVBoxLayout>

AppWindow::AppWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AppWindow)
{
    ui->setupUi(this);
    WebView = new QWebEngineView();
    WebView->load(QUrl("http://photo-journalisme.org/"));
    //setCentralWidget(WebView);
    //ui->widgetWEB->setLayout(new QVBoxLayout);
    //ui->widgetWEB->layout()->addWidget(WebView);
    ui->gridLayout->addWidget(WebView);


}

AppWindow::~AppWindow()
{
    delete ui;
}

void AppWindow::on_pushButton_clicked()
{
    AppWindow::close();
}
