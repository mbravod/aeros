#include "flama_sectorh.h"

Flama_SectorH::Flama_SectorH(QWidget *parent) :
    Base(parent)
{

    loadSvgFile(":/default/resource/sectorH.svg");
    //Instancias de los contadores
    timerAnimado = new QTimer(this);
    timerTransicion = new QTimer(this);
    //Realizamos conexiones
    connect(timerAnimado, SIGNAL(timeout()), this, SLOT(realizarAnimacionH()));
    connect(timerTransicion, SIGNAL(timeout()), this, SLOT(realizarTransicionH()));
    //Inicializamos variables
    initH();

}

Flama_SectorH::~Flama_SectorH()
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

void Flama_SectorH::setActivarH(bool opt)
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

void Flama_SectorH::setTransicionH(bool bolT)
{
    bolTransicion = bolT;
    if(bolT){
        timerTransicion->start(250);
    }
    else{
        timerTransicion->stop();
    }
}

void Flama_SectorH::initH()
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

void Flama_SectorH::cambioCapaH(int capa)
{
    switch(capa){
        case 0://Capa - negro
                capaActual = "d0";
                initH();
                break;
        case 1://Capa - verde
                capaActual = "d1";
                initH();
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

void Flama_SectorH::iniciaAnimacionH()
{
    if(bolAnimado){
        return;
    }else{
        setActivarH(true);
    }
}

void Flama_SectorH::iniciaTransicionH()
{
    if(bolTransicion){
        return;
    }else{
        setTransicionH(true);
    }
}

void Flama_SectorH::realizarAnimacionH()
{
    if(contadorAnimado == 0){//La primera vez pasamos por la capa de color rojo
        cambioCapaH(2);
        contadorAnimado++;
    }else{//Conmutamos entre las capas destinadas a las flamas (d3 y d4)
        if(cambio)
        {
            cambioCapaH(4);
        }
        else
        {
            cambioCapaH(3);
        }
        cambio = !cambio;
    }
}

void Flama_SectorH::realizarTransicionH()
{
    if(contadorTransicion == 0){ //Al detener la animacion primero detenemos la animacion
        setActivarH(false); //Detenemos la animacion
    }
    if(contadorTransicion == 1){
        setTransicionH(false);
        cambioCapaH(1); //Durante la segunda iteracion presentamos la capa verde (y detenemos la transicion).
    }else{
        cambioCapaH(2); // Primero posicionamos la capa 2 *(rojo)
    }
    contadorTransicion++;
}

void Flama_SectorH::Update()
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

void Flama_SectorH::wPaintEvent()
{
    if(flag){//Se cargo correctament el elemento (SVG)
        QPainter p(this);
        p.setRenderHint(QPainter::Antialiasing);
        p.setBrush(Qt::transparent);
        QRect rect(0,0,width(),height());


        switch(value){//Dependiendo del resultado de la SheedMemory
                case 0:

                        if(bolAnimado){
                            iniciaTransicionH();
                        }else{
                            cambioCapaH(1);//Capa desactivada (d1)
                        }
                        break;
                case 1:
                        iniciaAnimacionH();//Capa de transicion
                        break;
                default:
                        cambioCapaH(0); //Indefinido
       }
       m_SvGrenderer->render(&p,capaActual,rect);
    }

}

void Flama_SectorH::loadSvgFile(QString filePath)
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
