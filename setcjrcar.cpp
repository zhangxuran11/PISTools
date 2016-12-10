#include "setcjrcar.h"
#include "ui_setcjrcar.h"
SetCJRCar::SetCJRCar(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SetCJRCar)
{
    ui->setupUi(this);
    ztpm = new ZTPManager;
}

SetCJRCar::~SetCJRCar()
{
    delete ui;

}


void SetCJRCar::on_pushButton_clicked()
{
    int carNo = ui->lineEdit->text().toInt();
    if(carNo > 13 || carNo <2)
        return;
    ZTPprotocol ztp;
    ztp.addPara("T","CJR_CAR_NO");
    ztp.addPara("CAR",QString::number(carNo));
    ztpm->SendOneZtp(ztp,QHostAddress("224.102.228.40"),8323);
}
