#ifndef RANDOMNUMBERFUNCTIONINTERFACE_H
#define RANDOMNUMBERFUNCTIONINTERFACE_H

#include "randomNumberFunctionInterface_global.h"
#include "engine.h"

class RANDOMNUMBERFUNCTIONINTERFACE_EXPORT RandomNumberFunctionInterface
{
public:
    int getRandomNumber();
private:
    engine eng;
};

#endif // RANDOMNUMBERFUNCTIONINTERFACE_H
