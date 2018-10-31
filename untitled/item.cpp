#include "item.h"

Item::Item()
{

}

string Item::getName()
{
    return  name;
}
string Item::getId()
{
    return  id;
}
string Item::getDescription()
{
    return description;
}
void Item::setName(string)
{
    this->name=name;
}
void Item::setId(string id)
{
    this->id=id;
}
void Item::setDescription(string description)
{
    this->description=description;
}
Item::~Item(){

}
Item::Item(string name,string id,string description)
{
    this->name=name;
    this->id=id;
    this->description=description;
}
