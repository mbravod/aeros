#include "flama.h"
#include <QPainter>
#include <QPen>
#include <QtSvg/QtSvg>


Flama::Flama(QWidget *parent) :
    base(parent)
{
    flag = true;
    init();
}

void Flama::init(){
    m_SvGrenderer = NULL;
    flag = loadSvgFile(":/default/resources/imagen1");
}

void Flama::EWPaintEvent(){

    QPainter p(this);
    int side = qMin(width(), height());
    p.setRenderHint(QPainter::Antialiasing);
    p.translate(width() / 2, height() / 2);

    QPen pen = p.pen();
    if(flag)
        pen.setColor(QColor(254,254,254));
    else
        pen.setColor(QColor(254,254,254));

    pen.setWidthF(6.0);
    p.setPen(pen);

    int w = (side-2*X_OFFSET);
    int h = side-2*Y_OFFSET;

    QRect rect((-side/2)+X_OFFSET,(-side/2)+Y_OFFSET,w,h);
    m_SvGrenderer->render(&p,QString("d%1").arg(this->Value()),rect);

}

bool Flama::loadSvgFile(QString filePath)
{
    bool i = false;
    /* ESTO CAUSA ERRORES
    if(m_SvGrenderer)
        delete m_SvGrenderer;
    */
    m_SvGrenderer = new QSvgRenderer(this);
    i=m_SvGrenderer->load(filePath);
    if(!i)
        qDebug() << "No se cargo el svg";
    else
        qDebug() << "Listo svg";
    update();
    return i;
}
