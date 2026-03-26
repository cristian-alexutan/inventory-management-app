/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_User
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *cycleAllButton;
    QPushButton *cycleFilteredButton;
    QPushButton *displayButton;
    QPushButton *tableButton;

    void setupUi(QWidget *User)
    {
        if (User->objectName().isEmpty())
            User->setObjectName("User");
        User->resize(400, 140);
        verticalLayout_2 = new QVBoxLayout(User);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        cycleAllButton = new QPushButton(User);
        cycleAllButton->setObjectName("cycleAllButton");

        verticalLayout->addWidget(cycleAllButton);

        cycleFilteredButton = new QPushButton(User);
        cycleFilteredButton->setObjectName("cycleFilteredButton");

        verticalLayout->addWidget(cycleFilteredButton);

        displayButton = new QPushButton(User);
        displayButton->setObjectName("displayButton");

        verticalLayout->addWidget(displayButton);

        tableButton = new QPushButton(User);
        tableButton->setObjectName("tableButton");

        verticalLayout->addWidget(tableButton);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(User);

        QMetaObject::connectSlotsByName(User);
    } // setupUi

    void retranslateUi(QWidget *User)
    {
        User->setWindowTitle(QCoreApplication::translate("User", "User", nullptr));
        cycleAllButton->setText(QCoreApplication::translate("User", "Cycle All Dogs", nullptr));
        cycleFilteredButton->setText(QCoreApplication::translate("User", "Cycle Filtered Dogs", nullptr));
        displayButton->setText(QCoreApplication::translate("User", "Display Adoption List", nullptr));
        tableButton->setText(QCoreApplication::translate("User", "Display Adoption List Table", nullptr));
    } // retranslateUi

};

namespace Ui {
    class User: public Ui_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
