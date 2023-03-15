#ifndef DLLKOTITEHTAVA1_H
#define DLLKOTITEHTAVA1_H

#include "DLLKotitehtava1_global.h"
#include <QDebug>
#include "engine.h"

class DLLKOTITEHTAVA1_EXPORT DLLKotitehtava1
{
public:
    DLLKotitehtava1();
    int getRandomNumber();
private:
    engine engineOlio;
};

#endif // DLLKOTITEHTAVA1_H
