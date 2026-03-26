//
// Created by crist on 2025-05-21.
//

#ifndef DOGDIALOG_H
#define DOGDIALOG_H

#include <QDialog>
#include "Dog.h"


QT_BEGIN_NAMESPACE
namespace Ui { class DogDialog; }
QT_END_NAMESPACE

class DogDialog : public QDialog {
Q_OBJECT

protected:
    void closeEvent(QCloseEvent *event) override;

public:
    explicit DogDialog(Dog dog_, QWidget *parent = nullptr);
    ~DogDialog() override;

private:
    Ui::DogDialog *ui;
    Dog dog;
};


#endif //DOGDIALOG_H
