#include "flama_sectord.h"

Flama_SectorD::Flama_SectorD(QWidget *parent) :
    Base(parent)
{
    loadSvgFile(":/default/resource/sectorD.svg");
    //Instancias de los contadores
    timerAnimado = new QTimer(this);
    timerTransicion = new QTimer(this);
    //Realizamos conexiones
    connect(timerAnimado, SIGNAL(timeout()), this, SLOT(realizarAnimacionD()));
    connect(timerTransicion, SIGNAL(timeout()), this, SLOT(realizarTransicionD()));
    //Inicializamos variables
    initD();


}

Flama_SectorD::~Flama_SectorD()
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

void Flama_SectorD::setActivarD(bool opt)
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

void Flama_SectorD::setTransicionD(bool bolT)
{
    bolTransicion = bolT;
    if(bolT){
        timerTransicion->start(250);
    }
    else{
        timerTransicion->stop();
    }
}

void Flama_SectorD::initD()
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

void Flama_SectorD::cambioCapaD(int capa)
{
    switch(capa){
        case 0://Capa - negro
                capaActual = "d0";
                initD();
                break;
        case 1://Capa - verde
                capaActual = "d1";
                initD();
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

void Flama_SectorD::iniciaAnimacionD()
{
    if(bolAnimado){
        return;
    }else{
        setActivarD(true);
    }
}

void Flama_SectorD::iniciaTransicionD()
{
    if(bolTransicion){
        return;
    }else{
        setTransicionD(true);
    }
}

void Flama_SectorD::realizarAnimacionD()
{
    if(contadorAnimado == 0){//La primera vez pasamos por la capa de color rojo
        cambioCapaD(2);
        contadorAnimado++;
    }else{//Conmutamos entre las capas destinadas a las flamas (d3 y d4)
        if(cambio)
        {
            cambioCapaD(4);
        }
        else
        {
            cambioCapaD(3);
        }
        cambio = !cambio;
    }
}

void Flama_SectorD::realizarTransicionD()
{

    if(contadorTransicion == 0){ //Al detener la animacion primero detenemos la animacion
        setActivarD(false); //Detenemos la animacion
    }
    if(contadorTransicion == 1){
        setTransicionD(false);
        cambioCapaD(1); //Durante la segunda iteracion presentamos la capa verde (y detenemos la transicion).
    }else{
        cambioCapaD(2); // Primero posicionamos la capa 2 *(rojo)
    }
    contadorTransicion++;
}

void Flama_SectorD::Update()
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

void Flama_SectorD::wPaintEvent()
{
    if(flag){//Se cargo correctament el elemento (SVG)
        QPainter p(this);
        p.setRenderHint(QPainter::Antialiasing);
        p.setBrush(Qt::transparent);
        QRect rect(0,0,width(),height());


        switch(value){//Dependiendo del resultado de la SheedMemory
                case 0:

                        if(bolAnimado){
                            iniciaTransicionD();
                        }else{
                            cambioCapaD(1);//Capa desactivada (d1)
                        }
                        break;
                case 1:
                        iniciaAnimacionD();//Capa de transicion
                        break;
                default:
                        cambioCapaD(0); //Indefinido
       }
       m_SvGrenderer->render(&p,capaActual,rect);
    }

}

void Flama_SectorD::loadSvgFile(QString filePath)
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