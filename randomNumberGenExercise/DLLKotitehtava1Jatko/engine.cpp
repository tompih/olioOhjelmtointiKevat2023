#include "engine.h"



engine::engine(QObject *parent) : QObject(parent)
{
    qDebug()<<"DLL:N engine olio luotu";
}

engine::~engine()
{
    qDebug()<<"DLL:N engine olio tuhottu";
}

void engine::generate()
{
    qDebug()<<"Interface kaski luomaan numeron";
    int luku;
    luku = (gen.generate())%10;
    qDebug()<<"Enginen loi numeron = "<< luku;
    emit sendNumberToInterface(luku);
}
