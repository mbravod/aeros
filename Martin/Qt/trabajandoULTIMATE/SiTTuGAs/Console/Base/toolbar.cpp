#include "toolbar.h"
#include <QPainter>
#include <QPolygon>
const qreal ToolBar::scaledSize = 100;//%
ToolBar::ToolBar(QWidget *parent):QToolBar(parent)
{
    m_Color = QColor(102,102,102);
}
ToolBar::ToolBar():QToolBar()
{
    m_Color = QColor(102,102,102);
}

void ToolBar::resizeEvent(QResizeEvent *event) {
    update();
}

void ToolBar::setColor(const QColor &c){
    m_Color = c;
    update();
}

void ToolBar::paintEvent(QPaintEvent *event) {
    QLinearGradient gradient;
    QPainter painter(this);
    painter.setPen(Qt::NoPen);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.scale(width()/scaledSize, height()/scaledSize);
//Rectangulo Base
    QRect rect(1,1,98,98);
    //painter.setBrush(QBrush(QColor(0,170,255)));
    painter.setBrush(QBrush(m_Color));
    painter.drawRoundedRect(rect, 25/(width()/scaledSize), 25/(height()/scaledSize), Qt::RelativeSize);
//Gradientes
   QRect grect(1,1,98,60);
   gradient = QLinearGradient(0,0,0,80);
   gradient.setColorAt(0,QColor(255,255,255,150));
   gradient.setColorAt(1,QColor(255,255,255,0));
   painter.setBrush(QBrush(gradient));
   painter.drawRoundedRect(grect, 25/(width()/scaledSize), 25/(height()/scaledSize), Qt::RelativeSize);
}

ToolBar::~ToolBar()
{

}
