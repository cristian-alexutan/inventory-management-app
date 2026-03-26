//
// Created by crist on 2025-05-20.
//

#ifndef UPDATEDOGDIALOG_H
#define UPDATEDOGDIALOG_H

#include <QDialog>


QT_BEGIN_NAMESPACE
namespace Ui { class UpdateDogDialog; }
QT_END_NAMESPACE

class UpdateDogDialog : public QDialog {
Q_OBJECT

public:
    explicit UpdateDogDialog(QWidget *parent = nullptr);
    ~UpdateDogDialog() override;
    int get_index() const;
    std::string get_breed() const;
    std::string get_name() const;
    int get_age() const;
    std::string get_photo_link() const;

private:
    Ui::UpdateDogDialog *ui;
};


#endif //UPDATEDOGDIALOG_H
