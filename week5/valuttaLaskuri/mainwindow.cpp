#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // connect(senderAddress,SIGNAL(function1()),
    //           receiverAddress,SLOT(function2());
    connect(ui->CroneToEuro,SIGNAL(clicked()),
            this,SLOT(CroneToEuroHandler()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::euroToCroneHandler()
{

}

void MainWindow::CroneToEuroHandler()
{
   ui->Crones->setText("100 kr");
}


void MainWindow::on_EuroToCrone_clicked()
{
    QString luku = ui->Euros->text();
    euro = luku.toFloat();
    crone = euro * rate;
    ui->Crones->setText(QString::number(crone));
}

