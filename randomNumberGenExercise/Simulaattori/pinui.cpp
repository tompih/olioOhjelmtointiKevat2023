#include "pinui.h"
#include "ui_pinui.h"

PINui::PINui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PINui)
{
    ui->setupUi(this);
    setWindowTitle("PINUI");
    connect(ui->pushButton,SIGNAL(clicked()),
            this, SLOT(handleClick()));
}

PINui::~PINui()
{
    qDebug()<<"Deleting PINUI object";
    delete ui;
}

void PINui::handleClick()
{
   QString num = ui->lineEdit->text();
   emit sendPinNumber(num.toShort());
   done(0);
}
