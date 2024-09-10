#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent, LibraryCat *newcatalog)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , newcatalog(newcatalog)
{
    ui->setupUi(this);

    sideWindow1 = new Dialog1(newcatalog, this);
    sideWindow2 = new Dialog2(newcatalog, this);
    sideWindow3 = new Dialog3(newcatalog, this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    sideWindow1->setModal(true);
    sideWindow1->exec();
}


void MainWindow::on_pushButton_clicked()
{
    sideWindow2->setModal(true);
    sideWindow2->exec();
}


void MainWindow::on_pushButton_3_clicked()
{
    sideWindow3->setModal(true);
    sideWindow3->exec();
}

