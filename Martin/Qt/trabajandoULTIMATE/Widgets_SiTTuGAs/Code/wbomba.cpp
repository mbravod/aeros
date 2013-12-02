#include "wbomba.h"

wBomba::wBomba(QWidget *parent) :
    Base(parent)
{
    loadSvgFile(":/default/resource/wbomba.svg");
    //Instancias de los contadores
    timerAnimado = new QTimer(this);
    timerTransicion = new QTimer(this);
    //Realizamos conexiones
    connect(timerAnimado, SIGNAL(timeout()), this, SLOT(realizarAnimacionBomba()));
    connect(timerTransicion, SIGNAL(timeout()), this, SLOT(realizarTransicionBomba()));
    //Inicializamos variables
    initBomba();
}

wBomba::~wBomba()
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
}

void wBomba::setActivarBomba(bool opt)
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

void wBomba::setTransicionBomba(bool bolT)
{
    bolTransicion = bolT;
    if(bolT){
        timerTransicion->start(250);
    }
    else{
        timerTransicion->stop();
    }
}

void wBomba::initBomba()
{
    //Si los contadores estan activos los detenemos
    if(timerAnimado->isActive()){
        timerAnimado->stop();
    }

    //Inicializamos variables
    cambio = false;
    cambioT = false;
    bolAnimado = false;
    bolTransicion =false;
    contadorAnimado = 0;
    contadorTransicion = 0;
}

void wBomba::cambioCapaBomba(int capa)
{
    switch(capa){
        case 0://Capa - negro
                capaActual = "d0";
                initBomba();
                break;
        case 1://Capa - verde
                capaActual = "d1";
                initBomba();
                break;

        case 2://Capa - rojo -> Solo para la transicion que al parecer no existe
                capaActual = "d2";
                break;
        case 3://Capa - flama grande
                capaActual = "d3";
                break;
        case 4://Capa - flama no grande
                capaActual = "d4";
                break;
        case 5://Capa - flama no grande
                capaActual = "d5";
                break;
        case 6://Capa - flama no grande
                capaActual = "d6";
                break;
        case 7://Capa - flama no grande
                capaActual = "d7";
                break;
        case 8://Capa - flama no grande
                capaActual = "d8";
                break;
    }
    update();
}

void wBomba::iniciaAnimacionBomba()
{
    if(bolAnimado){
        return;
    }else{
        setActivarBomba(true);
    }
}

void wBomba::Update()
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

void wBomba::wPaintEvent()
{
    if(flag){//Se cargo correctament el elemento (SVG)
        QPainter p(this);
        p.setRenderHint(QPainter::Antialiasing);
        p.setBrush(Qt::transparent);
        QRect rect(0,0,width(),height());
        switch(value){//Dependiendo del resultado de la SheedMemory
                case 0:
                        if(bolAnimado){
                            iniciaTransicionBomba();
                        }else{
                            cambioCapaBomba(1);//Capa desactivada (d1)
                        }
                        break;
                case 1:
                        iniciaAnimacionBomba();//Capa de transicion
                        break;
                default:
                        cambioCapaBomba(0); //Indefinido
       }
       m_SvGrenderer->render(&p,capaActual,rect);
    }
}

void wBomba::iniciaTransicionBomba()
{
    if(bolTransicion){
        return;
    }else{
        setTransicionBomba(true);
    }
}

void wBomba::realizarAnimacionBomba()
{
    if(contadorAnimado == 0){//La primera vez pasamos por la capa de color rojo
        cambioCapaBomba(2);
        contadorAnimado++;
    }else{//Conmutamos entre las capas destinadas a las flamas (d3 y d4)
        //Dependiendo del tipo es como efectuamos la animacion
        switch(tipo){
                case 0://Animacion del ventilador superior
                        if(cambio)
                        {
                            cambioCapaBomba(3);
                        }
                        else
                        {
                            cambioCapaBomba(4);
                        }
                        break;
                case 1://Animacion del ventilador inferior

                        if(cambio)
                        {
                            cambioCapaBomba(5);
                        }
                        else
                        {
                            cambioCapaBomba(6);
                        }
                        break;
                default:
                        //Animacion de ambos ventiladores de la turbina
                        if(cambio)
                        {
                            cambioCapaBomba(7);
                        }
                        else
                        {
                            cambioCapaBomba(8);
                        }
            }
            cambio = !cambio;
    }

}

void wBomba::realizarTransicionBomba()
{
    if(contadorTransicion == 0){ //Al detener la animacion primero detenemos la animacion
        setActivarBomba(false); //Detenemos la animacion
    }
    if(contadorTransicion == 1){
        setTransicionBomba(false);
        cambioCapaBomba(1); //Durante la segunda iteracion presentamos la capa verde (y detenemos la transicion).
    }else{
        cambioCapaBomba(2); // Primero posicionamos la capa 2 *(rojo)
    }
    contadorTransicion++;
}

void wBomba::loadSvgFile(QString filePath)
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
