#pragma once
#include <QAbstractTableModel>
#include "services.h"

class DogsTableModel: public QAbstractTableModel {
private:
    UserController& serv;

public:
    DogsTableModel(UserController& s, QObject* parent = NULL);
    ~DogsTableModel();
    int rowCount(const QModelIndex &parent = QModelIndex{}) const override;
    int columnCount(const QModelIndex &parent = QModelIndex{}) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;
    Qt::ItemFlags flags(const QModelIndex & index) const override;
};

