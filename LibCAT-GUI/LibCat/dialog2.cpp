#include "dialog2.h"
#include "ui_dialog2.h"
#include <QString>
Dialog2::Dialog2(LibraryCat *newcatalog, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog2)
    , newcatalog(newcatalog)
{
    ui->setupUi(this);
    ui->listWidget->clear();
}

Dialog2::~Dialog2()
{
    ui->listWidget->clear();
    delete ui;
}

void Dialog2::closeEvent(QCloseEvent *event) {
    // Clear the QListWidget
    ui->listWidget->clear();
    ui->lineEdit->clear();

}



void Dialog2::on_pushButton_clicked()
{
    std::string srch = ui->lineEdit->text().toStdString();
    ui->listWidget->addItem(QString::fromStdString(newcatalog->searchbyauthor(srch)));

}

