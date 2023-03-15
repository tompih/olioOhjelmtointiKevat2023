#ifndef ENGINE_H
#define ENGINE_H
#include <QRandomGenerator>

class engine
{
public:
    int generate();
private:
    QRandomGenerator gen;
};

#endif // ENGINE_H
