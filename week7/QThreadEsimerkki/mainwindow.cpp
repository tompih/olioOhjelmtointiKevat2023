#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pthread1 = new myClass("Thread 1",this);
    pthread2 = new myClass("Thread 2",this);

    connect(ui->pushButton,SIGNAL(clicked(bool)),
            this, SLOT(startThreadAndPrint()));


    connect(ui->stop,SIGNAL(clicked(bool)),
            this, SLOT(stopHandler()));


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::startThreadAndPrint()
{

    pthread1->start(QThread::HighPriority);
    pthread2->start(QThread::HighPriority);
}

void MainWindow::stopHandler()
{
    qDebug()<<"stophandler";
    pthread1->terminate();
    pthread2->terminate();
}

