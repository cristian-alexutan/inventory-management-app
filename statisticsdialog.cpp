#include "statisticsdialog.h"
#include <QPainter>
#include <QFontMetrics>
#include <QtMath>

StatisticsDialog::StatisticsDialog(const std::map<QString, int>& breedCounts, QWidget* parent)
    : QDialog(parent), breedCounts(breedCounts) {
    setWindowTitle("Dog Breed Statistics");
    resize(900, 600);
}

void StatisticsDialog::paintEvent(QPaintEvent*) {
    QPainter painter(this);
    int marginX = width() / 12;
    int marginY = height() / 8;
    int n = static_cast<int>(breedCounts.size());
    if (n == 0) return;

    int chartWidth = width() - 2 * marginX;
    int chartHeight = height() - 2 * marginY;
    int yBase = height() - marginY;

    int maxCount = 1;
    for (const auto& pair : breedCounts)
        if (pair.second > maxCount) maxCount = pair.second;

    int minBarWidth = 20;
    int maxBarWidth = 60;
    int barWidth = std::min(std::max(chartWidth / (2 * n), minBarWidth), maxBarWidth);
    int spacing = (chartWidth - n * barWidth) / (n + 1);

    QFontMetrics fm(painter.font());
    int i = 0;
    for (const auto& pair : breedCounts) {
        int barX = marginX + spacing + i * (barWidth + spacing);
        int barHeight = (pair.second * chartHeight) / maxCount;
        QRect barRect(barX, yBase - barHeight, barWidth, barHeight);
        painter.setBrush(Qt::blue);
        painter.drawRect(barRect);

        painter.save();
        painter.translate(barX + barWidth / 2, yBase + 10);
        painter.rotate(-45);
        painter.drawText(0, 0, pair.first);
        painter.restore();

        painter.drawText(barX, yBase - barHeight - 8, QString::number(pair.second));
        ++i;
    }
}