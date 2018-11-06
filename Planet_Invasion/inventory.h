#ifndef INVENTORY_H
#define INVENTORY_H
#include <vector>
#include<string>
#include "item.h"
#include "hp.h"
#include "weapon.h"
using namespace std;

class Inventory
{
private:
    vector<Item> items;
    vector<Weapon>weapons;
    vector<Hp>potions;
public:
    Inventory();
    vector<Item> getItems();
    vector<Weapon> getWeapons();
    vector<Hp>getHp();
    void addWeapon(Weapon*);
    void addHp(Hp*);
    void addItem(const Item& item);
    void setItems(vector<Item>&);

};

#endif // INVENTORY_H
