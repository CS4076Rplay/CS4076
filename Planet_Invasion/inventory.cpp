#include "inventory.h"

Inventory::Inventory()
{

}
vector<Item> Inventory::getItems()
{
    return items;
}
void Inventory::addItem(const Item& item)
{
    items.push_back(item);
}
void Inventory::setItems(vector<Item>& items)
{
    this -> items=items;
}
vector<Weapon> Inventory::getWeapons()
{
    return  weapons;
}
vector<Hp>Inventory::getHp()
{
    return potions;
}
void Inventory::addWeapon(Weapon* weapon)
{
    weapons.push_back(*weapon);
}
void Inventory::addHp(Hp* hp)
{
    potions.push_back(*hp);
}
