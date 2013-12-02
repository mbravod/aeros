#include "wventilador.h"

wVentilador::wVentilador(QWidget *parent) :
    Base(parent)
{

    loadSvgFile(":/default/resource/ventilador.svg");
    //Instancias de los contadores
    timerAnimado = new QTimer(this);
    timerTransicion = new QTimer(this);
    //Realizamos conexiones
    connect(timerAnimado, SIGNAL(timeout()), this, SLOT(realizarAnimacionV()));
    connect(timerTransicion, SIGNAL(timeout()), this, SLOT(realizarTransicionV()));
    //Inicializamos variables
    initV();
}

wVentilador::~wVentilador()
{
    if(timerAnimado->isActive()){
        timerAnimado->stop();
    }
    if(timerTransicion->isActive()){
        timerTransicion->stop();
    }
    //Liberamos apuntadores
    timerAnimado->~QTimer();
    timerTransicion->~QTimer();
    m_SvGrenderer->~QSvgRenderer();
    //La referencia a la SharedMemory tambien la destruimos? -> No
}

void wVentilador::setActivarV(bool opt)
{
    bolAnimado = opt;
    if(opt)
    {
        timerAnimado->start(250);
    }
    else
    {
        timerAnimado->stop();
    }
    update();
}

void wVentilador::setTransicionV(bool bolT)
{
    bolTransicion = bolT;
    if(bolT){
        timerTransicion->start(250);
    }
    else{
        timerTransicion->stop();
    }
}

void wVentilador::initV()
{
    //Si los contadores estan activos los detenemos
    if(timerAnimado->isActive()){
        timerAnimado->stop();
    }
    if(timerTransicion->isActive()){
        timerTransicion->stop();
    }
    //Inicializamos variables
    cambio = false;
    cambioT = false;
    bolAnimado = false;
    bolTransicion =false;
    contadorAnimado = 0;
    contadorTransicion = 0;
}

void wVentilador::cambioCapaV(int capa)
{
    switch(capa){
        case 0://Capa - negro
                capaActual = "d0";
                initV();
                break;
        case 1://Capa - verde
                capaActual = "d1";
                initV();
                break;
        case 2://Capa - flama grande
                capaActual = "d3";
                break;
        case 3://Capa - flama no grande
                capaActual = "d4";
                break;
    }
    update();
}

void wVentilador::iniciaAnimacionV()
{
    if(bolAnimado){
        return;
    }else{
        setActivarV(true);
    }
}

void wVentilador::iniciaTransicionV()
{
    if(bolTransicion){
        return;
    }else{
        setTransicionV(true);
    }
}

void wVentilador::realizarAnimacionV()
{
    if(cambio){
        cambioCapaV(2);
    }else{
        cambioCapaV(3);
    }
    cambio = !cambio;
}

void wVentilador::realizarTransicionV()
{
    if(contadorTransicion == 0){ //Al detener la animacion primero detenemos la animacion
        setActivarV(false); //Detenemos la animacion
    }else{
        cambioCapaV(1); // Primero posicionamos la capa 2 *(rojo)
        setTransicionV(false);
    }
    contadorTransicion++;
}


void wVentilador::loadSvgFile(QString filePath)
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

void wVentilador::Update()
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

void wVentilador::wPaintEvent()
{
    if(flag){//Se cargo correctament el elemento (SVG)
        QPainter p(this);
        p.setRenderHint(QPainter::Antialiasing);
        p.setBrush(Qt::transparent);
        QRect rect(0,0,width(),height());


        switch(value){//Dependiendo del resultado de la SheedMemory
                case 0:
                        if(bolAnimado){
                            iniciaTransicionV();
                        }else{
                            cambioCapaV(1);//Capa desactivada (d1)
                        }
                        break;
                case 1:
                        iniciaAnimacionV();//Capa de transicion
                        break;
                default:
                        cambioCapaV(0); //Indefinido
       }
       m_SvGrenderer->render(&p,capaActual,rect);
    }
}

