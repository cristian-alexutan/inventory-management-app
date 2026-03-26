#include "dogstablemodel.h"
#include <QFont>
#include <QBrush>

DogsTableModel::DogsTableModel(UserController& s, QObject* parent) : QAbstractTableModel{ parent }, serv{ s } {}

DogsTableModel::~DogsTableModel() {}

int DogsTableModel::rowCount(const QModelIndex & parent) const {
	int genesNumber = this->serv.get_adoption_list().size();
	return genesNumber + 1;
}

int DogsTableModel::columnCount(const QModelIndex & parent) const {
	return 4;
}

QVariant DogsTableModel::data(const QModelIndex & index, int role) const {
	int row = index.row();
	int column = index.column(); 
	std::vector<std::pair<Dog, int>> dogs = this->serv.get_adoption_list();
	if (row == dogs.size())
		return QVariant();
	Dog g = dogs[row].first;
	if (role == Qt::DisplayRole || role == Qt::EditRole) {
		switch (column)	{
			case 0:
				return QString::fromStdString(g.get_name());
			case 1:
				return QString::fromStdString(g.get_breed());
			case 2:
				return QString::fromStdString(std::to_string(g.get_age()));
			case 3:
				return QString::fromStdString(g.get_photo_link());
			default:
				break;
		}
	}
	if (role == Qt::FontRole)  {
		QFont font("Times", 8, 5, true);
		font.setItalic(false);
		return font;
	}
	return QVariant{};
}

QVariant DogsTableModel::headerData(int section, Qt::Orientation orientation, int role) const{
	if (role == Qt::DisplayRole){
		if (orientation == Qt::Horizontal) {
			switch (section) {
				case 0:
					return QString{ "Name"};
				case 1:
					return QString{ "Breed" };
				case 2:
					return QString{ "Age" };
				case 3:
					return QString{"Photo link"};
				default:
					break;
			}
		}
	}
	if (role == Qt::FontRole){
		QFont font("Times", 8, 5, true);
		font.setBold(true);
		font.setItalic(false);
		return font;
	}
	return QVariant{};
}

Qt::ItemFlags DogsTableModel::flags(const QModelIndex & index) const {
	return Qt::ItemIsSelectable | Qt::ItemIsEditable | Qt::ItemIsEnabled;
}
