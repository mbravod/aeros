#include "flama_sectora.h"

Flama_SectorA::Flama_SectorA(QWidget *parent) :
    Base(parent)
{   //Inicializacion desde el constructor de la clase base
    loadSvgFile(":/default/resource/sectorA.svg");
}

Flama_SectorA::~Flama_SectorA()
{

    m_SvGrenderer->~QSvgRenderer();
    //La referencia a la SharedMemory tambien la destruimos? -> No
}



void Flama_SectorA::cambioCapaA(int capa){
    switch(capa){
        case 0://Capa - negro
                capaActual = "d0";
                break;
        case 1://Capa - verde
                capaActual = "d1";
                break;

        case 2://Capa - rojo
                capaActual = "d2";
                break;
    }
}


void Flama_SectorA::Update()
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
    //Por consistencia UTILIZAMOS TIPO
    update(); //Llamamos al metodo wPaintEvent
}

void Flama_SectorA::wPaintEvent()
{
    if(flag){//Se cargo correctament el elemento (SVG)
        QPainter p(this);
        p.setRenderHint(QPainter::Antialiasing);
        p.setBrush(Qt::transparent);
        QRect rect(0,0,width(),height());

        switch(value){//Dependiendo del resultado de la SheedMemory
                case 0:
                        cambioCapaA(1);//Capa desactivada (d1)
                        break;
                case 1:
                        cambioCapaA(2);//Capa desactivada (d1)
                        break;
                default:
                        cambioCapaA(0); //Indefinido
        }
        m_SvGrenderer->render(&p,capaActual,rect);

    }
}

void Flama_SectorA::loadSvgFile(QString filePath)
{

    m_SvGrenderer = new QSvgRenderer(this);
    //Validamos que el SVG sea cargado de manera exitosa

    if(!m_SvGrenderer->load(filePath)){
        qDebug() << "No se cargo:" << filePath;
        flag = false;
    }else{
        qDebug() << "Listo:" << filePath;
        flag = true;
    }
    update();
}
