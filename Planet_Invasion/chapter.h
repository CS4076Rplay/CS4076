#ifndef CHAPTER_H
#define CHAPTER_H
#include <string>
#include "room.h"

using namespace std;

class Chapter
{
protected:
    void createRoom();
    Room *currentRoom;

public:
    void goRoom(const string& direction);
    string getDescription();
};

#endif // CHAPTER_H
