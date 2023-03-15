#ifndef DLLKOTITEHTAVA1JATKO_H
#define DLLKOTITEHTAVA1JATKO_H

#include "DLLKotitehtava1Jatko_global.h"
#include <QObject>
#include <QDebug>
#include "engine.h"

class DLLKOTITEHTAVA1JATKO_EXPORT DLLKotitehtava1Jatko : public QObject
{
    Q_OBJECT
public:
    DLLKotitehtava1Jatko(QObject * parent = nullptr);
    ~DLLKotitehtava1Jatko();
    void generate();
private slots:
    void receiveNumber(int);

signals:
    void sendNumberToExe(int);


private:
    engine * pengine;
};

#endif // DLLKOTITEHTAVA1JATKO_H
