//
// Created by crist on 2025-05-20.
//

// You may need to build the project (run Qt uic code generator) to get "ui_admin.h" resolved

#include "admin.h"

#include <QMessageBox>

#include "ui_admin.h"
#include "dog.h"
#include "adddogdialog.h"
#include "removedogdialog.h"
#include "updatedogdialog.h"
#include "statisticsdialog.h"
#include <QShortcut>


admin::admin(AdminController& controller_, QWidget *parent) :
    QWidget(parent), ui(new Ui::admin),  controller(controller_) {
    ui->setupUi(this);
    connect(ui->add_dog_button, &QPushButton::clicked, this, &admin::on_addButton_clicked);
    connect(ui->remove_dog_button, &QPushButton::clicked, this, &admin::on_removeButton_clicked);
    connect(ui->update_dog_button, &QPushButton::clicked, this, &admin::on_updateButton_clicked);
    connect(ui->statisticsButton, &QPushButton::clicked, this, &admin::onStatisticsClicked);
    connect(ui->undoButton, &QPushButton::clicked, this, &admin::onUndo);
    connect(ui->redoButton, &QPushButton::clicked, this, &admin::onRedo);
    new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_Z), this, SLOT(onUndo()));
    new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_Y), this, SLOT(onRedo()));
    this->populateTable();
    this->setWindowTitle("Admin Mode");
    this->setFixedSize(900, 600);
}

admin::~admin() {
    delete ui;
}

void admin::populateTable() {
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setColumnCount(4);
    ui->tableWidget->setHorizontalHeaderLabels({"Breed", "Name", "Age", "Photo Link"});
    std::vector<Dog> dogs = controller.get_dogs();
    int row = 0;
    for(auto dog : dogs) {
        ui->tableWidget->insertRow(row);
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(QString::fromStdString(dog.get_breed())));
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(QString::fromStdString(dog.get_name())));
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(QString::number(dog.get_age())));
        ui->tableWidget->setItem(row, 3, new QTableWidgetItem(QString::fromStdString(dog.get_photo_link())));
        row++;
    }
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void admin::on_addButton_clicked() {
    AddDogDialog* addDogDialog = new AddDogDialog(this);
    addDogDialog->setWindowTitle("Add Dog");
    if (addDogDialog->exec() == QDialog::Accepted) {
        std::string breed = addDogDialog->get_breed();
        std::string name = addDogDialog->get_name();
        int age = addDogDialog->get_age();
        std::string photo_link = addDogDialog->get_photo_link();

        Dog dog(breed, name, age, photo_link);
        Validator t;
        try {
            t.validate(dog);
            controller.add_dog(dog);
            this->populateTable();
        } catch (ValidationError& e) {
            QMessageBox::warning(this, "Validation Error", QString::fromStdString(e.what()));
            return;
        }
    }
}

void admin::on_removeButton_clicked() {
    RemoveDogDialog* removeDogDialog = new RemoveDogDialog(this);
    removeDogDialog->setWindowTitle("Remove Dog");
    if (removeDogDialog->exec() == QDialog::Accepted) {
        int index = removeDogDialog->get_index();
        try {
            controller.remove_dog(index-1);
            this->populateTable();
        } catch (RepositoryError& e) {
            QMessageBox::warning(this, "Repository Error", QString::fromStdString(e.what()));
            return;
        }
    }
}

void admin::on_updateButton_clicked() {
    UpdateDogDialog* updateDogDialog = new UpdateDogDialog(this);
    updateDogDialog->setWindowTitle("Update Dog");
    if (updateDogDialog->exec() == QDialog::Accepted) {
        int index = updateDogDialog->get_index();
        std::string breed = updateDogDialog->get_breed();
        std::string name = updateDogDialog->get_name();
        int age = updateDogDialog->get_age();
        std::string photo_link = updateDogDialog->get_photo_link();
        std::vector<Dog> dogs = this->controller.get_dogs();
        Dog dog = dogs[index-1];
        if (breed != "")
            dog.set_breed(breed);
        if (name != "")
            dog.set_name(name);
        if(age != -1)
            dog.set_age(age);
        if (photo_link != "")
            dog.set_photo_link(photo_link);
        Validator t;
        try {
            t.validate(dog);
            controller.update_breed(index-1, dog.get_breed());
            controller.update_name(index-1, dog.get_name());
            controller.update_age(index-1, dog.get_age());
            controller.update_photo_link(index-1, dog.get_photo_link());
            this->populateTable();
        } catch (ValidationError& e) {
            QMessageBox::warning(this, "Validation Error", QString::fromStdString(e.what()));
            return;
        }
    }
}

void admin::onStatisticsClicked() {
    // Count dogs per breed
    std::vector<Dog> dogs = controller.get_dogs();
    std::map<QString, int> breedCounts;
    for (auto dog : dogs)
        breedCounts[QString::fromStdString(dog.get_breed())]++;
    StatisticsDialog* dialog = new StatisticsDialog(breedCounts, this);
    dialog->exec();
    delete dialog;
}

void admin::onUndo() {
    try {
        controller.undo();
        this->populateTable();
    }
    catch (ControllerError& e) {
        QMessageBox::warning(this, "Undo Error", QString::fromStdString(e.what()));
    }
}

void admin::onRedo() {
    try {
        controller.redo();
        this->populateTable();
    }
    catch (ControllerError& e) {
        QMessageBox::warning(this, "Redo Error", QString::fromStdString(e.what()));
    }
}