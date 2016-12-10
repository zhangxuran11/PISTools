#ifndef PISTOOLS_H
#define PISTOOLS_H

#include <QMainWindow>
#include "mainwindow.h"
#include "setcjrcar.h"
namespace Ui {
class PISTools;
}

class PISTools : public QMainWindow
{
    Q_OBJECT
    MainWindow* ztpDebuger;
    SetCJRCar* setCJRCar;
public:
    explicit PISTools(QWidget *parent = 0);
    ~PISTools();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::PISTools *ui;
};

#endif // PISTOOLS_H
