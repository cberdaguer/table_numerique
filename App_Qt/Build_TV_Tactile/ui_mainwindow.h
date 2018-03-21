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

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(825, 541);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QLatin1String("\n"
"background-image: url(:/Logo_CIP_horizontal_res.jpg);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        BoutonAppWeb = new QPushButton(centralwidget);
        BoutonAppWeb->setObjectName(QStringLiteral("BoutonAppWeb"));
        BoutonAppWeb->setGeometry(QRect(60, 30, 211, 211));
        BoutonAppWeb->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/web.png"), QSize(), QIcon::Normal, QIcon::Off);
        BoutonAppWeb->setIcon(icon);
        BoutonAppWeb->setIconSize(QSize(200, 200));
        BoutonAppWeb->setFlat(true);
        BoutonAppGalerie = new QPushButton(centralwidget);
        BoutonAppGalerie->setObjectName(QStringLiteral("BoutonAppGalerie"));
        BoutonAppGalerie->setGeometry(QRect(570, 10, 221, 221));
        BoutonAppGalerie->setStyleSheet(QStringLiteral(""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/galerie.png"), QSize(), QIcon::Normal, QIcon::Off);
        BoutonAppGalerie->setIcon(icon1);
        BoutonAppGalerie->setIconSize(QSize(200, 200));
        BoutonAppGalerie->setFlat(true);
        BoutonAppWeb2 = new QPushButton(centralwidget);
        BoutonAppWeb2->setObjectName(QStringLiteral("BoutonAppWeb2"));
        BoutonAppWeb2->setGeometry(QRect(320, 30, 211, 211));
        BoutonAppWeb2->setStyleSheet(QStringLiteral(""));
        BoutonAppWeb2->setIcon(icon);
        BoutonAppWeb2->setIconSize(QSize(200, 200));
        BoutonAppWeb2->setFlat(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 825, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        BoutonAppWeb->setText(QString());
        BoutonAppGalerie->setText(QString());
        BoutonAppWeb2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
