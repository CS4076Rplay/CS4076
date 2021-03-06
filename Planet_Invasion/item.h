#ifndef ITEM_H
#define ITEM_H
#include<string>

using namespace std;
class Item
{
protected:
    string name;
    string id;
    string description;
    string url;
    string soundUrl;
public:
    Item();
    Item(const string&,const string&,const string&,const string&);

    //getters
    string getName();
    string getId();
    string getDescription();
    string getUrl();
    string getSoundUrl();

    //setters
    void setName(const string&);
    void setId(const string&);
    void setDescription(const string&);
    void setUrl(const string&);
    void setSoundUrl(const string&);
    string toString()
    {
        return (name)+","+(id)+","+(description)+","+(url);
    }

};

#endif // ITEM_H
