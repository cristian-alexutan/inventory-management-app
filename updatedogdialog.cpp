//
// Created by crist on 2025-05-20.
//

// You may need to build the project (run Qt uic code generator) to get "ui_UpdateDogDialog.h" resolved

#include "updatedogdialog.h"

#include <QPushButton>

#include "ui_UpdateDogDialog.h"


UpdateDogDialog::UpdateDogDialog(QWidget *parent) :
    QDialog(parent), ui(new Ui::UpdateDogDialog) {
    ui->setupUi(this);
    connect(ui->confirmButton, &QPushButton::clicked, this, &UpdateDogDialog::accept);
}

UpdateDogDialog::~UpdateDogDialog() {
    delete ui;
}

int UpdateDogDialog::get_index() const {
    /*
     * Gets the index of the dog to update
     */
    return ui->indexLineEdit->text().toInt();
}

std::string UpdateDogDialog::get_breed() const {
    /*
     * Gets the breed of the dog to update
     */
    return ui->breedLineEdit->text().toStdString();
}

std::string UpdateDogDialog::get_name() const {
    /*
     * Gets the name of the dog to update
     */
    return ui->nameLineEdit->text().toStdString();
}

int UpdateDogDialog::get_age() const {
    /*
     * Gets the age of the dog to update
     */
    if(ui->ageLineEdit->text().size() == 0) return -1;
    return ui->ageLineEdit->text().toInt();
}

std::string UpdateDogDialog::get_photo_link() const {
    /*
     * Gets the photo link of the dog to update
     */
    return ui->linkLineEdit->text().toStdString();
}