#include "inventory.h"

Inventory::Inventory()
{
    this->items[0]=Item("","","");
    this->items[1]=Item("","","");
    this->items[2]=Item("","","");
    this->items[3]=Item("","","");
}
Inventory::~Inventory()
{

}
Inventory::Inventory(Item*items)
{
    this->items=items;
}
Inventory::Inventory(const Item& a,const Item& b,const Item& c,const Item& d)
{
    this->items[0]=a;
    this->items[1]=b;
    this->items[2]=c;
    this->items[3]=d;
}
Item* Inventory::getItems()
{
    return  items;
}
void Inventory::setItems(Item*)
{
    this->items=items;
}
Item Inventory::getItemA()
{
    return items[0];
}
Item Inventory::getItemB()
{
    return items[1];
}
Item Inventory::getItemC()
{
    return items[2];
}
Item Inventory::getItemD()
{
    return items[4];
}
void Inventory::setItemA(const Item& a)
{
    this->items[0]=a;
}
void Inventory::setItemB(const Item& b)
{
    this->items[1]=b;
}
void Inventory::setItemC(const Item& c)
{
    this->items[2]=c;
}
void Inventory::setItemD(const Item& d)
{
    this->items[3]=d;
}
