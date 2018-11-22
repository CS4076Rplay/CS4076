#include "credits.h"
#include "fileparser.h"
#include "ui_credits.h"

Credits::Credits(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Credits)
{
    ui->setupUi(this);
    setWindowTitle("Credits");
    FileParser *fileparser=new FileParser(":/Story/credits.txt");
    vector<string> credits=fileparser->loadFile();
    string cr="";
    for(string s:credits)
        cr+=s+"\n";
    ui->label->setText(QString::fromStdString(cr));
}

Credits::~Credits()
{
    delete ui;
}
