#ifndef RFIDREADER_H
#define RFIDREADER_H

#include <QDialog>
#include <QDebug>
#include <QTimer>

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
    void sendTimeoutToMainWindow();
private slots:
    void handleClick();
    void handleTimeout();


private:
    Ui::RFIDreader *ui;
    QTimer aika;
};

#endif // RFIDREADER_H
