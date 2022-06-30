#ifndef MULTILIST
#define MULTILIST

#include <QtWidgets>

class MultiList : public QComboBox {
    Q_OBJECT

private:
    QString displayText;
    QStandardItemModel *model;

public:
    MultiList(QWidget *parent = 0) : QComboBox(parent) {
        setEditable(true);

        displayText = "";
        model = new QStandardItemModel;
        slotUpdateText();

        connect(model, SIGNAL(itemChanged(QStandardItem*)), this, SLOT(slotUpdate()));
    }

    void addItem(const QString &text) {
        int row = model->rowCount();
        QStandardItem* item = new QStandardItem();
        item->setText(text);
        item->setFlags(Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
        item->setData(Qt::Unchecked, Qt::CheckStateRole);
        model->setItem(row, 0, item);
        this->setModel(model);
    }

    void addItems(const QStringList &texts) {
        for (int i = 0; i < texts.count(); i++) {
            addItem(texts.at(i));
        }
    }

    QStringList getCheckedItems() const {
        QStringList checkedItems;

        for (int i = 0; i < model->rowCount(); i++) {
            if (model->item(i, 0)->checkState() == Qt::Checked) {
                checkedItems << model->item(i, 0)->text();
            }
        }

        return checkedItems;
    }

    void setCheckedItems(const QStringList &items) {
        for (int i = 0; i < items.count(); i++) {
            int index = findText(items.at(i));

            if (index != -1) {
                model->item(index)->setData(Qt::Checked, Qt::CheckStateRole);
            }
        }

        slotUpdate();
    }

public slots:
    void slotUpdateText() {
        lineEdit()->setText(displayText);
    }

    void slotUpdate() {
        displayText = "";

        for (int i = 0; i < model->rowCount(); i++) {
            if (model->item(i, 0)->checkState() == Qt::Checked) {
                displayText = displayText + model->item(i, 0)->text() + "; ";
            }
        }

        QTimer::singleShot(0, this, SLOT(slotUpdateText()));
    }
};


#endif
