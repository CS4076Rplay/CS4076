#include "story.h"
#include "fileparser.h"
#include <QDebug>
bool Story::replace(std::string& str, const std::string& from, const std::string& to) {
    size_t start_pos = str.find(from);
    if(start_pos == std::string::npos)
        return false;
    str.replace(start_pos, from.length(), to);
    return true;
}

bool Story::contains(std::string& str,const std::string& find)
{
    std::vector<string> strAsList=FileParser().split(str,' ');

    for(string s:strAsList)
    {
        if(s==find)return true;
    }
    return false;
}

void Story::replace_all( std::string& str, const std::string& from, const std::string& to)
{

   if(contains(str,from))
      {
        replace(str,from,to);
        replace_all(str,from,to);
      }
}
Story::Story()
{

}
vector<S_Chapter> Story::getChapters()
{
    return chapters;
}
S_Chapter Story::getChapter(const unsigned long& chapter)
{
    if(chapter>chapters.size())
       {
        qDebug()<< "IndexOutOfBounds"<<endl;
        return  chapters[0];}
    else
    return chapters[chapter];
}

void Story::setChapters(vector<S_Chapter>& chapters)
{
    this->chapters=chapters;
}
void Story::addChapter(const S_Chapter& chapter)
{
    chapters.push_back(chapter);
}
