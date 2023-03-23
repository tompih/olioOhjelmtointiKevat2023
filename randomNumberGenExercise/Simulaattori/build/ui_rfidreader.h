/********************************************************************************
** Form generated from reading UI file 'rfidreader.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RFIDREADER_H
#define UI_RFIDREADER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RFIDreader
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QPushButton *pushButton;
    QLineEdit *lineEdit;

    void setupUi(QDialog *RFIDreader)
    {
        if (RFIDreader->objectName().isEmpty())
            RFIDreader->setObjectName(QString::fromUtf8("RFIDreader"));
        RFIDreader->resize(244, 58);
        gridLayout = new QGridLayout(RFIDreader);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        pushButton = new QPushButton(RFIDreader);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        formLayout->setWidget(0, QFormLayout::LabelRole, pushButton);

        lineEdit = new QLineEdit(RFIDreader);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);


        retranslateUi(RFIDreader);

        QMetaObject::connectSlotsByName(RFIDreader);
    } // setupUi

    void retranslateUi(QDialog *RFIDreader)
    {
        RFIDreader->setWindowTitle(QCoreApplication::translate("RFIDreader", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("RFIDreader", "Send Card Number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RFIDreader: public Ui_RFIDreader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RFIDREADER_H
