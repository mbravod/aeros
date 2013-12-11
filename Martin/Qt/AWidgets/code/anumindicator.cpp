#include "anumindicator.h"

#include <QPainter>
#include <QPen>
#include <QtSvg>

ANumIndicator::ANumIndicator(QWidget *parent) :
    AWMultEstateWidget(parent)
{
    flag=true;
    init();
}

void ANumIndicator::Update()
{
    if(m_ShrdMem == NULL)
        return;
    if(!isUpdateable())  //Verificar metodo para saber si
        return;                // la ventana que contiene el widget es "visible" (para el usuario)
    if(indice< 0){
        indice = m_ShrdMem->getVar(id);
        if(indice < 0){
            return;
        }
    }
    //Logica para definir atributos y comportamiento del widget
    value = m_ShrdMem->getI(indice);


    update();

}

void ANumIndicator::init(){
    m_SVGrenderer= NULL;
    flag=loadSvgFile(":/default/resources/train_digits.svg");
    //flag=loadSvgFile(":/default/resources/leds.svg");
    //flag=loadSvgFile(":/default/resources/VH2.svg");
}

#define X_OFFSET 10
#define Y_OFFSET 10

void ANumIndicator::AWPaintEvent(){
    QPainter p(this);
    //p.save();

    int side = qMin(width(), height());
    p.setRenderHint(QPainter::Antialiasing);
    p.translate(width() / 2, height() / 2);
    p.rotate(m_orientation);

    QPen pen = p.pen();
    if(flag)
        pen.setColor(QColor(32,32,32));
    else
        pen.setColor(QColor(254,0,0));

    pen.setWidthF(6.0);
    p.setPen(pen);
    p.setBrush(Qt::black);
    p.drawRoundRect((-side/2)+3,(-side/2)+3,side-6,side-6,7,7);

    int w = (side-2*X_OFFSET);
    int h = side-2*Y_OFFSET;

    QRect rect((-side/2)+X_OFFSET,(-side/2)+Y_OFFSET,w,h);
    m_SVGrenderer->render(&p,QString("d%1").arg(value),rect);

}

bool ANumIndicator::loadSvgFile(QString filePath){
    bool i;
    if(m_SVGrenderer)
        delete m_SVGrenderer;
    m_SVGrenderer = new QSvgRenderer(this);
    i=m_SVGrenderer->load(filePath);
    /*if(!i)
        qDebug("%s::loadSvgFile %s no cargado",strID(),qPrintable(filePath));
    else
        qDebug("%s::loadSvgFile %s cargado",strID(),qPrintable(filePath));*/
    update();
    return i;
}
