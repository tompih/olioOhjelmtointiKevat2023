#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->Nappi,SIGNAL(clicked()),
            this,SLOT(clickHandler()));

    pRandomSignals = new RandomSignals(this);

    connect(this,SIGNAL(startDll()),
            pRandomSignals,SLOT(startGenerating()));

    connect(pRandomSignals,SIGNAL(sendNumberToExe(int)),
            this,SLOT(handleDLLSignal(int)));

}

MainWindow::~MainWindow()
{
    delete ui;
    //delete pRandomSignals;
}

void MainWindow::clickHandler()
{
   emit startDll();
    //int luku = dllOlio.getRandomNumber();
   //QString num = QString::number(luku);
   //ui->naytto->setText(num);
}

void MainWindow::handleDLLSignal(int n)
{
    QString num = QString::number(n);
    ui->naytto->setText(num);
}

