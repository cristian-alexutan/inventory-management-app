//
// Created by crist on 2025-05-21.
//

// You may need to build the project (run Qt uic code generator) to get "ui_DogDialog.h" resolved

#include "dogdialog.h"
#include "ui_DogDialog.h"
#include <QCloseEvent>


DogDialog::DogDialog(Dog dog_, QWidget *parent) :
    dog(dog_), QDialog(parent), ui(new Ui::DogDialog) {
    ui->setupUi(this);

    ui->breedLabel->setText(QString::fromStdString("Breed: " + dog.get_breed()));
    ui->nameLabel->setText(QString::fromStdString("Name: " + dog.get_name()));
    ui->ageLabel->setText(QString::fromStdString("Age: " + std::to_string(dog.get_age())));

    connect(ui->adoptButton, &QPushButton::clicked, this, &DogDialog::accept);
    connect(ui->noAdoptButton, &QPushButton::clicked, this, &DogDialog::reject);
}

DogDialog::~DogDialog() {
    delete ui;
}

void DogDialog::closeEvent(QCloseEvent *event) {
    this->done(QDialog::Accepted+2);
    event->accept();
}