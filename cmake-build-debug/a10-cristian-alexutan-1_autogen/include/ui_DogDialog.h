/********************************************************************************
** Form generated from reading UI file 'dogdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOGDIALOG_H
#define UI_DOGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DogDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *nameLabel;
    QLabel *breedLabel;
    QLabel *ageLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *adoptButton;
    QPushButton *noAdoptButton;

    void setupUi(QDialog *DogDialog)
    {
        if (DogDialog->objectName().isEmpty())
            DogDialog->setObjectName("DogDialog");
        DogDialog->resize(400, 125);
        verticalLayout_3 = new QVBoxLayout(DogDialog);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        nameLabel = new QLabel(DogDialog);
        nameLabel->setObjectName("nameLabel");

        verticalLayout->addWidget(nameLabel);

        breedLabel = new QLabel(DogDialog);
        breedLabel->setObjectName("breedLabel");

        verticalLayout->addWidget(breedLabel);

        ageLabel = new QLabel(DogDialog);
        ageLabel->setObjectName("ageLabel");

        verticalLayout->addWidget(ageLabel);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        adoptButton = new QPushButton(DogDialog);
        adoptButton->setObjectName("adoptButton");

        horizontalLayout->addWidget(adoptButton);

        noAdoptButton = new QPushButton(DogDialog);
        noAdoptButton->setObjectName("noAdoptButton");

        horizontalLayout->addWidget(noAdoptButton);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(DogDialog);

        QMetaObject::connectSlotsByName(DogDialog);
    } // setupUi

    void retranslateUi(QDialog *DogDialog)
    {
        DogDialog->setWindowTitle(QCoreApplication::translate("DogDialog", "DogDialog", nullptr));
        nameLabel->setText(QCoreApplication::translate("DogDialog", "Name:", nullptr));
        breedLabel->setText(QCoreApplication::translate("DogDialog", "Breed:", nullptr));
        ageLabel->setText(QCoreApplication::translate("DogDialog", "Age:", nullptr));
        adoptButton->setText(QCoreApplication::translate("DogDialog", "Adopt", nullptr));
        noAdoptButton->setText(QCoreApplication::translate("DogDialog", "Don't Adopt", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DogDialog: public Ui_DogDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOGDIALOG_H
