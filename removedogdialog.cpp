//
// Created by crist on 2025-05-20.
//

// You may need to build the project (run Qt uic code generator) to get "ui_RemoveDogDialog.h" resolved

#include "removedogdialog.h"
#include "ui_RemoveDogDialog.h"



RemoveDogDialog::RemoveDogDialog(QWidget *parent) :
    QDialog(parent), ui(new Ui::RemoveDogDialog) {
    ui->setupUi(this);
    connect(ui->confirmButton, &QPushButton::clicked, this, &RemoveDogDialog::accept);
}

RemoveDogDialog::~RemoveDogDialog() {
    delete ui;
}

int RemoveDogDialog::get_index() const {
    /*
     * Gets the index of the dog to remove
     */
    return ui->indexLineEdit->text().toInt();
}