//
// Created by crist on 2025-05-20.
//

#ifndef REMOVEDOGDIALOG_H
#define REMOVEDOGDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class RemoveDogDialog; }
QT_END_NAMESPACE

class RemoveDogDialog : public QDialog {
Q_OBJECT

public:
    explicit RemoveDogDialog(QWidget *parent = nullptr);
    ~RemoveDogDialog() override;
    int get_index() const;

private:
    Ui::RemoveDogDialog *ui;
};


#endif //REMOVEDOGDIALOG_H
