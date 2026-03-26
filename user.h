//
// Created by crist on 2025-05-21.
//
#include "services.h"

#ifndef USER_H
#define USER_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class User; }
QT_END_NAMESPACE

class User : public QWidget {
Q_OBJECT

public:
    explicit User(UserController* controller_, QWidget *parent = nullptr);
    ~User() override;

private:
    Ui::User *ui;
    UserController* controller;

private slots:
    void onCycleAllClicked();
    void onCycleFilteredClicked();
    void onDisplayClicked();
    void onTableClicked();
};


#endif //USER_H
