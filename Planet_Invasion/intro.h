#ifndef INTRO_H
#define INTRO_H
#include <iostream>
#include <QDialog>

namespace Ui {
class Intro;
}

class Intro : public QDialog
{
    friend class CharacterCreator;
    Q_OBJECT

public:
    explicit Intro(QWidget *parent = nullptr);
    ~Intro();
    void setIntro(const std::string&);

private:
    Ui::Intro *ui;
    std::string intro;
    std::string name;
    std::string race;
};

#endif // INTRO_H
