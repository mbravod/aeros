#include "flama_sectorl.h"

Flama_SectorL::Flama_SectorL(QWidget *parent) :
    Base(parent)
{

    loadSvgFile(":/default/resource/sectorL.svg");
    //Instancias de los contadores
    timerAnimado = new QTimer(this);
    timerTransicion = new QTimer(this);
    //Realizamos conexiones
    connect(timerAnimado, SIGNAL(timeout()), this, SLOT(realizarAnimacionL()));
    connect(timerTransicion, SIGNAL(timeout()), this, SLOT(realizarTransicionL()));
    //Inicializamos variables
    initL();

}

Flama_SectorL::~Flama_SectorL()
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

void Flama_SectorL::setActivarL(bool opt)
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

void Flama_SectorL::setTransicionL(bool bolT)
{
    bolTransicion = bolT;
    if(bolT){
        timerTransicion->start(250);
    }
    else{
        timerTransicion->stop();
    }
}

void Flama_SectorL::initL()
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

void Flama_SectorL::cambioCapaL(int capa)
{
    switch(capa){
        case 0://Capa - negro
                capaActual = "d0";
                initL();
                break;
        case 1://Capa - verde
                capaActual = "d1";
                initL();
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

void Flama_SectorL::iniciaAnimacionL()
{
    if(bolAnimado){
        return;
    }else{
        setActivarL(true);
    }
}

void Flama_SectorL::iniciaTransicionL()
{
    if(bolTransicion){
        return;
    }else{
        setTransicionL(true);
    }
}

void Flama_SectorL::realizarAnimacionL()
{
    if(contadorAnimado == 0){//La primera vez pasamos por la capa de color rojo
        cambioCapaL(2);
        contadorAnimado++;
    }else{//Conmutamos entre las capas destinadas a las flamas (d3 y d4)
        if(cambio)
        {
            cambioCapaL(4);
        }
        else
        {
            cambioCapaL(3);
        }
        cambio = !cambio;
    }
}

void Flama_SectorL::realizarTransicionL()
{
    if(contadorTransicion == 0){ //Al detener la animacion primero detenemos la animacion
        setActivarL(false); //Detenemos la animacion
    }
    if(contadorTransicion == 1){
        setTransicionL(false);
        cambioCapaL(1); //Durante la segunda iteracion presentamos la capa verde (y detenemos la transicion).
    }else{
        cambioCapaL(2); // Primero posicionamos la capa 2 *(rojo)
    }
    contadorTransicion++;

}

void Flama_SectorL::Update()
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

void Flama_SectorL::wPaintEvent()
{
    if(flag){//Se cargo correctament el elemento (SVG)
        QPainter p(this);
        p.setRenderHint(QPainter::Antialiasing);
        p.setBrush(Qt::transparent);
        QRect rect(0,0,width(),height());


        switch(value){//Dependiendo del resultado de la SheedMemory
                case 0:

                        if(bolAnimado){
                            iniciaTransicionL();
                        }else{
                            cambioCapaL(1);//Capa desactivada (d1)
                        }
                        break;
                case 1:
                        iniciaAnimacionL();//Capa de transicion
                        break;
                default:
                        cambioCapaL(0); //Indefinido
       }
       m_SvGrenderer->render(&p,capaActual,rect);
    }
}

void Flama_SectorL::loadSvgFile(QString filePath)
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
