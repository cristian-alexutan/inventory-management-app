//
// Created by crist on 2025-05-21.
//

#ifndef FILTERDIALOG_H
#define FILTERDIALOG_H

#include <QDialog>


QT_BEGIN_NAMESPACE
namespace Ui { class FilterDialog; }
QT_END_NAMESPACE

class FilterDialog : public QDialog {
Q_OBJECT

public:
    explicit FilterDialog(QWidget *parent = nullptr);
    ~FilterDialog() override;
    std::string get_breed() const;
    int get_max_age() const;

private:
    Ui::FilterDialog *ui;
};


#endif //FILTERDIALOG_H
