#include "chapter.h"

using namespace std;
Chapter::Chapter()
{
   
}
Chapter::Chapter(vector<String>storyline)
{
   this->storyline=storyline;
}
vector<String>Chapter:: getStoryline()
{
    return storyline;
}
void Chapter:: setStoryLine(vector<String>){
    this -> storyline = storyline;
}
Chapter::~Chapter()
{
    
}
