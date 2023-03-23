#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "rfidreader.h"
#include "pinui.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void clickHandler();
    void receiveCardNumber(short);
    void receivePinNumber(short);

private:
    Ui::MainWindow *ui;
    RFIDreader * pRFIDreader;
    PINui * pPINui;
    void updateUI();
    short cardNumber,pinNumber,attemps,correctCard,correctPin;

};
#endif // MAINWINDOW_H
