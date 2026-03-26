#include <QApplication>
#include <QMessageBox>
#include <QPushButton>
#include "repo.h"
#include "services.h"
#include "admin.h"
#include "user.h"
#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    Repository repo("repo.txt");

    QMessageBox msgBox;
    msgBox.setWindowTitle("Select Mode");
    msgBox.setText("Choose application mode:");
    QPushButton *adminBtn = msgBox.addButton("Admin", QMessageBox::AcceptRole);
    QPushButton *userBtn = msgBox.addButton("User", QMessageBox::RejectRole);
    msgBox.exec();

    QWidget *window = nullptr;

    if (msgBox.clickedButton() == adminBtn) {
        AdminController adminController(repo);
        window = new admin(adminController);
    }
    else if (msgBox.clickedButton() == userBtn) {
        QMessageBox fileBox;
        fileBox.setWindowTitle("Select File Type");
        fileBox.setText("Choose adoption list file type:");
        QPushButton *csvBtn = fileBox.addButton("CSV", QMessageBox::AcceptRole);
        QPushButton *htmlBtn = fileBox.addButton("HTML", QMessageBox::RejectRole);
        fileBox.exec();

        if (fileBox.clickedButton() == csvBtn) {
            UserController* uc = new CSVUserController(repo, "adoption_list.csv");
            window = new User(uc);
        }
        else if (fileBox.clickedButton() == htmlBtn) {
            UserController* uc = new HTMLUserController(repo, "adoption_list.html");
            window = new User(uc);
        }
    }

    if (window) {
        window->show();
        int result = app.exec();
        delete window;
        return result;
    }
    return 0;
}