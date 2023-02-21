#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>
#include <QThread>
#include <QDebug>

class myClass:public QThread
{
    Q_OBJECT
public:
    myClass(QString threadName,QObject * parent = nullptr);
protected:
    virtual void run() override;
private:
    QString name;
};

#endif // MYCLASS_H
