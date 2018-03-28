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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
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
    QLabel *txtTitre;
    QLabel *txtPhotographe;
    QLabel *txtContenu;
    QHBoxLayout *hLayout_Center;
    QScrollArea *MiniatureScroll;
    QWidget *MiniatureScrollWidgetContents;
    QHBoxLayout *hLayout_Down;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *bRetour;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *hLayout_DCenter;
    QHBoxLayout *hLayout_DRight;

    void setupUi(QMainWindow *appGalerie)
    {
        if (appGalerie->objectName().isEmpty())
            appGalerie->setObjectName(QStringLiteral("appGalerie"));
        appGalerie->resize(918, 826);
        appGalerie->setStyleSheet(QStringLiteral("background-image: url(:/Logo_CIP_horizontal_res_fond.jpg);"));
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
        txtTitre = new QLabel(centralwidget);
        txtTitre->setObjectName(QStringLiteral("txtTitre"));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(30);
        txtTitre->setFont(font);
        txtTitre->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        txtTitre->setWordWrap(true);

        vLayout_URight->addWidget(txtTitre);

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
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setPointSize(24);
        font1.setBold(false);
        font1.setItalic(true);
        font1.setWeight(50);
        txtPhotographe->setFont(font1);
        txtPhotographe->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        txtPhotographe->setWordWrap(true);

        vLayout_URight->addWidget(txtPhotographe);

        txtContenu = new QLabel(centralwidget);
        txtContenu->setObjectName(QStringLiteral("txtContenu"));
        QFont font2;
        font2.setFamily(QStringLiteral("Times New Roman"));
        font2.setPointSize(16);
        txtContenu->setFont(font2);
        txtContenu->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        txtContenu->setTextFormat(Qt::RichText);
        txtContenu->setWordWrap(true);

        vLayout_URight->addWidget(txtContenu);


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
        MiniatureScrollWidgetContents->setGeometry(QRect(0, 0, 894, 647));
        MiniatureScroll->setWidget(MiniatureScrollWidgetContents);

        hLayout_Center->addWidget(MiniatureScroll);


        vLayout_Center->addLayout(hLayout_Center);

        hLayout_Down = new QHBoxLayout();
        hLayout_Down->setObjectName(QStringLiteral("hLayout_Down"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        bRetour = new QPushButton(centralwidget);
        bRetour->setObjectName(QStringLiteral("bRetour"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/retour.png"), QSize(), QIcon::Normal, QIcon::Off);
        bRetour->setIcon(icon);
        bRetour->setIconSize(QSize(40, 40));
        bRetour->setFlat(true);

        horizontalLayout_3->addWidget(bRetour);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        hLayout_Down->addLayout(horizontalLayout_3);

        hLayout_DCenter = new QHBoxLayout();
        hLayout_DCenter->setObjectName(QStringLiteral("hLayout_DCenter"));

        hLayout_Down->addLayout(hLayout_DCenter);

        hLayout_DRight = new QHBoxLayout();
        hLayout_DRight->setObjectName(QStringLiteral("hLayout_DRight"));

        hLayout_Down->addLayout(hLayout_DRight);


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
        txtTitre->setText(QString());
        txtPhotographe->setText(QString());
        txtContenu->setText(QString());
        bRetour->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class appGalerie: public Ui_appGalerie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPGALERIE_H
