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
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_configWindow
{
public:
    QDialogButtonBox *buttonBox;
    QSpinBox *spinBox;
    QLabel *label;

    void setupUi(QDialog *configWindow)
    {
        if (configWindow->objectName().isEmpty())
            configWindow->setObjectName(QStringLiteral("configWindow"));
        configWindow->resize(315, 179);
        buttonBox = new QDialogButtonBox(configWindow);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(50, 140, 241, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        spinBox = new QSpinBox(configWindow);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(240, 80, 47, 29));
        label = new QLabel(configWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 80, 131, 31));

        retranslateUi(configWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), configWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), configWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(configWindow);
    } // setupUi

    void retranslateUi(QDialog *configWindow)
    {
        configWindow->setWindowTitle(QApplication::translate("configWindow", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("configWindow", "Selection de la table", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class configWindow: public Ui_configWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGWINDOW_H
