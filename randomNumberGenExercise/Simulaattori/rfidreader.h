#ifndef RFIDREADER_H
#define RFIDREADER_H

#include <QDialog>
#include <QDebug>

namespace Ui {
class RFIDreader;
}

class RFIDreader : public QDialog
{
    Q_OBJECT

public:
    explicit RFIDreader(QWidget *parent = nullptr);
    ~RFIDreader();
signals:
    void sendCardNumber(short);
private slots:
    void handleClick();

private:
    Ui::RFIDreader *ui;
};

#endif // RFIDREADER_H
