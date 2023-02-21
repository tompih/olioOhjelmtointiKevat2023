#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    pQTimer = new QTimer(this);

    connect(pQTimer,&QTimer::timeout,this,&MainWindow::timeoutHandler);

    connect(ui->pushButton,&QPushButton::clicked,this,&MainWindow::clickHandler);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clickHandler()
{
    QString luettu = ui->lineEdit->text();
    bool onnistuiko;
    int luku = luettu.toInt(&onnistuiko);
    if(onnistuiko== true)
    {
        ui->progressBar->setValue(luku);
    }
    else
    {
        qDebug()<< "ei ole luku ei onnistu muuttaminen";
    }
    pQTimer->start(1000);
}

void MainWindow::timeoutHandler()
{
    aika++;
    ui->progressBar->setValue(aika);
}

