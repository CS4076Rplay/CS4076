#include "fileparser.h"
#include <fstream>
#include<iostream>
#include <stdio.h>
#include<QString>
#include<QDebug>
#include<QFile>

//Operation
std::vector<std::string> FileParser::split(const std::string& line, const char& delimetter)
{
     std::vector<std::string> list = {};
        std::string str;
        unsigned int i;

        for ( i = 0; i < line.size(); i++)
        {
            if (line[i] == delimetter)
            {

                list.push_back(str);
                str = "";
            }

            else
            {
                str += line[i];

            } //cout<<"AT: "<<i<<" : "<<str<<endl;
        }
        list.push_back(str);
        str = "";

        return list;

}
vector<string> FileParser::loadFile()
{
    QString filename=QString::fromStdString(path);
    vector<string> result;
    string s;
    QFile mFile(filename);
    if(mFile.open(QFile::ReadOnly|QFile::Text))
    {
      //  qDebug()<<"could not find path: "<<filename<<endl;

    QTextStream in(&mFile);
    QString line;
        do
        {
            line = in.readLine();

            s=line.toStdString();
            cout<<"++"<<s<<endl;
            if(s!="")
            result.push_back(s);
        }
        while(!line.isNull());
        mFile.close();
    }
    return result;
}
string FileParser::loadFile(const bool& readAll)
{
    QString filename=QString::fromStdString(path);
    vector<string> result;
    string s;
    QFile mFile(filename);
    if(mFile.open(QFile::ReadOnly|QFile::Text))
    {
      //  qDebug()<<"could not find path: "<<filename<<endl;
    }
    QTextStream in(&mFile);
    QString line= in.readAll();

            s=line.toStdString();

        mFile.close();

    return s;
}

vector<vector<string>>FileParser:: loadFile(int columns)
{
    cout<<columns<<endl;
      QString filename=QString::fromStdString(path);

      //vector<vector<QString>>result;
  vector<vector<string>>result;
    for(int i=0;i<columns;i++)
        result.push_back(vector<string>());
    vector<string>temp;
    QFile mFile(filename); cout<<path<<endl;
    if(!mFile.open(QFile::ReadOnly|QFile::Text))
    {
       // qDebug()<<"could not find path: "<<filename<<endl;
    }
    QTextStream in(&mFile);
    String s;
    while(!mFile.atEnd())
    {
        QString line=in.readLine();
        s=line.toStdString();
        temp=split(s,delimeter);//returs vector with columns
        /**e.g: in text.txt
        we have:
           hello,i,am,adam
           what,is,our,name
        at index 0 in temp we have hello, 1 is i...*/
        if((int)temp.size()>=columns){
            //if we didnt create enough columns we add the extra ones needed in order to avoid a Segmentation fault
            int s=(int)temp.size()-columns;
            for(int j=0;j<s;j++)
            {
                result.push_back(vector<string>());
            }
        }
        cout<<result.size()<<endl;
        for(string s:temp)
        cout<<s<<endl;
        for(unsigned int i=0;i<result.size();i++){
            //add all the values we parsed into multidimensional list
        result[i].push_back(temp[i]);
            for(string s:result[0])
            cout<<s<<endl;

    }

  }
       mFile.close();

    return result;

}//LoadFile and Turn it to an Object
void FileParser::saveFile(const string& str)
{
    //"E:/qProjects/AlienInvasion/CS4076/Planet_Invasion/player.txt"
    QString filename=QString::fromStdString(path);
    QFile mFile(filename);
    if(!mFile.open(QFile::WriteOnly|QFile::Text))
    {
       qDebug()<<"Could not find path: "<<filename<<endl;

    }
    QTextStream writer(&mFile);
   /* ofstream writer(path,ios::app);
    if(!writer)
    {
        cout<<"Problem opening file, maybe incorrect path \""<<path<<"\""<<endl;
    }else
    {
        writer<<str<<endl;
        writer.close();
    }
    */
    QString qstr=QString::fromStdString(str);
    writer<<qstr<<endl;
    mFile.flush();
    mFile.close();


}
void FileParser::saveAllToFile(vector<vector<string>> items)
{

    QString filename=QString::fromStdString(path);
    QFile mFile(filename);
    if(!mFile.open(QFile::WriteOnly|QFile::Text))
    {
        //qDebug()<<"Could not find path: "<<filename<<endl;

    }
    QTextStream writer(&mFile);

    /*ofstream writer(path);
    if(!writer)
    {
          cout<<"Problem oppeing file, maybe in correct path \""<<path<<"\""<<endl;
    }
    else{*/
        for(vector<string> vec:items)
        { unsigned int i=0;
            for(string s: vec)
            {
                QString qs=QString::fromStdString(s);
                if(i>=vec.size())
                    writer<<qs;
                else {writer<<qs<<delimeter;i++;}
            }writer<<endl;
        }
        mFile.flush();
        mFile.close();
   // }
}
FileParser::FileParser(const string& path, const char& delimeter)
{
    this -> path=path;
    this -> delimeter=delimeter;

}
FileParser::FileParser(const string& path)
{
    this -> path=path;
    this -> delimeter=' ';

}
FileParser::FileParser()
{
    this->path="";
    this->delimeter=' ';
}
FileParser::~FileParser()
{

}
//Getters
string FileParser::getPath(){
    return path;
}

char FileParser::getDelimeter(){
    return delimeter;
}
//Setters
void FileParser::setPath(string& path)
{
    this->path=path;
}

void FileParser::setDelimeter(char& delimeter){
    this->delimeter=delimeter;
}
void FileParser::editFile(const string&oldval, const string&newval,int width)
{
    //get Current State
    //modify it
    //save new State
    vector<vector<string>> items=loadFile(width);//loaded
    //find old value index
    unsigned int i=0,j=0;
    for(vector<string> vec:items)
    {

        for(string s:vec)
        {
            if(s==oldval)
                break;
            else  j++;
        }i++;
    }

    //index found, e.g in the example on line 53-56
    //say we want to replace "adam" to "steve" we need to get the index items[3][0];

    //exception handling [Index out of bounds Exception]
    if(i>items.size())
        cout<<"Tried to grab an element that never existed"<<endl;
    else if(j>items[0].size())
        cout<<"Treid to grab an element that never existed"<<endl;
    else{
        //position found
        items[i].at(j)=newval;
        //modified
        saveAllToFile(items);
        //saved..
    }


}

