#include "flama_sectorb.h"

Flama_SectorB::Flama_SectorB(QWidget *parent) :
    Base(parent)
{
    loadSvgFile(":/default/resource/sectorB.svg");
    timerAnimado = new QTimer(this);
    timerTransicion = new QTimer(this);
    connect(timerAnimado, SIGNAL(timeout()), this, SLOT(realizarAnimacionB()));
    connect(timerTransicion, SIGNAL(timeout()), this, SLOT(realizarTransicionB()));
    //Inicializamos
    initB();
}

Flama_SectorB::~Flama_SectorB()
{
    //Si los contadores estan activos los detenemos primero
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
}

void Flama_SectorB::setActivarB(bool opt)
{
    bolAnimado = opt;
    if(opt)
    {   //Tiempo entre la presentacion de una capa y otra (intercambio)
        timerAnimado->start(250);
    }
    else
    {
        timerAnimado->stop();
    }
    update();
}

void Flama_SectorB::setTransicionB(bool bolT)
{
    bolTransicion = bolT;
    if(bolT){//Tiempo para la transicion
        timerTransicion->start(250);
    }
    else{
        timerTransicion->stop();
    }
}

void Flama_SectorB::initB()
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

void Flama_SectorB::cambioCapaB(int capa)
{
    switch(capa){
        case 0://Capa - negro
                capaActual = "d0";
                initB();
                break;
        case 1://Capa - verde
                capaActual = "d1";
                initB();
                break;

        case 2://Capa - rojo
                capaActual = "d2";
                break;
        case 3://Capa - flama grande
                capaActual = "d3";
                break;
        case 4://Capa - flama no grande
                capaActual = "d4";
                break;
    }
    update();
}

void Flama_SectorB::iniciaAnimacionB()
{
    if(bolAnimado){
        return;
    }else{
        setActivarB(true);
    }
}

void Flama_SectorB::iniciaTransicionB()
{
    if(bolTransicion){
        return;
    }else{
        setTransicionB(true);
    }
}

void Flama_SectorB::realizarAnimacionB()
{
    if(contadorAnimado == 0){//La primera vez pasamos por la capa de color rojo
        cambioCapaB(2);
        contadorAnimado++;
    }else{//Conmutamos entre las capas destinadas a las flamas (d3 y d4)
        if(cambio)
        {
            cambioCapaB(4);
        }
        else
        {
            cambioCapaB(3);
        }
        cambio = !cambio;
    }
}

void Flama_SectorB::realizarTransicionB()
{
   if(contadorTransicion == 0){
    setActivarB(false); //Detenemos la animacion
   }
   cambioCapaB(2); // Primero posicionamos la capa 2 *(rojo)
   bolAnimado = true; //No esta animado pero debemos esperar una transicion
   if(contadorTransicion == 1){ //Presentamos la capa d2 al menos medio segundo
        setTransicionB(false);//Detenemos contador
        bolAnimado = false; //Termina la transicion
        bolTransicion = false;
   }

   contadorTransicion++;
}

void Flama_SectorB::Update()
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

void Flama_SectorB::wPaintEvent()
{
    if(flag){//Se cargo correctament el elemento (SVG)
        QPainter p(this);
        p.setRenderHint(QPainter::Antialiasing);
        p.setBrush(Qt::transparent);
        QRect rect(0,0,width(),height());


        switch(value){//Dependiendo del resultado de la SheedMemory
                case 0:

                        if(bolAnimado){
                            iniciaTransicionB();
                        }else{
                            cambioCapaB(1);//Capa desactivada (d1)
                        }
                        break;
                case 1:
                        iniciaAnimacionB();//Capa de transicion
                        break;
                default:
                        cambioCapaB(0); //Indefinido
       }
       m_SvGrenderer->render(&p,capaActual,rect);
    }

}

void Flama_SectorB::loadSvgFile(QString filePath)
{
    m_SvGrenderer = new QSvgRenderer(this);
    //Validamos que el SVG sea cargado de manera exitosa
    if(!m_SvGrenderer->load(filePath)){
        //qDebug() << "No se cargo:" << filePath;
        flag = false;
    }else{
        //qDebug() << "Listo:" << filePath;
        flag = true;
    }
    update();
}
