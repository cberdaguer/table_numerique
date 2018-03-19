/********************************************************************************
** Form generated from reading UI file 'appgalerie.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPGALERIE_H
#define UI_APPGALERIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_appGalerie
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *vLayout_Center;
    QHBoxLayout *hLayout_Up;
    QLabel *ImgPrincipal;
    QHBoxLayout *hLayout_Center;
    QScrollArea *MiniatureScroll;
    QWidget *MiniatureScrollWidgetContents;
    QHBoxLayout *hLayout_Down;

    void setupUi(QMainWindow *appGalerie)
    {
        if (appGalerie->objectName().isEmpty())
            appGalerie->setObjectName(QStringLiteral("appGalerie"));
        appGalerie->resize(800, 600);
        appGalerie->setStyleSheet(QStringLiteral("background-image: url(:/Logo_CIP_horizontal_res.jpg);"));
        centralwidget = new QWidget(appGalerie);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        vLayout_Center = new QVBoxLayout();
        vLayout_Center->setObjectName(QStringLiteral("vLayout_Center"));
        hLayout_Up = new QHBoxLayout();
        hLayout_Up->setObjectName(QStringLiteral("hLayout_Up"));
        ImgPrincipal = new QLabel(centralwidget);
        ImgPrincipal->setObjectName(QStringLiteral("ImgPrincipal"));

        hLayout_Up->addWidget(ImgPrincipal);


        vLayout_Center->addLayout(hLayout_Up);

        hLayout_Center = new QHBoxLayout();
        hLayout_Center->setObjectName(QStringLiteral("hLayout_Center"));
        MiniatureScroll = new QScrollArea(centralwidget);
        MiniatureScroll->setObjectName(QStringLiteral("MiniatureScroll"));
        MiniatureScroll->setStyleSheet(QStringLiteral(""));
        MiniatureScroll->setWidgetResizable(true);
        MiniatureScrollWidgetContents = new QWidget();
        MiniatureScrollWidgetContents->setObjectName(QStringLiteral("MiniatureScrollWidgetContents"));
        MiniatureScrollWidgetContents->setGeometry(QRect(0, 0, 776, 544));
        MiniatureScroll->setWidget(MiniatureScrollWidgetContents);

        hLayout_Center->addWidget(MiniatureScroll);


        vLayout_Center->addLayout(hLayout_Center);

        hLayout_Down = new QHBoxLayout();
        hLayout_Down->setObjectName(QStringLiteral("hLayout_Down"));

        vLayout_Center->addLayout(hLayout_Down);


        gridLayout->addLayout(vLayout_Center, 0, 0, 1, 1);

        appGalerie->setCentralWidget(centralwidget);

        retranslateUi(appGalerie);

        QMetaObject::connectSlotsByName(appGalerie);
    } // setupUi

    void retranslateUi(QMainWindow *appGalerie)
    {
        appGalerie->setWindowTitle(QApplication::translate("appGalerie", "MainWindow", Q_NULLPTR));
        ImgPrincipal->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class appGalerie: public Ui_appGalerie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPGALERIE_H
