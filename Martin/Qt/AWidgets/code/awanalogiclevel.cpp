#include "awanalogiclevel.h"
#include <QPainter>

AWAnalogicLevel::AWAnalogicLevel(QWidget *parent) :
    AWAnalogicWidget(parent)
{
    init();
}

void AWAnalogicLevel::init(){
    this->m_valColor = QColor(255,0,0);
}

void AWAnalogicLevel::setValColor(QColor c){
    this->m_valColor = c;
}

#define OFFSET 2
void AWAnalogicLevel::AWPaintEvent(){
    QPainter p(this);

    p.setRenderHint(QPainter::Antialiasing);
    //p.translate(width() / 2, height() / 2);
    //p.rotate(m_orientation);

    QPen pen = p.pen();
    pen.setColor(Qt::black);
    pen.setWidthF(1.0);
    p.setPen(pen);
    p.save();
    p.setBrush(m_valColor);
    int y=(this->height()*m_value)/100;
    this->setStrID(QString::number(y));
    QRect rect(OFFSET,this->height()-y,this->width()-2*OFFSET,y);
    p.drawRect(rect);
    p.restore();

    pen.setColor(Qt::gray);
    pen.setWidthF(2.0);
    p.setPen(pen);
    p.drawRect(1,1,this->width()-2,this->height()-2);

}
