#include "clickableqlabel.h"

ClickableQLabel::ClickableQLabel(QWidget* parent, Qt::WindowFlags f)
 : QLabel(parent) {



}
ClickableQLabel::~ClickableQLabel() {}
void ClickableQLabel::mousePressEvent(QMouseEvent* event) {
    emit clicked();

}
template<typename T>
void ClickableQLabel::mousePressEvent(QMouseEvent* event, T& item) {
    emit clicked(item);

}
