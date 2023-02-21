#include "myclass.h"



myClass::myClass(QString threadName, QObject *parent):QThread(parent)
{
    name = threadName;
}

void myClass::run()
{
   while(1)
   {
       qDebug()<<"Thread = "<<name<<"printing";

       msleep(1000);
   }
   qDebug()<<"Exiting Thread";
}
