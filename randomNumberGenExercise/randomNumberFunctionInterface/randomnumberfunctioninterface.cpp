#include "randomnumberfunctioninterface.h"


int RandomNumberFunctionInterface::getRandomNumber()
{
   return eng.generate();
}
