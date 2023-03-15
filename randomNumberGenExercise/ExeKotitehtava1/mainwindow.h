#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dllkotitehtava1.h"
#include "randomsignals.h"

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
    void handleDLLSignal(int);

signals:
    void startDll();

private:
    Ui::MainWindow *ui;
    DLLKotitehtava1 dllOlio;
    RandomSignals * pRandomSignals;

};
#endif // MAINWINDOW_H
