#ifndef INVENTORYUI_H
#define INVENTORYUI_H
#include "keyitem.h"
#include "weapon.h"
#include <QDialog>
#include "clickableqlabel.h"
#include "inventory.h"
#include "gamescreen.h"
namespace Ui {
class InventoryUI;
}

class InventoryUI : public QDialog
{
    friend class GameScreen;
    Q_OBJECT

public:
    explicit InventoryUI(QWidget *parent = nullptr);
    void setupInventory();
    void setInventory(Inventory*);
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
    vector<Hp>hps;
    Inventory *inventory;



};

#endif // INVENTORYUI_H
