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

string Item::getUrl()
{
    return url;
}

void Item::setName(const string& n)
{
     name=n;
}

void Item::setId(const string& i)
{
    id=i;
}

void Item::setDescription(const string& desc)
{
   description=desc;
}

void Item::setUrl(const string& u)
{
    url=u;
}

void Item::setSoundUrl(const string& soundUrl)
{
    this->soundUrl=soundUrl;
}

string Item::getSoundUrl()
{
    return soundUrl;
}

Item::Item(const string& n,const string& i,const string& desc,const string& u)
{
    name=n;
    id=i;
    description=desc;
    url=u;
}
