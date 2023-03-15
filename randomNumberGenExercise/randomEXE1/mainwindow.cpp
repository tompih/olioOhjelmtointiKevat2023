#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),
            this,SLOT(handleClick()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleClick()
{
    //ui->lineEdit->setText(testFunction());  // Eli tässä käytetään Libraryn funktiota testFunction, joka
                                            // palauttaa QStringin.

    int luku = interface.getRandomNumber();
    QString num = QString::number(luku);
    ui->lineEdit->setText(num);
}

