#include "flama_sectorg.h"

Flama_SectorG::Flama_SectorG(QWidget *parent) :
    Base(parent)
{

    loadSvgFile(":/default/resource/sectorG.svg");
    //Instancias de los contadores
    timerAnimado = new QTimer(this);
    timerTransicion = new QTimer(this);
    //Realizamos conexiones
    connect(timerAnimado, SIGNAL(timeout()), this, SLOT(realizarAnimacionG()));
    connect(timerTransicion, SIGNAL(timeout()), this, SLOT(realizarTransicionG()));
    //Inicializamos variables
    initG();

}

Flama_SectorG::~Flama_SectorG()
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

void Flama_SectorG::setActivarG(bool opt)
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

void Flama_SectorG::setTransicionG(bool bolT)
{
    bolTransicion = bolT;
    if(bolT){
        timerTransicion->start(250);
    }
    else{
        timerTransicion->stop();
    }
}

void Flama_SectorG::initG()
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

void Flama_SectorG::cambioCapaG(int capa)
{
    switch(capa){
        case 0://Capa - negro
                capaActual = "d0";
                initG();
                break;
        case 1://Capa - verde
                capaActual = "d1";
                initG();
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

void Flama_SectorG::iniciaAnimacionG()
{
    if(bolAnimado){
        return;
    }else{
        setActivarG(true);
    }
}

void Flama_SectorG::iniciaTransicionG()
{
    if(bolTransicion){
        return;
    }else{
        setTransicionG(true);
    }
}

void Flama_SectorG::realizarAnimacionG()
{
    if(contadorAnimado == 0){//La primera vez pasamos por la capa de color rojo
        cambioCapaG(2);
        contadorAnimado++;
    }else{//Conmutamos entre las capas destinadas a las flamas (d3 y d4)
        if(cambio)
        {
            cambioCapaG(4);
        }
        else
        {
            cambioCapaG(3);
        }
        cambio = !cambio;
    }
}

void Flama_SectorG::realizarTransicionG()
{
    if(contadorTransicion == 0){ //Al detener la animacion primero detenemos la animacion
        setActivarG(false); //Detenemos la animacion
    }
    if(contadorTransicion == 1){
        setTransicionG(false);
        cambioCapaG(1); //Durante la segunda iteracion presentamos la capa verde (y detenemos la transicion).
    }else{
        cambioCapaG(2); // Primero posicionamos la capa 2 *(rojo)
    }
    contadorTransicion++;
}

void Flama_SectorG::Update()
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

void Flama_SectorG::wPaintEvent()
{
    if(flag){//Se cargo correctament el elemento (SVG)
        QPainter p(this);
        p.setRenderHint(QPainter::Antialiasing);
        p.setBrush(Qt::transparent);
        QRect rect(0,0,width(),height());


        switch(value){//Dependiendo del resultado de la SheedMemory
                case 0:

                        if(bolAnimado){
                            iniciaTransicionG();
                        }else{
                            cambioCapaG(1);//Capa desactivada (d1)
                        }
                        break;
                case 1:
                        iniciaAnimacionG();//Capa de transicion
                        break;
                default:
                        cambioCapaG(0); //Indefinido
       }
       m_SvGrenderer->render(&p,capaActual,rect);
    }
}

void Flama_SectorG::loadSvgFile(QString filePath)
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
