#include "flama_sectorf.h"

Flama_SectorF::Flama_SectorF(QWidget *parent) :
    Base(parent)
{

    loadSvgFile(":/default/resource/sectorF.svg");
    //Instancias de los contadores
    timerAnimado = new QTimer(this);
    timerTransicion = new QTimer(this);
    //Realizamos conexiones
    connect(timerAnimado, SIGNAL(timeout()), this, SLOT(realizarAnimacionF()));
    connect(timerTransicion, SIGNAL(timeout()), this, SLOT(realizarTransicionF()));
    //Inicializamos variables
    initF();

}

Flama_SectorF::~Flama_SectorF()
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

void Flama_SectorF::setActivarF(bool opt)
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

void Flama_SectorF::setTransicionF(bool bolT)
{
    bolTransicion = bolT;
    if(bolT){
        timerTransicion->start(250);
    }
    else{
        timerTransicion->stop();
    }
}

void Flama_SectorF::initF()
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

void Flama_SectorF::cambioCapaF(int capa)
{
    switch(capa){
        case 0://Capa - negro
                capaActual = "d0";
                initF();
                break;
        case 1://Capa - verde
                capaActual = "d1";
                initF();
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

void Flama_SectorF::iniciaAnimacionF()
{
    if(bolAnimado){
        return;
    }else{
        setActivarF(true);
    }
}

void Flama_SectorF::iniciaTransicionF()
{
    if(bolTransicion){
        return;
    }else{
        setTransicionF(true);
    }
}

void Flama_SectorF::realizarAnimacionF()
{
    if(contadorAnimado == 0){//La primera vez pasamos por la capa de color rojo
        cambioCapaF(2);
        contadorAnimado++;
    }else{//Conmutamos entre las capas destinadas a las flamas (d3 y d4)
        if(cambio)
        {
            cambioCapaF(4);
        }
        else
        {
            cambioCapaF(3);
        }
        cambio = !cambio;
    }
}

void Flama_SectorF::realizarTransicionF()
{
    if(contadorTransicion == 0){ //Al detener la animacion primero detenemos la animacion
        setActivarF(false); //Detenemos la animacion
    }
    if(contadorTransicion == 1){
        setTransicionF(false);
        cambioCapaF(1); //Durante la segunda iteracion presentamos la capa verde (y detenemos la transicion).
    }else{
        cambioCapaF(2); // Primero posicionamos la capa 2 *(rojo)
    }
    contadorTransicion++;
}

void Flama_SectorF::Update()
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

void Flama_SectorF::wPaintEvent()
{
    if(flag){//Se cargo correctament el elemento (SVG)
        QPainter p(this);
        p.setRenderHint(QPainter::Antialiasing);
        p.setBrush(Qt::transparent);
        QRect rect(0,0,width(),height());


        switch(value){//Dependiendo del resultado de la SheedMemory
                case 0:

                        if(bolAnimado){
                            iniciaTransicionF();
                        }else{
                            cambioCapaF(1);//Capa desactivada (d1)
                        }
                        break;
                case 1:
                        iniciaAnimacionF();//Capa de transicion
                        break;
                default:
                        cambioCapaF(0); //Indefinido
       }
       m_SvGrenderer->render(&p,capaActual,rect);
    }
}

void Flama_SectorF::loadSvgFile(QString filePath)
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
