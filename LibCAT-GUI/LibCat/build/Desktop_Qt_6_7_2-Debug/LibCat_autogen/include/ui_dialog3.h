/********************************************************************************
** Form generated from reading UI file 'dialog3.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG3_H
#define UI_DIALOG3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog3
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog3)
    {
        if (Dialog3->objectName().isEmpty())
            Dialog3->setObjectName("Dialog3");
        Dialog3->resize(437, 213);
        verticalLayout = new QVBoxLayout(Dialog3);
        verticalLayout->setObjectName("verticalLayout");
        listWidget = new QListWidget(Dialog3);
        listWidget->setObjectName("listWidget");

        verticalLayout->addWidget(listWidget);

        pushButton = new QPushButton(Dialog3);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        retranslateUi(Dialog3);

        QMetaObject::connectSlotsByName(Dialog3);
    } // setupUi

    void retranslateUi(QDialog *Dialog3)
    {
        Dialog3->setWindowTitle(QCoreApplication::translate("Dialog3", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog3", "Show Books", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog3: public Ui_Dialog3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG3_H
