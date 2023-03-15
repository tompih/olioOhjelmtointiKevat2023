#include "engine.h"
#include "ui_engine.h"

engine::engine(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::engine)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),
            this,SLOT(clickHandler()));
}

engine::~engine()
{
    delete ui;
}

void engine::clickHandler()
{
    emit sendNumberToInterface(gen.generate());
}
