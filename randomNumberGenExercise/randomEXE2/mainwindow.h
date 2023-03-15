#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "interface.h"
#include "simpledll.h"

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
    void handleDLLSignal(QString);
    void handleSimpleDLLSignal(QString);

private:
    Ui::MainWindow *ui;
    Interface * pInterface;
    simpleDLL * pSimpleDLL;
};
#endif // MAINWINDOW_H
