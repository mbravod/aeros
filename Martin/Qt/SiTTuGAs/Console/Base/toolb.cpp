#include <QPainter>
#include "toolb.h"

const qreal ToolB::scaledSize = 100; /* Visual Studio static const mess */

ToolB::ToolB(QWidget *parent) :QToolButton(parent)
{
    state=0;
}


ToolB::ToolB()
{
    state=0;
}

ToolB::~ToolB()
{

}

void ToolB::setIcon(const QString& fileName)
{
    mypix.detach();
    mypix.load(fileName);
    repaint();
}

void ToolB::resizeEvent(QResizeEvent *event) {
    update();
}

void ToolB::paintEvent(QPaintEvent *event) {


    qreal realSize = qMin(width(), height());
    QPainter painter(this);
    painter.setPen(Qt::NoPen);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.scale(realSize/scaledSize, realSize/scaledSize);


    //dibuja base
    QRect brect(0,0,100,100);
    painter.setBrush(QBrush(QColor(255,255,255,0)));
    painter.drawRoundedRect(brect, 10/(width()/scaledSize), 10/(height()/scaledSize), Qt::RelativeSize);



    //dibuja fondo
    if (state){
        QRect srect(0,0,100,100);
        if(this->isDown()){
            painter.setBrush(QBrush(QColor(255,255,255,100)));
        }
        else {
            painter.setBrush(QBrush(QColor(255,255,255,150)));
        }
        painter.drawRoundedRect(srect, 15/(width()/scaledSize), 15/(height()/scaledSize), Qt::RelativeSize);
    }
//dibuja png
    painter.drawPixmap(10,10,80,80, mypix);
}


void ToolB::enterEvent ( QEvent * e )
{
    state=1;
}

void ToolB::leaveEvent ( QEvent * e )
{
    state=0;
}
