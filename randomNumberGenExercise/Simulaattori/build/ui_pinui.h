/********************************************************************************
** Form generated from reading UI file 'pinui.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PINUI_H
#define UI_PINUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PINui
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QPushButton *pushButton;
    QLineEdit *lineEdit;

    void setupUi(QDialog *PINui)
    {
        if (PINui->objectName().isEmpty())
            PINui->setObjectName(QString::fromUtf8("PINui"));
        PINui->resize(242, 58);
        gridLayout = new QGridLayout(PINui);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        pushButton = new QPushButton(PINui);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        formLayout->setWidget(0, QFormLayout::LabelRole, pushButton);

        lineEdit = new QLineEdit(PINui);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);


        retranslateUi(PINui);

        QMetaObject::connectSlotsByName(PINui);
    } // setupUi

    void retranslateUi(QDialog *PINui)
    {
        PINui->setWindowTitle(QCoreApplication::translate("PINui", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("PINui", "Send PIN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PINui: public Ui_PINui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PINUI_H
