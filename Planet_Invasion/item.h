#ifndef ITEM_H
#define ITEM_H
#include<string>

using namespace std;
class Item
{
protected:
    string *name;
    string *id;
    string *description;
    string *url;
public:
    Item();
    Item(const string&,const string&,const string&,const string&);
    string toString()
    {
        return (*name)+","+(*id)+","+(*description)+","+(*url);
    }
    //getters
    string getName();
    string getId();
    string getDescription();
    string getUrl();
    //setters
    void setName(const string&);
    void setId(const string&);
    void setDescription(const string&);
    void setUrl(const string&);


};

#endif // ITEM_H
