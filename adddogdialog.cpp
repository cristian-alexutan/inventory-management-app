//
// Created by crist on 2025-05-20.
//

// You may need to build the project (run Qt uic code generator) to get "ui_AddDogDialog.h" resolved

#include "adddogdialog.h"
#include "ui_AddDogDialog.h"


AddDogDialog::AddDogDialog(QWidget *parent) :
    QDialog(parent), ui(new Ui::AddDogDialog) {
    ui->setupUi(this);
    connect(ui->confirmButton, &QPushButton::clicked, this, &AddDogDialog::accept);
}

AddDogDialog::~AddDogDialog() {
    delete ui;
}

std::string AddDogDialog::get_breed() const {
    return ui->breedLineEdit->text().toStdString();
}
std::string AddDogDialog::get_name() const {
    return ui->nameLineEdit->text().toStdString();
}

int AddDogDialog::get_age() const {
    return ui->ageLineEdit->text().toInt();
}

std::string AddDogDialog::get_photo_link() const {
    return ui->linkLineEdit->text().toStdString();
}
