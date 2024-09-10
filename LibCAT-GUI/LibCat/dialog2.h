#ifndef DIALOG2_H
#define DIALOG2_H
#include "/home/magdyrd/Desktop/libcatSYS/Library-Catalog-SYS/include.hpp"

#include <QDialog>

namespace Ui {
class Dialog2;
}

class Dialog2 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog2(LibraryCat *newcatalog, QWidget *parent = nullptr);
    ~Dialog2();

private slots:
    void on_pushButton_clicked();

protected:
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::Dialog2 *ui;
    LibraryCat *newcatalog;
};

#endif // DIALOG2_H
