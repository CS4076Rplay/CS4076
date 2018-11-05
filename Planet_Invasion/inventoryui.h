#ifndef INVENTORYUI_H
#define INVENTORYUI_H
#include "keyitem.h"
#include "weapon.h"
#include <QDialog>
#include "clickableqlabel.h"
namespace Ui {
class InventoryUI;
}

class InventoryUI : public QDialog
{
    Q_OBJECT

public:
    explicit InventoryUI(QWidget *parent = nullptr);
    void setupInventory();
    template<typename T>
    void saveToInventory(T& );
    ~InventoryUI();

private slots:
    void MOUSE_CLICKED();
    void MOUSE_CLICKED(Item&);
private:
    Ui::InventoryUI *ui;
    vector<Weapon> weapons;
    vector<KeyItem>keys;


};

#endif // INVENTORYUI_H
