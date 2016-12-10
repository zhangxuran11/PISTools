#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ztpm = NULL;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_mutil_btn_clicked()
{
    if(ztpm != NULL)
        delete ztpm;
    ztpm = new ZTPManager(ui->lineEdit_port->text().toInt(),QHostAddress(ui->lineEdit_ip->text()));
    connect(ztpm,SIGNAL(readyRead()),this,SLOT(readZtp()));

}

void MainWindow::on_single_btn_clicked()
{
    if(ztpm != NULL)
        delete ztpm;
    ztpm = new ZTPManager(QHostAddress(ui->lineEdit_ip->text()),ui->lineEdit_port->text().toInt());
    connect(ztpm,SIGNAL(readyRead()),this,SLOT(readZtp()));
}
void MainWindow::readZtp()
{
    ZTPprotocol ztp;
    ztpm->getOneZtp(ztp);
    ztp.print(ui->textBrowser);
}

void MainWindow::on_single_btn_2_clicked()
{
    delete ztpm;
    ztpm = NULL;
}

void MainWindow::on_single_btn_3_clicked()
{
    ui->textBrowser->clear();
}
