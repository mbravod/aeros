#include "qlabelclick.h"

QLabelClick::QLabelClick(QWidget * parent)
    :QLabel(parent)
{

}

void QLabelClick::mousePressEvent(QMouseEvent * event)
{
    emit clicked(this->objectName());
}
