#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    pDLLGUI = new DLL_GUI(this);
    pDLLGUI->show();

    connect(ui->nappi,SIGNAL(clicked(bool)),
            this,SLOT(clickHandler()));


    pDLL = new DLLKotitehtava1Jatko(this);
    connect(pDLL,SIGNAL(sendNumberToExe(int)),
            this,SLOT(receiveNumberFromDLL(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clickHandler()
{
    pDLL->generate();
}

void MainWindow::receiveNumberFromDLL(int n)
{
    qDebug()<<"EXE vastaanotti numeron DLL:sta";
    ui->naytto->setText(QString::number(n));
}

