#ifndef RANDOMNUMBERGENERATOR1_H
#define RANDOMNUMBERGENERATOR1_H

#include "randomNumberGenerator1_global.h"
#include <QString>

/*
 * 1. By default Qt creates a class but you could export
 *    just function interface from your library see example below
 *    where testFunction is exported from library component
 */
class RANDOMNUMBERGENERATOR1_EXPORT RandomNumberGenerator1
{
public:
    RandomNumberGenerator1();
};

RANDOMNUMBERGENERATOR1_EXPORT QString testFunction();

#endif // RANDOMNUMBERGENERATOR1_H
