#ifndef CHARACTERCREATOR_H
#define CHARACTERCREATOR_H

#include <QDialog>

namespace Ui {
class CharacterCreator;
}

class CharacterCreator : public QDialog
{
    Q_OBJECT

public:
    explicit CharacterCreator(QWidget *parent = nullptr);
    ~CharacterCreator();

private:
    Ui::CharacterCreator *ui;
};

#endif // CHARACTERCREATOR_H
