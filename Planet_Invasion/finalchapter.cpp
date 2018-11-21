#include "chapterscreen.h"
#include "fileparser.h"
#include "finalchapter.h"
#include "ui_finalchapter.h"

FinalChapter::FinalChapter(QWidget *parent,Player *player,Inventory* inventory,Story *story) :
    QDialog(parent),
    ui(new Ui::FinalChapter)
{
    ui->setupUi(this);
    this->player=player;
            this->inventory=inventory;
        this->storyline=story;

    S_Chapter storyline=story->getChapter(3);
    QString text=QString::fromStdString(storyline.getChapterStory());

    string chapterStory=storyline.getChapterStory();
    Story().replace_all(chapterStory,"$name",player->getName());
    map<RACETYPES,string> races;
    races[SHADOWALKER]="SHADOWALKER";
    races[MOONMAGE]="MOONMAGE";
    races[KNIGHT]="KNIGHT";
    races[AI]="AI";

    if(player->getRaceType()==SHADOWALKER)
    {
        Story().replace_all(chapterStory,"Dad","Mom");
        Story().replace_all(chapterStory,"she's","he's");
        Story().replace_all(chapterStory,"mother","father");
         Story().replace_all(chapterStory,"DAD!!!","MOM!!!");
         Story().replace_all(chapterStory," her","him");

         Story().replace_all(chapterStory,"wife","husband");

    }
     Story().replace_all(chapterStory,"$race",races[player->getRaceType()]);

    vector<string> storyParts=FileParser().split(chapterStory,'~');

    map<int,string> storyMap;
    for(unsigned int i=0;i<storyParts.size();i++)
    {

        Story().replace(storyParts[i],"~","");
        storyMap[(int)i]=storyParts[i];
    }
    ui->finalStory->setText(QString::fromStdString(storyMap[0]));

}

FinalChapter::~FinalChapter()
{
    delete ui;
}

void FinalChapter::on_mainMenuBtn_clicked()
{
    ChapterScreen *cs=new ChapterScreen(this);
    cs->inventory=this->inventory;
    cs->player=this->player;
    cs->storyline=this->storyline;
   hide();
   cs->show();
}
