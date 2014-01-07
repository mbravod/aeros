#include "welemento_a.h"

wElemento_A::wElemento_A(QWidget *parent) :
    Base(parent)
{
    loadSvgFile(":/default/resource/triangulo.svg");
    //Instancias de los contadores
    timerAnimado = new QTimer(this);
    timerTransicion = new QTimer(this);
    //Realizamos conexiones
    connect(timerAnimado, SIGNAL(timeout()), this, SLOT(realizarAnimacionTriangulo()));
    connect(timerTransicion, SIGNAL(timeout()), this, SLOT(realizarTransicionTriangulo()));
    //Inicializamos variables
    initTriangulo();
}

wElemento_A::~wElemento_A()
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

void wElemento_A::setActivarTriangulo(bool opt)
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

void wElemento_A::setTransicionTriangulo(bool bolT)
{
    bolTransicion = bolT;
    if(bolT){
        timerTransicion->start(250);
    }
    else{
        timerTransicion->stop();
    }
}

void wElemento_A::initTriangulo()
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

void wElemento_A::cambioCapaTriangulo(int capa)
{
    switch(capa){
        case 0://Capa - negro
                capaActual = "d0";
                initTriangulo();
                break;
        case 1://Capa - verde
                capaActual = "d1";
                initTriangulo();
                break;

        case 2://Capa - rojo -> Solo para la transicion que al parecer no existe
                capaActual = "d2";
                break;
        case 3://Capa
                capaActual = "d3";
                break;
        case 4://Capa
                capaActual = "d4";
                break;
    }
    update();
}

void wElemento_A::iniciaAnimacionTriangulo()
{
    if(bolAnimado){
        return;
    }else{
        setActivarTriangulo(true);
    }
}

void wElemento_A::iniciaTransicionTriangulo()
{
    if(bolTransicion){
        return;
    }else{
        setTransicionTriangulo(true);
    }
}

void wElemento_A::realizarAnimacionTriangulo()
{
    if(contadorAnimado == 0){//La primera vez pasamos por la capa de color rojo
        cambioCapaTriangulo(2);
        contadorAnimado++;
    }else{//Conmutamos entre las capas destinadas a las flamas (d3 y d4)
        //Dependiendo del tipo es como efectuamos la animacion
        if(cambio)
        {
            cambioCapaTriangulo(3);
        }
        else
        {
            cambioCapaTriangulo(4);
        }
        cambio = !cambio;
    }
}

void wElemento_A::realizarTransicionTriangulo()
{
    if(contadorTransicion == 0){ //Al detener la animacion primero detenemos la animacion
        setActivarTriangulo(false); //Detenemos la animacion
    }
    if(contadorTransicion == 1){
        setTransicionTriangulo(false);
        cambioCapaTriangulo(1); //Durante la segunda iteracion presentamos la capa verde (y detenemos la transicion).
    }else{
        cambioCapaTriangulo(2); // Primero posicionamos la capa 2 *(rojo)
    }
    contadorTransicion++;
}

void wElemento_A::loadSvgFile(QString filePath)
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

void wElemento_A::Update()
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

void wElemento_A::wPaintEvent()
{
    if(flag){//Se cargo correctament el elemento (SVG)
        QPainter p(this);
        p.setRenderHint(QPainter::Antialiasing);
        p.setBrush(Qt::transparent);
        QRect rect(0,0,width(),height());
        switch(value){//Dependiendo del resultado de la SheedMemory
                case 0:
                        if(bolAnimado){
                            iniciaTransicionTriangulo();
                        }else{
                            cambioCapaTriangulo(1);//Capa desactivada (d1)
                        }
                        break;
                case 1:
                        iniciaAnimacionTriangulo();//Capa de transicion
                        break;
                default:
                        cambioCapaTriangulo(0); //Indefinido
       }
       m_SvGrenderer->render(&p,capaActual,rect);
    }
}
