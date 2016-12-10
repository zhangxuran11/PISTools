#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ztpmanager.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    ZTPManager* ztpm;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_mutil_btn_clicked();

    void on_single_btn_clicked();
    void readZtp();

    void on_single_btn_2_clicked();

    void on_single_btn_3_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
