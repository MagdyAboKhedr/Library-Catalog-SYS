#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    LibraryCat cata;
    MainWindow w(nullptr, &cata);
    w.show();
    return a.exec();
}
