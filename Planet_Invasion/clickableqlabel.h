#ifndef CLICKABLEQLABEL_H
#define CLICKABLEQLABEL_H
#include <QLabel>
#include <QWidget>
#include <Qt>
#include "item.h"
class ClickableQLabel: public QLabel {
    Q_OBJECT

public:
    explicit ClickableQLabel(QWidget* parent = Q_NULLPTR, Qt::WindowFlags f = Qt::WindowFlags());
    ~ClickableQLabel();

signals:
    void clicked();

    void clicked(Item&);

protected:
    void mousePressEvent(QMouseEvent* event);
    template<typename T>
    void mousePressEvent(QMouseEvent* event, T&);

};



#endif // CLICKABLEQLABEL_H
