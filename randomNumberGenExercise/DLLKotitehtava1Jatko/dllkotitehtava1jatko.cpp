#include "dllkotitehtava1jatko.h"


DLLKotitehtava1Jatko::DLLKotitehtava1Jatko(QObject *parent) : QObject(parent)
{
    qDebug()<<"DLL:N interface olio luotu";
    pengine = new engine(this);
    connect(pengine,SIGNAL(sendNumberToInterface(int)),
            this, SLOT(receiveNumber(int)));

}

DLLKotitehtava1Jatko::~DLLKotitehtava1Jatko()
{
    qDebug()<<"DLL:N interface olio tuhottu";
}

void DLLKotitehtava1Jatko::generate()
{
    qDebug()<<"Interface sai EXE:lta komennon luoda numero";
    pengine->generate();
}

void DLLKotitehtava1Jatko::receiveNumber(int n)
{

    qDebug()<<"Vastaanotin numeron enginelta ja lahetan sen EXE:lle";
    emit sendNumberToExe(n);
}
