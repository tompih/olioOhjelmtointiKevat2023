#ifndef INTERFACE_H
#define INTERFACE_H

#include "interface_global.h"
/*
 * 1. Muutetaan tämä perusluokka sellaiseksi, että se kykenee ottamaan vastaan signaaleita ja lähettämään niitä
 *  => include QObject ja peritään se
 *  => Q_OBJECT makro
 *  => muutetaan konstruktori sellaiseksi, että se ottaa pointterin QObject luokkaan vastaan
 *  => lisätään signals: ja public slots: luokkaan.
 *
 */

#include <QObject>
#include <QDebug>
#include "engine.h"

class INTERFACE_EXPORT Interface: public QObject
{
    Q_OBJECT
public:
    Interface(QObject * parent = nullptr);
    ~Interface();

signals:
    void sendNumberToEXE(QString);  // Lähetetään numero käyttäjälle QStringinä, koska se on EXEssä helppo laittaa lineEdit olioon

public slots:
    void receiveNumberFromEngine(int); // luetaan numero enginestä integerinä, mutta muutetaan se tässä QStringiksi
private:
    engine * pEngine;
};

#endif // INTERFACE_H
