/********************************************************************************
** Form generated from reading UI file 'dll_gui.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLL_GUI_H
#define UI_DLL_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DLL_GUI
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *DLL_GUI)
    {
        if (DLL_GUI->objectName().isEmpty())
            DLL_GUI->setObjectName(QString::fromUtf8("DLL_GUI"));
        DLL_GUI->resize(400, 300);
        pushButton = new QPushButton(DLL_GUI);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(80, 70, 86, 29));

        retranslateUi(DLL_GUI);

        QMetaObject::connectSlotsByName(DLL_GUI);
    } // setupUi

    void retranslateUi(QDialog *DLL_GUI)
    {
        DLL_GUI->setWindowTitle(QCoreApplication::translate("DLL_GUI", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("DLL_GUI", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DLL_GUI: public Ui_DLL_GUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLL_GUI_H
