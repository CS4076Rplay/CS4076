#ifndef CLICKABLEQLABEL_H
#define CLICKABLEQLABEL_H
#include <QLabel>
#include <QWidget>
#include <Qt>
#include "weapon.h"
#include "hp.h"
class ClickableQLabel: public QLabel {
    Q_OBJECT

public:
    explicit ClickableQLabel(QWidget* parent = Q_NULLPTR, Qt::WindowFlags f = Qt::WindowFlags());
    ~ClickableQLabel();
    Weapon* item;
    Hp* potion;
    void mousePressEvent(int);

signals:
    void clicked();
    void clicked(Hp*);
    void clicked(Weapon*);

protected:
    void mousePressEvent(QMouseEvent* event);

    template<typename T>
    void mousePressEvent(QMouseEvent* event, T&);

};



#endif // CLICKABLEQLABEL_H
