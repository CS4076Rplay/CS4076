#ifndef S_CHAPTER_H
#define S_CHAPTER_H

#include<string>
using namespace std;
class S_Chapter
{
public:
    S_Chapter();
    string getChapterStory();
    void setChapterStory( string);
private:
    string chapterStory;
};

#endif // S_CHAPTER_H
