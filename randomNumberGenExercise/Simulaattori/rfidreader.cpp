#include "rfidreader.h"
#include "ui_rfidreader.h"

RFIDreader::RFIDreader(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RFIDreader)
{
    ui->setupUi(this);
    setWindowTitle("RFIDCardReader");
    connect(ui->pushButton,SIGNAL(clicked(bool)),
            this,SLOT(handleClick()));
}

RFIDreader::~RFIDreader()
{
    qDebug()<<"Deleting RFIDreader object";
    delete ui;
}

void RFIDreader::handleClick()
{
    QString num = ui->lineEdit->text();
    emit sendCardNumber(num.toShort());
    done(0);
}
