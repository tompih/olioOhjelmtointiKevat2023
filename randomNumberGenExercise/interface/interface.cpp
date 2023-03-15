#include "interface.h"

Interface::Interface(QObject *parent):QObject(parent)
{
    pEngine = new engine();
    pEngine->show();
    connect(pEngine,SIGNAL(sendNumberToInterface(int)),
            this,SLOT(receiveNumberFromEngine(int)));
}

Interface::~Interface()
{
    delete pEngine;
    pEngine = nullptr;
}

void Interface::receiveNumberFromEngine(int n)
{
    qDebug()<< "interface olion slotti funktio random number = " << n;
    emit sendNumberToEXE(QString::number(n));
}
