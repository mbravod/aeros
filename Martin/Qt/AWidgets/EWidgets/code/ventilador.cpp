#include "ventilador.h"


Ventilador::Ventilador(QWidget *parent) :
    QWidget(parent)
{   //Inicializamos y cargamos la imagen
    inicio = false;
    m_SvGrenderer = new QSvgRenderer(this);
    loadSvgFile(":/default/resources/Cambio.svg");
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(animacion()));
    cambio = false;
}

void Ventilador::setActivar(bool opt)
{
    init(opt);
}



void Ventilador::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    int side = qMin(width(), height());
    p.setRenderHint(QPainter::Antialiasing);
    p.translate(width() / 2, height() / 2);
    int w = (side-2*X_OFFSET);
    int h = side-2*Y_OFFSET;
    QRect rect((-side/2)+X_OFFSET,(-side/2)+Y_OFFSET,w,h);
    if(inicio)
        m_SvGrenderer->render(&p,QString("d0"),rect);
    else
        m_SvGrenderer->render(&p,QString("d1"),rect);
}

void Ventilador::loadSvgFile(QString filePath)
{
    bool i = m_SvGrenderer->load(filePath);
    if(!i)
        qDebug() << "No se cargo el svg";
    else
        qDebug() << "Listo svg";
}



void Ventilador::init(bool opt)
{
    // opt indica si está activo o no el timer

    if(opt)
    {
        timer->start(250);
    }
    else
    {
        timer->stop();
    }
    update();
}

void Ventilador::animacion()
{
    if(cambio){
        inicio = false;
        update();
    }
    else{
        inicio = true;
        update();
    }
    cambio = !cambio;
}

Ventilador::~Ventilador(){
    timer->~QTimer();
    m_SvGrenderer->~QSvgRenderer();
}

