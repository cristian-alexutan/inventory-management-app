/********************************************************************************
** Form generated from reading UI file 'updatedogdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEDOGDIALOG_H
#define UI_UPDATEDOGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UpdateDogDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *indexLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *nameLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *breedLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *ageLineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *linkLineEdit;
    QPushButton *confirmButton;

    void setupUi(QDialog *UpdateDogDialog)
    {
        if (UpdateDogDialog->objectName().isEmpty())
            UpdateDogDialog->setObjectName("UpdateDogDialog");
        UpdateDogDialog->resize(400, 192);
        verticalLayout_2 = new QVBoxLayout(UpdateDogDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(UpdateDogDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        indexLineEdit = new QLineEdit(UpdateDogDialog);
        indexLineEdit->setObjectName("indexLineEdit");

        horizontalLayout->addWidget(indexLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(UpdateDogDialog);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        nameLineEdit = new QLineEdit(UpdateDogDialog);
        nameLineEdit->setObjectName("nameLineEdit");

        horizontalLayout_2->addWidget(nameLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(UpdateDogDialog);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        breedLineEdit = new QLineEdit(UpdateDogDialog);
        breedLineEdit->setObjectName("breedLineEdit");

        horizontalLayout_3->addWidget(breedLineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(UpdateDogDialog);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        ageLineEdit = new QLineEdit(UpdateDogDialog);
        ageLineEdit->setObjectName("ageLineEdit");

        horizontalLayout_4->addWidget(ageLineEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(UpdateDogDialog);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        linkLineEdit = new QLineEdit(UpdateDogDialog);
        linkLineEdit->setObjectName("linkLineEdit");

        horizontalLayout_5->addWidget(linkLineEdit);


        verticalLayout->addLayout(horizontalLayout_5);

        confirmButton = new QPushButton(UpdateDogDialog);
        confirmButton->setObjectName("confirmButton");

        verticalLayout->addWidget(confirmButton);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(UpdateDogDialog);

        QMetaObject::connectSlotsByName(UpdateDogDialog);
    } // setupUi

    void retranslateUi(QDialog *UpdateDogDialog)
    {
        UpdateDogDialog->setWindowTitle(QCoreApplication::translate("UpdateDogDialog", "UpdateDogDialog", nullptr));
        label->setText(QCoreApplication::translate("UpdateDogDialog", "Index of dog to be updated", nullptr));
        label_2->setText(QCoreApplication::translate("UpdateDogDialog", "Name", nullptr));
        label_3->setText(QCoreApplication::translate("UpdateDogDialog", "Breed", nullptr));
        label_4->setText(QCoreApplication::translate("UpdateDogDialog", "Age", nullptr));
        label_5->setText(QCoreApplication::translate("UpdateDogDialog", "Photo link", nullptr));
        confirmButton->setText(QCoreApplication::translate("UpdateDogDialog", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateDogDialog: public Ui_UpdateDogDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEDOGDIALOG_H
