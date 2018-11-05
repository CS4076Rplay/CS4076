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
