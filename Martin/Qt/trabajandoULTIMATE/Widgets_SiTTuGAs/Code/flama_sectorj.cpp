#include "flama_sectorj.h"

Flama_SectorJ::Flama_SectorJ(QWidget *parent) :
    Base(parent)
{

    loadSvgFile(":/default/resource/sectorJ.svg");
    //Instancias de los contadores
    timerAnimado = new QTimer(this);
    timerTransicion = new QTimer(this);
    //Realizamos conexiones
    connect(timerAnimado, SIGNAL(timeout()), this, SLOT(realizarAnimacionJ()));
    connect(timerTransicion, SIGNAL(timeout()), this, SLOT(realizarTransicionJ()));
    //Inicializamos variables
    initJ();

}

Flama_SectorJ::~Flama_SectorJ()
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

void Flama_SectorJ::setActivarJ(bool opt)
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

void Flama_SectorJ::setTransicionJ(bool bolT)
{
    bolTransicion = bolT;
    if(bolT){
        timerTransicion->start(250);
    }
    else{
        timerTransicion->stop();
    }
}

void Flama_SectorJ::initJ()
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

void Flama_SectorJ::cambioCapaJ(int capa)
{
    switch(capa){
        case 0://Capa - negro
                capaActual = "d0";
                initJ();
                break;
        case 1://Capa - verde
                capaActual = "d1";
                initJ();
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

void Flama_SectorJ::iniciaAnimacionJ()
{

    if(bolAnimado){
        return;
    }else{
        setActivarJ(true);
    }
}

void Flama_SectorJ::iniciaTransicionJ()
{
    if(bolTransicion){
        return;
    }else{
        setTransicionJ(true);
    }
}

void Flama_SectorJ::realizarAnimacionJ()
{
    if(contadorAnimado == 0){//La primera vez pasamos por la capa de color rojo
        cambioCapaJ(2);
        contadorAnimado++;
    }else{//Conmutamos entre las capas destinadas a las flamas (d3 y d4)
        if(cambio)
        {
            cambioCapaJ(4);
        }
        else
        {
            cambioCapaJ(3);
        }
        cambio = !cambio;
    }
}

void Flama_SectorJ::realizarTransicionJ()
{
    if(contadorTransicion == 0){ //Al detener la animacion primero detenemos la animacion
        setActivarJ(false); //Detenemos la animacion
    }
    if(contadorTransicion == 1){
        setTransicionJ(false);
        cambioCapaJ(1); //Durante la segunda iteracion presentamos la capa verde (y detenemos la transicion).
    }else{
        cambioCapaJ(2); // Primero posicionamos la capa 2 *(rojo)
    }
    contadorTransicion++;
}

void Flama_SectorJ::Update()
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


void Flama_SectorJ::wPaintEvent()
{
    if(flag){//Se cargo correctament el elemento (SVG)
        QPainter p(this);
        p.setRenderHint(QPainter::Antialiasing);
        p.setBrush(Qt::transparent);
        QRect rect(0,0,width(),height());


        switch(value){//Dependiendo del resultado de la SheedMemory
                case 0:

                        if(bolAnimado){
                            iniciaTransicionJ();
                        }else{
                            cambioCapaJ(1);//Capa desactivada (d1)
                        }
                        break;
                case 1:
                        iniciaAnimacionJ();//Capa de transicion
                        break;
                default:
                        cambioCapaJ(0); //Indefinido
       }
       m_SvGrenderer->render(&p,capaActual,rect);
    }

}

void Flama_SectorJ::loadSvgFile(QString filePath)
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
