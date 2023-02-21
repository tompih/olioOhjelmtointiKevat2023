#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "myclass.h"
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void startThreadAndPrint();
    void stopHandler();

private:
    Ui::MainWindow *ui;
    myClass * pthread1;
    myClass * pthread2;
};
#endif // MAINWINDOW_H
