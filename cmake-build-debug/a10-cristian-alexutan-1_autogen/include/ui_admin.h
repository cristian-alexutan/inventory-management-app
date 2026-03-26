/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *add_dog_button;
    QPushButton *remove_dog_button;
    QPushButton *update_dog_button;
    QPushButton *statisticsButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *undoButton;
    QPushButton *redoButton;

    void setupUi(QWidget *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName("admin");
        admin->resize(525, 463);
        verticalLayout_4 = new QVBoxLayout(admin);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget = new QWidget(admin);
        widget->setObjectName("widget");
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        tableWidget = new QTableWidget(widget);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tableWidget->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(tableWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        add_dog_button = new QPushButton(widget);
        add_dog_button->setObjectName("add_dog_button");

        horizontalLayout->addWidget(add_dog_button);

        remove_dog_button = new QPushButton(widget);
        remove_dog_button->setObjectName("remove_dog_button");

        horizontalLayout->addWidget(remove_dog_button);

        update_dog_button = new QPushButton(widget);
        update_dog_button->setObjectName("update_dog_button");

        horizontalLayout->addWidget(update_dog_button);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(widget);

        statisticsButton = new QPushButton(admin);
        statisticsButton->setObjectName("statisticsButton");

        verticalLayout_2->addWidget(statisticsButton);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        undoButton = new QPushButton(admin);
        undoButton->setObjectName("undoButton");

        horizontalLayout_2->addWidget(undoButton);

        redoButton = new QPushButton(admin);
        redoButton->setObjectName("redoButton");

        horizontalLayout_2->addWidget(redoButton);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QWidget *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "admin", nullptr));
        add_dog_button->setText(QCoreApplication::translate("admin", "Add Dog", nullptr));
        remove_dog_button->setText(QCoreApplication::translate("admin", "Remove Dog", nullptr));
        update_dog_button->setText(QCoreApplication::translate("admin", "Update Dog", nullptr));
        statisticsButton->setText(QCoreApplication::translate("admin", "Statistics", nullptr));
        undoButton->setText(QCoreApplication::translate("admin", "Undo", nullptr));
        redoButton->setText(QCoreApplication::translate("admin", "Redo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
