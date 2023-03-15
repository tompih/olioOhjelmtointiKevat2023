#ifndef ENGINE_H
#define ENGINE_H
#include <QRandomGenerator>
#include <QDebug>

class engine
{
public:
    engine();
    int generate();
private:
    QRandomGenerator gen;
};

#endif // ENGINE_H
