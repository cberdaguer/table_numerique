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
    QVBoxLayout *vLayout_ULeft;
    QLabel *ImgPrincipal;
    QVBoxLayout *vLayout_URight;
    QLabel *txtPhotographe;
    QLabel *txtTitre;
    QHBoxLayout *hLayout_Center;
    QScrollArea *MiniatureScroll;
    QWidget *MiniatureScrollWidgetContents;
    QHBoxLayout *hLayout_Down;

    void setupUi(QMainWindow *appGalerie)
    {
        if (appGalerie->objectName().isEmpty())
            appGalerie->setObjectName(QStringLiteral("appGalerie"));
        appGalerie->resize(721, 523);
        appGalerie->setStyleSheet(QStringLiteral("background-image: url(:/Logo_CIP_horizontal_res.jpg);"));
        centralwidget = new QWidget(appGalerie);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        vLayout_Center = new QVBoxLayout();
        vLayout_Center->setObjectName(QStringLiteral("vLayout_Center"));
        hLayout_Up = new QHBoxLayout();
        hLayout_Up->setObjectName(QStringLiteral("hLayout_Up"));
        vLayout_ULeft = new QVBoxLayout();
        vLayout_ULeft->setObjectName(QStringLiteral("vLayout_ULeft"));
        ImgPrincipal = new QLabel(centralwidget);
        ImgPrincipal->setObjectName(QStringLiteral("ImgPrincipal"));

        vLayout_ULeft->addWidget(ImgPrincipal);


        hLayout_Up->addLayout(vLayout_ULeft);

        vLayout_URight = new QVBoxLayout();
        vLayout_URight->setObjectName(QStringLiteral("vLayout_URight"));
        txtPhotographe = new QLabel(centralwidget);
        txtPhotographe->setObjectName(QStringLiteral("txtPhotographe"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        txtPhotographe->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        txtPhotographe->setFont(font);
        txtPhotographe->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        vLayout_URight->addWidget(txtPhotographe);

        txtTitre = new QLabel(centralwidget);
        txtTitre->setObjectName(QStringLiteral("txtTitre"));
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setPointSize(24);
        txtTitre->setFont(font1);
        txtTitre->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        vLayout_URight->addWidget(txtTitre);


        hLayout_Up->addLayout(vLayout_URight);


        vLayout_Center->addLayout(hLayout_Up);

        hLayout_Center = new QHBoxLayout();
        hLayout_Center->setObjectName(QStringLiteral("hLayout_Center"));
        MiniatureScroll = new QScrollArea(centralwidget);
        MiniatureScroll->setObjectName(QStringLiteral("MiniatureScroll"));
        MiniatureScroll->setStyleSheet(QStringLiteral(""));
        MiniatureScroll->setWidgetResizable(true);
        MiniatureScrollWidgetContents = new QWidget();
        MiniatureScrollWidgetContents->setObjectName(QStringLiteral("MiniatureScrollWidgetContents"));
        MiniatureScrollWidgetContents->setGeometry(QRect(0, 0, 697, 416));
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
        txtPhotographe->setText(QString());
        txtTitre->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class appGalerie: public Ui_appGalerie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPGALERIE_H
