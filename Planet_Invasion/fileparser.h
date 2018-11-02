#ifndef FILEPARSER_H
#define FILEPARSER_H
#include <vector>
#include <string>

using namespace std;
typedef string String;

enum FileState{LOAD,SAVE,DELETE};


class FileParser
{
private:
    string path;//file path name e.g: Story/main.txt
   //output from file goes here, T is a class
    char delimeter;

public:
    //Operation
    vector<vector<string>> loadFile(int);
    vector<string>loadFile();//LoadFile and Turn it to an Object
    void saveFile(const string&);
    void saveAllToFile(const vector<vector<string>>);
    void editFile(const string&,const string&,int);

    //Getters
    string getPath();

    char getDelimeter();
    //Setters
    void setPath(string&);

    void setDelimeter(char&);


    FileParser();
    ~FileParser();
    FileParser(const string&, const char&);
    FileParser(const string&);

};

#endif // FILEPARSER_H
