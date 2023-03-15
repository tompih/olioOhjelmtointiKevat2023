/********************************************************************************
** Form generated from reading UI file 'engine.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENGINE_H
#define UI_ENGINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_engine
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *engine)
    {
        if (engine->objectName().isEmpty())
            engine->setObjectName(QString::fromUtf8("engine"));
        engine->resize(400, 300);
        pushButton = new QPushButton(engine);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 130, 86, 29));

        retranslateUi(engine);

        QMetaObject::connectSlotsByName(engine);
    } // setupUi

    void retranslateUi(QDialog *engine)
    {
        engine->setWindowTitle(QCoreApplication::translate("engine", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("engine", "Random Number!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class engine: public Ui_engine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENGINE_H
