/********************************************************************************
** Form generated from reading UI file 'adddogdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDOGDIALOG_H
#define UI_ADDDOGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddDogDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *nameLineEdit;
    QLineEdit *breedLineEdit;
    QLineEdit *ageLineEdit;
    QLineEdit *linkLineEdit;
    QPushButton *confirmButton;

    void setupUi(QWidget *AddDogDialog)
    {
        if (AddDogDialog->objectName().isEmpty())
            AddDogDialog->setObjectName("AddDogDialog");
        AddDogDialog->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(AddDogDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        nameLineEdit = new QLineEdit(AddDogDialog);
        nameLineEdit->setObjectName("nameLineEdit");

        verticalLayout->addWidget(nameLineEdit);

        breedLineEdit = new QLineEdit(AddDogDialog);
        breedLineEdit->setObjectName("breedLineEdit");

        verticalLayout->addWidget(breedLineEdit);

        ageLineEdit = new QLineEdit(AddDogDialog);
        ageLineEdit->setObjectName("ageLineEdit");

        verticalLayout->addWidget(ageLineEdit);

        linkLineEdit = new QLineEdit(AddDogDialog);
        linkLineEdit->setObjectName("linkLineEdit");

        verticalLayout->addWidget(linkLineEdit);

        confirmButton = new QPushButton(AddDogDialog);
        confirmButton->setObjectName("confirmButton");

        verticalLayout->addWidget(confirmButton);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(AddDogDialog);

        QMetaObject::connectSlotsByName(AddDogDialog);
    } // setupUi

    void retranslateUi(QWidget *AddDogDialog)
    {
        AddDogDialog->setWindowTitle(QCoreApplication::translate("AddDogDialog", "AddDogDialog", nullptr));
        nameLineEdit->setText(QCoreApplication::translate("AddDogDialog", "Name", nullptr));
        breedLineEdit->setText(QCoreApplication::translate("AddDogDialog", "Breed", nullptr));
        ageLineEdit->setText(QCoreApplication::translate("AddDogDialog", "Age", nullptr));
        linkLineEdit->setText(QCoreApplication::translate("AddDogDialog", "Photo Link", nullptr));
        confirmButton->setText(QCoreApplication::translate("AddDogDialog", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddDogDialog: public Ui_AddDogDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDOGDIALOG_H
