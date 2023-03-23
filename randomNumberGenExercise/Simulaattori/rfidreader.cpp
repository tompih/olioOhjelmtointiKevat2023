#include "rfidreader.h"
#include "ui_rfidreader.h"
#include <QDebug>

RFIDreader::RFIDreader(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RFIDreader)
{
    ui->setupUi(this);
    setWindowTitle("RFIDCardReader");
    connect(ui->pushButton,SIGNAL(clicked(bool)),
            this,SLOT(handleClick()));

    connect(&aika,SIGNAL(timeout()),
            this,SLOT(handleTimeout()));
    aika.start(5000);
}

RFIDreader::~RFIDreader()
{
    qDebug()<<"Deleting RFIDreader object";
    delete ui;
}

void RFIDreader::handleClick()
{
    QString num = ui->lineEdit->text();
    aika.stop();
    emit sendCardNumber(num.toShort());
    //done(0); // ei olekaan kovin hyvä ratkaisu
}

void RFIDreader::handleTimeout()
{
    qDebug()<< "Got timout from aika";
    emit sendTimeoutToMainWindow();
}


