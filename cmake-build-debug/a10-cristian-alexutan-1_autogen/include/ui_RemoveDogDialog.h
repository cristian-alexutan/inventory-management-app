/********************************************************************************
** Form generated from reading UI file 'removedogdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEDOGDIALOG_H
#define UI_REMOVEDOGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RemoveDogDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *indexLineEdit;
    QPushButton *confirmButton;

    void setupUi(QWidget *RemoveDogDialog)
    {
        if (RemoveDogDialog->objectName().isEmpty())
            RemoveDogDialog->setObjectName("RemoveDogDialog");
        RemoveDogDialog->resize(400, 90);
        verticalLayout_2 = new QVBoxLayout(RemoveDogDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        indexLineEdit = new QLineEdit(RemoveDogDialog);
        indexLineEdit->setObjectName("indexLineEdit");

        verticalLayout->addWidget(indexLineEdit);

        confirmButton = new QPushButton(RemoveDogDialog);
        confirmButton->setObjectName("confirmButton");

        verticalLayout->addWidget(confirmButton);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(RemoveDogDialog);

        QMetaObject::connectSlotsByName(RemoveDogDialog);
    } // setupUi

    void retranslateUi(QWidget *RemoveDogDialog)
    {
        RemoveDogDialog->setWindowTitle(QCoreApplication::translate("RemoveDogDialog", "RemoveDogDialog", nullptr));
        indexLineEdit->setText(QCoreApplication::translate("RemoveDogDialog", "Index", nullptr));
        confirmButton->setText(QCoreApplication::translate("RemoveDogDialog", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemoveDogDialog: public Ui_RemoveDogDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEDOGDIALOG_H
