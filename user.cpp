//
// Created by crist on 2025-05-21.
//

// You may need to build the project (run Qt uic code generator) to get "ui_User.h" resolved

#include "user.h"

#include <QMessageBox>
#include <QTableView>

#include "ui_User.h"
#include "dogdialog.h"
#include "filterdialog.h"
#include "dogstablemodel.h"


User::User(UserController* controller_, QWidget *parent) :
    controller(controller_), QWidget(parent), ui(new Ui::User) {
    ui->setupUi(this);
    connect(ui->cycleAllButton, &QPushButton::clicked, this, &User::onCycleAllClicked);
    connect(ui->cycleFilteredButton, &QPushButton::clicked, this, &User::onCycleFilteredClicked);
    connect(ui->displayButton, &QPushButton::clicked, this, &User::onDisplayClicked);
    connect(ui->tableButton, &QPushButton::clicked, this, &User::onTableClicked);
}

User::~User() {
    delete ui;
}

void User::onCycleAllClicked() {
    /*
     * Cycles through all the dogs in the repository
     */
    std::vector<std::pair<Dog, int>> dogs = this->controller->get_dogs();
    if (dogs.empty()) {
        QMessageBox::information(this, "No dogs", "No dogs available");
        return;
    }
    int index = 0;
    if(dogs.empty())
        return;
    while(true) {
        DogDialog* dogDialog = new DogDialog(dogs[index].first, this);
        dogDialog->setWindowTitle("Dog");
        std::string cmd = "start " + dogs[index].first.get_photo_link();
        //system(cmd.c_str());
        if (dogDialog->exec() == QDialog::Accepted) {
            try {
                this->controller->add_dog_to_adoption_list(dogs[index]);
                QMessageBox::information(this, "Dog added", "Dog added to adoption list");
            }
            catch (ControllerError& e) {
                QMessageBox::warning(this, "Dog already in adoption list", e.what());
            }
            index++;
            if(index >= dogs.size())
                index = 0;
            delete dogDialog;
        }
        else if(dogDialog->result() == QDialog::Rejected) {
            index++;
            if(index >= dogs.size())
                index = 0;
            delete dogDialog;
        }
        else {
            delete dogDialog;
            break;
        }
    }
    //this->controller->adopt_dogs();
}

void User::onCycleFilteredClicked() {
    /*
     * Cycles through the filtered dogs in the repository
     */
    FilterDialog* filterDialog = new FilterDialog(this);
    filterDialog->setWindowTitle("Filter");
    if (filterDialog->exec() == QDialog::Accepted) {
        std::string breed = filterDialog->get_breed();
        int max_age = filterDialog->get_max_age();
        std::vector<std::pair<Dog, int>> dogs = this->controller->get_filtered_dogs(breed, max_age);
        if (dogs.empty()) {
            QMessageBox::information(this, "No dogs", "No dogs available");
            return;
        }
        int index = 0;
        while(true) {
            DogDialog* dogDialog = new DogDialog(dogs[index].first, this);
            dogDialog->setWindowTitle("Dog");
            std::string cmd = "start " + dogs[index].first.get_photo_link();
            //system(cmd.c_str());
            if (dogDialog->exec() == QDialog::Accepted) {
                try {
                    this->controller->add_dog_to_adoption_list(dogs[index]);
                    QMessageBox::information(this, "Dog added", "Dog added to adoption list");
                }
                catch (ControllerError& e) {
                    QMessageBox::warning(this, "Dog already in adoption list", e.what());
                }
                index++;
                if(index >= dogs.size())
                    index = 0;
                delete dogDialog;
            }
            else if(dogDialog->result() == QDialog::Rejected) {
                index++;
                if(index >= dogs.size())
                    index = 0;
                delete dogDialog;
            }
            else {
                delete dogDialog;
                break;
            }
        }
    }
    //this->controller->adopt_dogs();
    delete filterDialog;
}

void User::onDisplayClicked() {
    /*
     * Displays the dogs in the adoption list
     */
    std::string cmd = "start " + this->controller->get_file();
    system(cmd.c_str());
}

void User::onTableClicked() {
    /*
     * Displays the dogs in a table
     */
    QWidget* tableWidget = new QWidget(this);
    QVBoxLayout* layout = new QVBoxLayout(tableWidget);
    QTableView* tableView = new QTableView(tableWidget);
    DogsTableModel* model = new DogsTableModel(*this->controller, tableWidget);
    tableView->setModel(model);
    layout->addWidget(tableView);
    tableWidget->setLayout(layout);
    tableWidget->setAttribute(Qt::WA_DeleteOnClose);
    tableWidget->setWindowTitle("Adoption List Table");
    tableWidget->resize(600, 400);
    tableWidget->setLayout(layout);
    tableWidget->show();
}