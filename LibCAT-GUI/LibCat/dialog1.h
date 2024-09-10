#ifndef DIALOG1_H
#define DIALOG1_H
#include "/home/magdyrd/Desktop/libcatSYS/Library-Catalog-SYS/include.hpp"

#include <QDialog>

namespace Ui {
class Dialog1;
}

class Dialog1 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog1(LibraryCat *newcatalog,QWidget *parent = nullptr);
    ~Dialog1();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dialog1 *ui;
    LibraryCat *newcatalog;

};

#endif // DIALOG1_H
