#ifndef CHARACTERCREATOR_H
#define CHARACTERCREATOR_H

#include <QDialog>
#include <string>
namespace Ui {
class CharacterCreator;
}

class CharacterCreator : public QDialog
{
    Q_OBJECT

public:
    explicit CharacterCreator(QWidget *parent = nullptr);
    ~CharacterCreator();

private slots:
    void on_raceSelector_currentTextChanged(const QString &arg1);

    void on_strSlide_valueChanged(int value);

private:
    Ui::CharacterCreator *ui;
};

#endif // CHARACTERCREATOR_H
