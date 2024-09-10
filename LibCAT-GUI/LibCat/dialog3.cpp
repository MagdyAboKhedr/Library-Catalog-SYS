#include "dialog3.h"
#include "ui_dialog3.h"
#include <QString>

Dialog3::Dialog3(LibraryCat *newcatalog, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog3)
    , newcatalog(newcatalog)
{
    ui->setupUi(this);
    ui->listWidget->clear();

}

Dialog3::~Dialog3()
{
    ui->listWidget->clear();
    delete ui;
}

void Dialog3::closeEvent(QCloseEvent *event) {
    // Clear the QListWidget
    ui->listWidget->clear();

}

void Dialog3::on_pushButton_clicked()
{
    std::string str_1 = newcatalog->displayallbooks();
    std::cout << str_1;
    QString str = QString::fromStdString(str_1);
    ui->listWidget->addItem(str);
}



