#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

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
    attemps = 3;
    updateUI();
    pRFIDreader = new RFIDreader(this);
    connect(pRFIDreader,SIGNAL(sendCardNumber(short)),
            this,SLOT(receiveCardNumber(short)));

    connect(pRFIDreader,SIGNAL(sendTimeoutToMainWindow()),
            this,SLOT(handleRFIDTimeout()));

    pRFIDreader->open();

}

void MainWindow::receiveCardNumber(short num)
{
   cardNumber = num;
   updateUI();
   qDebug()<<"cardnumber slot";
   delete pRFIDreader;
   pRFIDreader = nullptr;

   pDialog = new Dialog(this);

   connect(pDialog, SIGNAL(sendPin(short)),
           this,SLOT(receivePinNumber(short)));

   pDialog->open();
}

void MainWindow::receivePinNumber(short num)
{
    pinNumber = num;
    //updateUI();
    delete pDialog;
    pDialog = nullptr;

    checkNumbers();


}

void MainWindow::handleRFIDTimeout()
{
    qDebug()<<"RFID timout";
    delete pRFIDreader;
    pRFIDreader = nullptr;
}

void MainWindow::updateUI()
{
    ui->CardNumber->setText(QString::number(cardNumber));
    ui->PinNumber->setText(QString::number(pinNumber));
    ui->numberOfAttempts->setText(QString::number(attemps));
}

void MainWindow::checkNumbers()
{
    attemps--;
    updateUI();

    if((correctCard == cardNumber) && (correctPin == pinNumber))
    {
        ui->nappi->setText("OIKEIN => BANK MAIN");
    }
    else
    {
        if(attemps == 0)
        {
            ui->nappi->setText("Väärin kortti lukittu");
        }
        else
        {
            pDialog = new Dialog(this);

            connect(pDialog, SIGNAL(sendPin(short)),
                    this,SLOT(receivePinNumber(short)));

            pDialog->open();

        }
    }
}

