#ifndef ENGINE_H
#define ENGINE_H

#include <QDialog>
#include <QRandomGenerator>

namespace Ui {
class engine;
}

class engine : public QDialog
{
    Q_OBJECT

public:
    explicit engine(QWidget *parent = nullptr);
    ~engine();
signals:
    void sendNumberToInterface(int);

public slots:
    void clickHandler();

private:
    Ui::engine *ui;
    QRandomGenerator gen;
};

#endif // ENGINE_H
