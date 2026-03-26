//
// Created by crist on 2025-05-21.
//

// You may need to build the project (run Qt uic code generator) to get "ui_FilterDialog.h" resolved

#include "filterdialog.h"

#include <QPushButton>

#include "ui_FilterDialog.h"


FilterDialog::FilterDialog(QWidget *parent) :
    QDialog(parent), ui(new Ui::FilterDialog) {
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &FilterDialog::accept);
}

FilterDialog::~FilterDialog() {
    delete ui;
}

std::string FilterDialog::get_breed() const {
    /*
     * Gets the breed from the filter dialog
     *
     * @return the breed from the filter dialog
     */
    return ui->breedLineEdit->text().toStdString();
}

int FilterDialog::get_max_age() const {
    /*
     * Gets the maximum age from the filter dialog
     *
     * @return the maximum age from the filter dialog
     */
    return ui->spinBox->value();
}
