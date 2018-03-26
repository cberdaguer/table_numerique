/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *BoutonAppWeb;
    QPushButton *BoutonAppGalerie;
    QPushButton *BoutonAppWeb2;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(2064, 1312);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QLatin1String("\n"
"background-image: url(:/Logo_CIP_horizontal_res.jpg);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        BoutonAppWeb = new QPushButton(centralwidget);
        BoutonAppWeb->setObjectName(QStringLiteral("BoutonAppWeb"));
        BoutonAppWeb->setGeometry(QRect(100, 110, 331, 301));
        BoutonAppWeb->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/web.png"), QSize(), QIcon::Normal, QIcon::Off);
        BoutonAppWeb->setIcon(icon);
        BoutonAppWeb->setIconSize(QSize(300, 300));
        BoutonAppWeb->setFlat(true);
        BoutonAppGalerie = new QPushButton(centralwidget);
        BoutonAppGalerie->setObjectName(QStringLiteral("BoutonAppGalerie"));
        BoutonAppGalerie->setGeometry(QRect(1010, 90, 321, 321));
        BoutonAppGalerie->setStyleSheet(QStringLiteral(""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/galerie.png"), QSize(), QIcon::Normal, QIcon::Off);
        BoutonAppGalerie->setIcon(icon1);
        BoutonAppGalerie->setIconSize(QSize(300, 300));
        BoutonAppGalerie->setFlat(true);
        BoutonAppWeb2 = new QPushButton(centralwidget);
        BoutonAppWeb2->setObjectName(QStringLiteral("BoutonAppWeb2"));
        BoutonAppWeb2->setGeometry(QRect(550, 100, 331, 301));
        BoutonAppWeb2->setStyleSheet(QStringLiteral(""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/visite.png"), QSize(), QIcon::Normal, QIcon::Off);
        BoutonAppWeb2->setIcon(icon2);
        BoutonAppWeb2->setIconSize(QSize(300, 300));
        BoutonAppWeb2->setFlat(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 2064, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        BoutonAppWeb->setText(QString());
        BoutonAppGalerie->setText(QString());
        BoutonAppWeb2->setText(QString());
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
