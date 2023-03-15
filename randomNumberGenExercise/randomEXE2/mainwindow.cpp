#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pInterface = new Interface(this);
    connect(pInterface,SIGNAL(sendNumberToEXE(QString)),
            this, SLOT(handleDLLSignal(QString)));

    pSimpleDLL = new simpleDLL(this);
    pSimpleDLL ->show();
    connect(pSimpleDLL, SIGNAL(sendNumberToExe(QString)),
            this, SLOT(handleSimpleDLLSignal(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleDLLSignal(QString s)
{
    ui->lineEdit->setText(s);
}

void MainWindow::handleSimpleDLLSignal(QString s)
{
    ui->lineEdit->setText(s);
}

