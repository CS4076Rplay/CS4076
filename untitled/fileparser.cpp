#include "fileparser.h"
#include <fstream>
#include<iostream>
#include <stdio.h>
//Operation

vector<string> split(string& line, char& delimetter)
{
     vector<string> list = {};
        string str;
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
    vector<string> result;
    string s;
    ifstream reader(path);
    if(!reader)
    {
         cout<<"Problem opening file, maybe incorrect path \""<<path<<"\""<<endl;
    }
    else{
        while(getline(reader,s))
        {
            result.push_back(s);
        }
        reader.close();
    }
    return result;
}
vector<vector<string>>FileParser:: loadFile(int columns)
{
    vector<vector<string>>result;
    for(int i=0;i<columns;i++)
        result.push_back(vector<string>());
    vector<string>temp;
    ifstream reader(path);
    if(!reader)
    {
        cout<<"Problem opening file, maybe incorrect path \""<<path<<"\""<<endl;
    }
    else{
        string s;
        while(getline(reader,s))
        {
            temp=split(s,delimeter);//returs vector with columns
            /**e.g: in text.txt
            we have:
               hello,i,am,adam
               what,is,our,name
            at index 0 in temp we have hello, 2 is i...*/
            if((int)temp.size()>=columns){
                //if we didnt create enough columns we add the extra ones needed in order to avoid a Segmentation fault
                int s=(int)temp.size()-columns;
                for(int j=0;j<s;j++)
                {
                    result.push_back(vector<string>());
                }
            }
            for(unsigned int i=0;i<result.size();i++){
                //add all the values we parsed into multidimensional list
            result[i].push_back(temp[i]);

            }
        }reader.close();
    }
    return result;

}//LoadFile and Turn it to an Object
void FileParser::saveFile(const string& str)
{
    ofstream writer(path,ios::app);
    if(!writer)
    {
        cout<<"Problem opening file, maybe incorrect path \""<<path<<"\""<<endl;
    }else
    {
        writer<<str<<endl;
        writer.close();
    }


}
void FileParser::saveAllToFile(vector<vector<string>> items)
{


    ofstream writer(path);
    if(!writer)
    {
          cout<<"Problem oppeing file, maybe in correct path \""<<path<<"\""<<endl;
    }
    else{
        for(vector<string> vec:items)
        { unsigned int i=0;
            for(string s: vec)
            {
                if(i>=vec.size())
                    writer<<s;
                else {writer<<s<<delimeter;i++;}
            }writer<<endl;
        }
        writer.close();
    }
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
        cout<<"Treid to grab an element that never existed"<<endl;
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

