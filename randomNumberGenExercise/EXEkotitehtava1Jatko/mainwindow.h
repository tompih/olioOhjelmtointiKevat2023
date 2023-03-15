#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dllkotitehtava1jatko.h"
#include "dll_gui.h"

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
    void clickHandler();
    void receiveNumberFromDLL(int);

private:
    Ui::MainWindow *ui;
    DLLKotitehtava1Jatko * pDLL;
    DLL_GUI * pDLLGUI;

};
#endif // MAINWINDOW_H
