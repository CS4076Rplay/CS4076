#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    if(loadFiles())
    {
        loadIntro();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

}
bool MainWindow::loadFiles(){
    //load main file and all the files its contains
    bool complete=false;

    vector<string>dirs;//load all other file directories
    const string path="E:/qProjects/Alien_Invasion/Story";
    FileParser* mainFile=new FileParser(path+"/main.txt",'\n');
    dirs=mainFile->loadFile();//loaded
    delete mainFile;
    int i=25;
    ui->progress->setValue(i);

    if(complete==false){
    for(string dir:dirs)
    {
        FileParser file(path+"/"+dir+".txt");
        if(dir=="intro")
        {
           intro=file.loadFile();
           i+=10;
           ui->progress->setValue(i);
        }
        else if(dir=="story")
        {
            FileParser story(path+"/"+dir+".txt");
            vector<string> chps;
           chps=story.loadFile();
           i+=10;
           ui->progress->setValue(i);

           for(string chapter:chps)
           {
              FileParser chapterFile(path+"/"+chapter+".txt");//gets chapter1,chapter2...
              //store each chapter in an array
              //such that chapter1=vector<string>
              chapters.push_back(Chapter(chapterFile.loadFile()));
              i+=10;
              ui->progress->setValue(i);
           }
          
        }else if(dir=="player")
        {
            FileParser playerFile(path+"/"+dir+".txt",',');
            vector<vector<String>> playerInfo=playerFile.loadFile(11);
            map<String,RACETYPES> races;
            //SHADOWALKER,MOONMAGE,BRUTE,AI
            races["SHADOWALKER"]=SHADOWALKER;
            races["MOONMAGE"]=MOONMAGE;
            races["BRUTE"]=BRUTE;
            races["AI"]=AI;
               /* player(playerInfo[0][0],
                        races[playerInfo[1][0]],
                        stoi(playerInfo[2][0]),stoi(playerInfo[3][0]),
                        stoi(playerInfo[4][0]),stoi(playerInfo[5][0]),stoi(playerInfo[6][0]),
                        Inventory(
                            Item(playerInfo[7][0],"",""),
                            Item(playerInfo[8][0],"",""),
                            Item(playerInfo[9][0],"",""),
                            Item(playerInfo[10][0],"","")
                            )
                        );*/
                i+=10;
                ui->progress->setValue(i);


            //don't Forget to delete player***
        }

    }
    complete=true;
    }
    return  complete;


}
void MainWindow::loadIntro()
{
 
}

void MainWindow::on_progress_valueChanged(int value)
{

}
