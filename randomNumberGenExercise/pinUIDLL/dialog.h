#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "pinUIDLL_global.h"

namespace Ui {
class Dialog;
}

class PINUIDLL_EXPORT Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
signals:
    void sendPin(short);
private slots:
    void clickHandler();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
