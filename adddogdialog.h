//
// Created by crist on 2025-05-20.
//

#ifndef ADDDOGDIALOG_H
#define ADDDOGDIALOG_H

#include <QWidget>
#include <QDialog>


QT_BEGIN_NAMESPACE
namespace Ui { class AddDogDialog; }
QT_END_NAMESPACE

class AddDogDialog : public QDialog {
Q_OBJECT

public:
    explicit AddDogDialog(QWidget *parent = nullptr);
    ~AddDogDialog() override;
    std::string get_breed() const;
    std::string get_name() const;
    int get_age() const;
    std::string get_photo_link() const;

private:
    Ui::AddDogDialog *ui;
};


#endif //ADDDOGDIALOG_H
