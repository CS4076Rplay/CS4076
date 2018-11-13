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
    explicit InventoryUI(QWidget *parent = nullptr,Inventory* inventory=nullptr,GameScreen* currentGame=nullptr);
    void setupInventory();
    void setInventory(Inventory*);
    template<typename T>
    void saveToInventory(T& );
     void closeEvent(QCloseEvent *event);
    ~InventoryUI();

private slots:
    void MOUSE_CLICKED();

    void MOUSE_CLICKED(Weapon*);
     void MOUSE_CLICKED(Hp*);
    void MOUSE_CLICKED(int);
    void on_use_s1_clicked();

    void on_use_s2_clicked();

    void on_use_s3_clicked();

    void on_use_s4_clicked();

    void on_use_s5_clicked();

    void on_use_s6_clicked();

    void on_use_s7_clicked();

    void on_use_s8_clicked();

    void on_use_s9_clicked();

    void on_drink1_clicked();

    void on_drink2_clicked();

    void on_drink3_clicked();

    void on_drink4_clicked();

    void on_drink5_clicked();

    void on_drink6_clicked();

private:
    Ui::InventoryUI *ui;
    vector<Weapon> weapons;
    vector<KeyItem>keys;
    vector<Hp>hps;
    Inventory *inventory;
    GameScreen *currentGame;
    vector<string> slotType;
    vector<string>potions;
    QMediaPlayer *soundFx;
     ClickableQLabel *potion_label[6];



};

#endif // INVENTORYUI_H
