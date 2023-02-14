#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    luku = 0;

    // connect(lähettäjänOsoite,lähettäjänSignaali,
               vastaanottajanOsoite, vastaanottajanSlotfunkctio)

    connect(ui->Count,SIGNAL(clicked()),
            this,SLOT(countHandler()));

    connect(ui->Reset,SIGNAL(clicked()),
            this,SLOT(resetHandler()));




}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::countHandler()
{
   luku++;
   QString num = QString::number(luku);
   ui->lineEdit->setText(num);
}

void MainWindow::resetHandler()
{
    luku = 0;
    QString num = QString::number(luku);
    ui->lineEdit->setText(num);
}

