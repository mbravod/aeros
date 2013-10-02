#include "ainstrumentindicator.h"

#include <QPainter>
#include <QPen>
#include <math.h>

AInstrumentIndicator::AInstrumentIndicator(QWidget *parent) :
    AWMultEstateWidget(parent)
{
    init();
}

void AInstrumentIndicator::init(){
    this->resize(70,70);
    this->m_lineAngle=0;
    this->UpLabelTxT="XXX";
    this->DownLabelTxT="YYY";
    m_colorList.append(Qt::red);
    m_colorList.append(Qt::green);
    m_colorList.append(Qt::white);
    m_colorList.append(Qt::gray);
    m_colorList.append(Qt::blue);
    m_colorList.append(Qt::cyan);
    m_colorList.append(Qt::black);
}
#define txtHeight 15
#define outSpace 20
#define conv 3.1416/180

void AInstrumentIndicator::AWPaintEvent(){

    QPainter p(this);
    p.setRenderHint(QPainter::Antialiasing,true);

    int side = this->height();
    p.scale(side/100.0,side/100.0);

    double width = 100.0 * this->width()/this->height(), height = 100.0;

    QPen pen = p.pen();

    pen.setColor(QColor(0,0,0));
    pen.setWidthF(1.0);
    p.setPen(pen);

    if(m_value>=0 && m_value<=6)
        p.setBrush(m_colorList.at(m_value));
    else
        p.setBrush(m_colorList.at(6));


    p.save();

    p.translate(width/ 2, height / 2);
    p.rotate(m_orientation);

    if(width>height)
        p.drawLine(0,0,width*cos(m_lineAngle*conv),width*sin(m_lineAngle*conv));
    else
        p.drawLine(0,0,height*cos(m_lineAngle*conv),height*sin(m_lineAngle*conv));

    p.restore();

    p.drawEllipse(outSpace,outSpace,width-2*outSpace,height-2*outSpace);

    //QFont sansFont("Helvetica [Cronyx]",txtHeight-2);
    QFont serifFont("Arial", txtHeight-2);

    p.setFont(serifFont);
    p.drawText(QRect(0,(height/2)-txtHeight-3,width,txtHeight),Qt::AlignCenter,UpLabelTxT);
    p.drawText(QRect(0,(height/2),width+2,txtHeight),Qt::AlignCenter,DownLabelTxT);


}

void AInstrumentIndicator::SetUpLabel(QString s){
    this->UpLabelTxT=s;
    update();
}
void AInstrumentIndicator::SetDownLabel(QString s){
    this->DownLabelTxT=s;
    update();
}

void AInstrumentIndicator::SetLineAngle(double i){
    this->m_lineAngle=i;
    update();
}

/*void AInstrumentIndicator::SetColorState(QColor c){
    this->m_colorState=c;
    update();
}*/
