#ifndef CHAPTER_H
#define CHAPTER_H

#include "vector"
#include "string"
using namespace std;
typedef string String;
class Chapter
{
private:
    vector<String>storyline;
public:
    vector<String> getStoryline();
    void setStoryLine(vector<String>);
    Chapter();
    Chapter(vector<string>);
    ~Chapter();

};

#endif // CHAPTER_H
