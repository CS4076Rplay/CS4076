#ifndef ITEM_H
#define ITEM_H
#include <string>
#include <time.h>
using namespace std;

class Item
{
private:
    string name;
    string id;
    string description;
public:
    Item();
    string getName();
    string getId();
    string getDescription();
    void setName(string);
    void setId(string);
    void setDescription(string);
    ~Item();
    Item(string,string,string);


};

#endif // ITEM_H
