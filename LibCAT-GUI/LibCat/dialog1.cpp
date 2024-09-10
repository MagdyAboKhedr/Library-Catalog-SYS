#include "dialog1.h"
#include "ui_dialog1.h"
#include "QDebug"


Dialog1::Dialog1(LibraryCat *newcatalog, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog1)
    , newcatalog(newcatalog)
{
    ui->setupUi(this);
    ui->lineEdit_4->setText("Number of books in catalog: 0");
}

Dialog1::~Dialog1()
{
    delete ui;
}

void Dialog1::on_pushButton_2_clicked()
{

    //newcatalog->addBook(ui->lineEdit_2->text().toStdString(), ui->lineEdit_3->text().toStdString(), ui->lineEdit->text().toInt());
    Book book(ui->lineEdit_2->text().toStdString(), ui->lineEdit_3->text().toStdString(), ui->lineEdit->text().toInt());
    newcatalog->addBook(book);
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    QString msg = "Number of books in catalog: " + QString::number(newcatalog->getnumberofbooks());
    ui->lineEdit_4->setText(msg);

}

void Dialog1::on_pushButton_clicked()
{



}


