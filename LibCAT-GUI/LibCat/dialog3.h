#ifndef DIALOG3_H
#define DIALOG3_H
#include "/home/magdyrd/Desktop/libcatSYS/Library-Catalog-SYS/include.hpp"

#include <QDialog>

namespace Ui {
class Dialog3;
}

class Dialog3 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog3(LibraryCat *newcatalog, QWidget *parent = nullptr);
    ~Dialog3();

private slots:
    void on_pushButton_clicked();

protected:
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::Dialog3 *ui;
    LibraryCat *newcatalog;
};

#endif // DIALOG3_H
