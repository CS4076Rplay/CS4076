#ifndef INVENTORY_H
#define INVENTORY_H
#include "item.h"

class Inventory
{
private:
    Item* items;
public:
    Inventory();
    ~Inventory();
    Inventory(Item*);
    Inventory(const Item&,const Item&,const Item&,const Item&);
    Item* getItems();
    void setItems(Item*);
    Item getItemA();
    Item getItemB();
    Item getItemC();
    Item getItemD();
    void setItemA(const Item& a);
    void setItemB(const Item& b);
    void setItemC(const Item& c);
    void setItemD(const Item& d);

};

#endif // INVENTORY_H
