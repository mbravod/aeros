#include "awmultiobject.h"
#include <QPainter>

AWMultiObject::AWMultiObject(QWidget *parent) :
    AWMultEstateWidget(parent)
{
    flag=true;
    init();
}

void AWMultiObject::init(){

    m_SVGrenderer= NULL;

    this->m_OffColor = Green;
    this->m_OnColor = Red;
    this->m_eType = VH2;

    eTypeList<<"vh2"<<"cirled"<<"valcuad2"<<"valcuad3"<<"valsimp3"<<"valsimp4"<<"valele2"<<"agitador"<<"inter"<<"interm"<<"bombata"<<"bombatb"<<"bombatc"<<"bombatd"<<"bombate"<<"regta"<<"spring"<<"cirline"<<"telem"<<"square"<<"aspta"<<"asptb"<<"flame";
    eColorList<<"Red"<<"Green"<<"Blue"<<"White"<<"Grey"<<"Yellow"<<"Purple"<<"Brown"<<"Orange"<<"Black";

    //flag=loadSvgFile(":/default/resources/VH2.svg");//Cambiar Ruta en base a objeto
    flag=loadSvgFile(QString(":/default/resources/%0.svg").arg(eTypeList[m_eType]));
}

#define OFFSET 5

void AWMultiObject::AWPaintEvent(){

    QPainter p(this);

    int side = qMin(width(), height());
    p.setRenderHint(QPainter::Antialiasing);
    p.translate(width() / 2, height() / 2);
    p.rotate(m_orientation);

    if(!flag){
        QPen pen = p.pen();
        pen.setColor(QColor(254,0,0));
        pen.setWidthF(6.0);
        p.setPen(pen);
        p.setBrush(Qt::black);
        p.drawRoundRect((-side/2)+3,(-side/2)+3,side-6,side-6,7,7);
    }

    QString s;
    s=eTypeList[m_eType];

    switch(value){
        case 0:
            s.append(eColorList[m_OffColor]); //Color verde
            break;
        case 1:
            s.append(eColorList[m_OnColor]); //Color rojo
            break;
        default:
            s.append("Black");//No se sabe "Negro"
            break;
    }

    float a = side-(2*OFFSET);
    QRectF r = m_SVGrenderer->boundsOnElement(s);
    float sv = r.width()/r.height();
    float b = a/sv;

    QRectF rect(-a/2,-b/2,a,b);
    m_SVGrenderer->render(&p,s,rect);
}

void AWMultiObject::setElementType(ETypes t){
    this->m_eType =t;
    flag=loadSvgFile(QString(":/default/resources/%1.svg").arg(eTypeList[m_eType]));
    update();
}

void AWMultiObject::setOnColor(EColors c){
    this->m_OnColor=c;
    update();
}

void AWMultiObject::setOffColor(EColors c){
    this->m_OffColor=c;
    update();
}

void AWMultiObject::Update()
{
    if(m_ShrdMem == NULL)
        return;
    if(!isUpdateable())  //Verificar metodo para saber si
        return;                // la ventana que contiene el widget es "visible" (para el usuario)
    if(indice < 0){
        indice = m_ShrdMem->getVar(id);
        if(indice < 0){
            return;
        }
    }
    //Logica para definir atributos y comportamiento del widget
    value = m_ShrdMem->getI(indice);
    update();


}

bool AWMultiObject::loadSvgFile(QString filePath){
    bool i;
    if(m_SVGrenderer)
        delete m_SVGrenderer;
    m_SVGrenderer = new QSvgRenderer(this);
    i=m_SVGrenderer->load(filePath);
    if(!i)
        qDebug("%s::loadSvgFile %s no cargado",strID(),qPrintable(filePath));
    else
        qDebug("%s::loadSvgFile %s cargado",strID(),qPrintable(filePath));
    update();
    return i;
}
