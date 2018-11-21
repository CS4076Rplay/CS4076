#ifndef STORY_H
#define STORY_H
#include "s_chapter.h"
#include <vector>
class Story
{
public:
    Story();

    vector<S_Chapter>getChapters();

    S_Chapter getChapter(const unsigned long&);
    void setChapters(vector<S_Chapter>&);
    void addChapter(const S_Chapter&);
    bool replace(std::string& , const std::string& , const std::string& ) ;

    bool contains(std::string& ,const std::string& );

    void replace_all(std::string& , const std::string& , const std::string& );
  private:
    vector<S_Chapter>chapters;

};

#endif // STORY_H
