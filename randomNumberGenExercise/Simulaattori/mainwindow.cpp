#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    correctCard = 1234;
    correctPin = 4321;
    cardNumber = 0;
    pinNumber = 0;
    attemps = 0;

    ui->setupUi(this);
    connect(ui->nappi,SIGNAL(clicked(bool)),
            this,SLOT(clickHandler()));

    pRFIDreader = new RFIDreader(this);
    connect(pRFIDreader,SIGNAL(sendCardNumber(short)),
            this,SLOT(receiveCardNumber(short)));


    pPINui = new PINui(this);
    connect(pPINui, SIGNAL(sendPinNumber(short)),
            this,SLOT(receivePinNumber(short)));

    updateUI();
    setWindowTitle("Initial State");
}

MainWindow::~MainWindow()
{
    delete ui;
    //delete pRFIDreader;
}

void MainWindow::clickHandler()
{
    pRFIDreader->open();

}

void MainWindow::receiveCardNumber(short num)
{
   cardNumber = num;
   updateUI();
   pRFIDreader->open();
}

void MainWindow::receivePinNumber(short num)
{
    pinNumber = num;
    updateUI();
}

void MainWindow::updateUI()
{
    ui->CardNumber->setText(QString::number(cardNumber));
    ui->PinNumber->setText(QString::number(pinNumber));
    ui->numberOfAttempts->setText(QString::number(attemps));
}

