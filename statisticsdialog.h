#pragma once
#include <QDialog>
#include <vector>
#include <map>
#include <QString>

class StatisticsDialog : public QDialog {
    Q_OBJECT
public:
    explicit StatisticsDialog(const std::map<QString, int>& breedCounts, QWidget* parent = nullptr);
protected:
    void paintEvent(QPaintEvent* event) override;
private:
    std::map<QString, int> breedCounts;
};