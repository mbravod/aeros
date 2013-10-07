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

void AWAnalogicLevel::Update()
{
    if(m_ShrdMem == NULL)
        return;
    if(!this->parentWidget()->isVisible())  //Verificar metodo para saber si
        return;                // la ventana que contiene el widget es "visible" (para el usuario)
    if(indice< 0){
        indice = m_ShrdMem->getVar(id);
        if(indice < 0){
            return;
        }
    }
    //Logica para definir atributos y comportamiento del widget
    value = m_ShrdMem->getI(indice);
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
