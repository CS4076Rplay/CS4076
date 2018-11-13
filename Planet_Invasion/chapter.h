#ifndef CHAPTER_H
#define CHAPTER_H
#include <string>
#include "room.h"

using namespace std;

class Chapter
{
protected:
    void createRoom();


public:
    virtual Room* resetRoom()=0;
    void goRoom(const string& direction);
    string getDescription();
    string getImage();
    Room *currentRoom;
    virtual ~Chapter();

};

#endif // CHAPTER_H
