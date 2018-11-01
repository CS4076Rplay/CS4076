#ifndef INVENTORYUI_H
#define INVENTORYUI_H

#include <QDialog>

namespace Ui {
class InventoryUI;
}

class InventoryUI : public QDialog
{
    Q_OBJECT

public:
    explicit InventoryUI(QWidget *parent = nullptr);
    ~InventoryUI();

private:
    Ui::InventoryUI *ui;
};

#endif // INVENTORYUI_H
