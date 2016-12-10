#include "mainwindow.h"
#include "pistools.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PISTools pisTools;
    pisTools.show();

    return a.exec();
}
