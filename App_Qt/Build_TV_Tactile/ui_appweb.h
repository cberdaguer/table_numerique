/********************************************************************************
** Form generated from reading UI file 'appweb.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPWEB_H
#define UI_APPWEB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AppWeb
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *hLayout_Down;
    QHBoxLayout *hLayout_DLeft;
    QPushButton *bRetour;
    QHBoxLayout *hLayout_DCenter;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *hLayout_DRight;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *hLayout_Up;

    void setupUi(QMainWindow *AppWeb)
    {
        if (AppWeb->objectName().isEmpty())
            AppWeb->setObjectName(QStringLiteral("AppWeb"));
        AppWeb->resize(603, 459);
        AppWeb->setStyleSheet(QStringLiteral("background-image: url(:/Logo_CIP_horizontal_res.jpg);"));
        centralwidget = new QWidget(AppWeb);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hLayout_Down = new QHBoxLayout();
        hLayout_Down->setObjectName(QStringLiteral("hLayout_Down"));
        hLayout_DLeft = new QHBoxLayout();
        hLayout_DLeft->setObjectName(QStringLiteral("hLayout_DLeft"));
        bRetour = new QPushButton(centralwidget);
        bRetour->setObjectName(QStringLiteral("bRetour"));
        bRetour->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/retour.png"), QSize(), QIcon::Normal, QIcon::Off);
        bRetour->setIcon(icon);
        bRetour->setIconSize(QSize(40, 40));
        bRetour->setFlat(true);

        hLayout_DLeft->addWidget(bRetour);


        hLayout_Down->addLayout(hLayout_DLeft);

        hLayout_DCenter = new QHBoxLayout();
        hLayout_DCenter->setObjectName(QStringLiteral("hLayout_DCenter"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayout_DCenter->addItem(horizontalSpacer);


        hLayout_Down->addLayout(hLayout_DCenter);

        hLayout_DRight = new QHBoxLayout();
        hLayout_DRight->setObjectName(QStringLiteral("hLayout_DRight"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayout_DRight->addItem(horizontalSpacer_2);


        hLayout_Down->addLayout(hLayout_DRight);


        gridLayout->addLayout(hLayout_Down, 1, 0, 1, 1);

        hLayout_Up = new QHBoxLayout();
        hLayout_Up->setObjectName(QStringLiteral("hLayout_Up"));

        gridLayout->addLayout(hLayout_Up, 0, 0, 1, 1);

        AppWeb->setCentralWidget(centralwidget);

        retranslateUi(AppWeb);

        QMetaObject::connectSlotsByName(AppWeb);
    } // setupUi

    void retranslateUi(QMainWindow *AppWeb)
    {
        AppWeb->setWindowTitle(QApplication::translate("AppWeb", "MainWindow", Q_NULLPTR));
        bRetour->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AppWeb: public Ui_AppWeb {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPWEB_H
