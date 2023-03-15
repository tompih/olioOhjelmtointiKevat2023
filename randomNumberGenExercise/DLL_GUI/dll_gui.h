#ifndef DLL_GUI_H
#define DLL_GUI_H

#include <QDialog>
#include "DLL_GUI_global.h"

namespace Ui {
class DLL_GUI;
}

class DLL_GUI_EXPORT DLL_GUI : public QDialog
{
    Q_OBJECT

public:
    explicit DLL_GUI(QWidget *parent = nullptr);
    ~DLL_GUI();

private:
    Ui::DLL_GUI *ui;
};

#endif // DLL_GUI_H
