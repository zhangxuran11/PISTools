#include "pistools.h"
#include "ui_pistools.h"
PISTools::PISTools(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PISTools)
{
    ui->setupUi(this);
    ztpDebuger = new MainWindow(this);
    ztpDebuger->hide();
    setCJRCar = new SetCJRCar(this);
    setCJRCar->hide();
}

PISTools::~PISTools()
{
    delete ui;
}

void PISTools::on_pushButton_clicked()
{
    ztpDebuger->show();
}

void PISTools::on_pushButton_2_clicked()
{
    setCJRCar->show();
}
