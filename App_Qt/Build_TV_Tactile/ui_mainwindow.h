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
        BoutonAppWeb->setGeometry(QRect(20, 40, 281, 191));
        BoutonAppWeb->setStyleSheet(QLatin1String("#BoutonAppWeb{\n"
"background-color: transparent;\n"
"	border-image: url(:/Logo_CIP_NB.jpg);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#BoutonAppWeb:pressed\n"
"{\n"
"  \n"
"	\n"
"	border-image: url(:/Logo_CIP_NB_reserve.jpg);\n"
"}"));
        BoutonAppWeb->setFlat(false);
        BoutonAppGalerie = new QPushButton(centralwidget);
        BoutonAppGalerie->setObjectName(QStringLiteral("BoutonAppGalerie"));
        BoutonAppGalerie->setGeometry(QRect(380, 40, 281, 191));
        BoutonAppGalerie->setStyleSheet(QLatin1String("#BoutonAppGalerie{\n"
"background-color: transparent;\n"
"	border-image: url(:/Logo_CIP_NB.jpg);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#BoutonAppGalerie:pressed\n"
"{\n"
"  \n"
"	\n"
"	border-image: url(:/Logo_CIP_NB_reserve.jpg);\n"
"}"));
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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
