#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "myclass.h"
#include "toinenikkuna.h"



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:

public slots:
    void nappiHandler();
    void mySignalHandler(QString);


private:
    Ui::MainWindow *ui;
    myClass * pmyClass;
    ToinenIkkuna * pToinenIkkuna;
};
#endif // MAINWINDOW_H
