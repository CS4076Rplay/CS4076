#ifndef KEYITEM_H
#define KEYITEM_H
#include "item.h"

class KeyItem:public Item
{
private:
    string *keyTo;
public:
    KeyItem();
    KeyItem(const string&);
};

#endif // KEYITEM_H
