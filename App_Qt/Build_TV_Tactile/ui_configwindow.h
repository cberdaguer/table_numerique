/********************************************************************************
** Form generated from reading UI file 'configwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGWINDOW_H
#define UI_CONFIGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_configWindow
{
public:
    QSpinBox *spinBox;
    QLabel *label;
    QPushButton *bRetour;

    void setupUi(QDialog *configWindow)
    {
        if (configWindow->objectName().isEmpty())
            configWindow->setObjectName(QStringLiteral("configWindow"));
        configWindow->resize(253, 147);
        spinBox = new QSpinBox(configWindow);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(180, 60, 47, 29));
        label = new QLabel(configWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 60, 131, 31));
        bRetour = new QPushButton(configWindow);
        bRetour->setObjectName(QStringLiteral("bRetour"));
        bRetour->setGeometry(QRect(180, 100, 51, 24));

        retranslateUi(configWindow);

        QMetaObject::connectSlotsByName(configWindow);
    } // setupUi

    void retranslateUi(QDialog *configWindow)
    {
        configWindow->setWindowTitle(QApplication::translate("configWindow", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("configWindow", "Selection de la table", Q_NULLPTR));
        bRetour->setText(QApplication::translate("configWindow", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class configWindow: public Ui_configWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGWINDOW_H
