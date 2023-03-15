#include "dll_gui.h"
#include "ui_dll_gui.h"

DLL_GUI::DLL_GUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DLL_GUI)
{
    ui->setupUi(this);
}

DLL_GUI::~DLL_GUI()
{
    delete ui;
}
