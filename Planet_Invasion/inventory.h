#ifndef INVENTORY_H
#define INVENTORY_H
#include <vector>
#include<string>
#include "item.h"
using namespace std;

class Inventory
{
private:
    vector<Item> items;

public:
    Inventory();
    vector<Item> getItems();
    void addItem(const Item& item);
    void setItems(vector<Item>&);

};

#endif // INVENTORY_H
