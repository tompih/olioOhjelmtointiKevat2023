#include "dllkotitehtava1.h"

DLLKotitehtava1::DLLKotitehtava1()
{
    qDebug()<<"DLL:n kontruktorissa ollan";
}

int DLLKotitehtava1::getRandomNumber()
{
    qDebug()<<"DLl getRandomNumber()";
    return engineOlio.generate();
}
