//
// Created by crist on 2025-05-20.
//

#ifndef ADMIN_H
#define ADMIN_H

#include <QWidget>
#include "services.h"


QT_BEGIN_NAMESPACE
namespace Ui { class admin; }
QT_END_NAMESPACE

class admin : public QWidget {
Q_OBJECT

public:
    admin(AdminController& controller_, QWidget *parent = nullptr);
    ~admin() override;

private:
    Ui::admin *ui;
    AdminController& controller;

    void populateTable();

private slots:
    void on_addButton_clicked();
    void on_removeButton_clicked();
    void on_updateButton_clicked();
    void onStatisticsClicked();
    void onUndo();
    void onRedo();
};



#endif //ADMIN_H
