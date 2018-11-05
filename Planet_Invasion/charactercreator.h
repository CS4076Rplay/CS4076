#ifndef CHARACTERCREATOR_H
#define CHARACTERCREATOR_H

#include <QDialog>
#include <string>
#include "player.h"
namespace Ui {
class CharacterCreator;
}

class CharacterCreator : public QDialog
{
    friend class MainWindow;
    Q_OBJECT

public:
    explicit CharacterCreator(QWidget *parent = nullptr);
    ~CharacterCreator();

private slots:
    void on_raceSelector_currentTextChanged(const QString &arg1);

    void on_strSlide_valueChanged(int value);

    void on_pushButton_clicked();


private:
    Ui::CharacterCreator *ui;
    std::string intro;


};

#endif // CHARACTERCREATOR_H
