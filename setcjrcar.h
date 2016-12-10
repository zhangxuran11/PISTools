#ifndef SETCJRCAR_H
#define SETCJRCAR_H

#include <QMainWindow>
#include "ztpmanager.h"
namespace Ui {
class SetCJRCar;
}

class SetCJRCar : public QMainWindow
{
    Q_OBJECT
    ZTPManager* ztpm;
public:
    explicit SetCJRCar(QWidget *parent = 0);
    ~SetCJRCar();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SetCJRCar *ui;
};

#endif // SETCJRCAR_H
