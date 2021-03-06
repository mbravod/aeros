#include "wlineedit.h"

WLineEdit::WLineEdit(QWidget *parent) :
    BaseComponentes(parent)
{
    //Instancia del contador de la animacion y conexion
    timer = new QTimer(this);
    etiqueta = new QLabel(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(ativarAnimacion()));

    //Variable de control para activar o detener la animacion
    cambio = false;
    animacion = false;
    fondoCambio =  false;

    fondoI = -1;
    fondoN = -1;
    fondoInicial = -1;



}

WLineEdit::~WLineEdit()
{
    //Verificamos que el contador no  este activado para destruirlo, en caso contrario lo detenemos antes de destruirlo
    if(timer->isActive())
        timer->stop();
    timer->~QTimer();
    etiqueta->~QLabel();
}

bool WLineEdit::getAnimacion()
{
    return animacion;
}



void WLineEdit::setAnimacion(bool opt)
{
    //Si la animacion ya esta activada no hacemos nada
    if(animacion == true && opt == true)
        return;

    if(opt)
    {
        //Activamos el color de fondo
        //Activamos el color de fondo en las etiquetas
        timer->start(250); //Cada segundo
    }
    else
    {
        timer->stop();
        fondoCambio = false;
        //Activamos el color de fondo en las etiquetas
        //etiqueta->setAutoFillBackground(false);
    }
    //Inicializamos la configuracion de los estados de los elementos
    configurarElemento();
    animacion = opt;
    update();
}

QFont WLineEdit::getFont()
{
    return estilo;
}

void WLineEdit::setFont(QFont opt)
{   //Guardamos las modificaciones de la etiqueta
    this->estilo = opt;
    etiqueta->setFont(estilo);
    update();

}

WLineEdit::wAlignment WLineEdit::getWAlignment()
{
    return alineacion;
}

void WLineEdit::setWAlignment(WLineEdit::wAlignment al)
{
    this->alineacion = al;
    switch(alineacion){
        case 0:
                etiqueta->setAlignment(Qt::AlignLeft);
                break;
        case 1:
                etiqueta->setAlignment(Qt::AlignHCenter);
                break;
        case 2:
                etiqueta->setAlignment(Qt::AlignRight);
                break;
        case 3:
                etiqueta->setAlignment(Qt::AlignJustify);
    }
    update();
}


void WLineEdit::setText_B(const QString txtName)
{
    edo.setColor(QPalette::Window, Qt::transparent);
    etiqueta->setPalette(edo);
    this->txtB = txtName;
    //Activamos la etiqueta para que ocupe todo el espacio del widgetd
    etiqueta->setMaximumSize(width(),height());
    etiqueta->setMinimumSize(width(),height());
    update();
}


void WLineEdit::setText(const QString txtName)
{
    edo.setColor(QPalette::Window, Qt::transparent);
    etiqueta->setPalette(edo);
    txtA = txtName;
    etiqueta->setText(txtName);
    //Activamos la etiqueta para que ocupe todo el espacio del widgetd
    etiqueta->setMaximumSize(width(),height());
    etiqueta->setMinimumSize(width(),height());
    update();
}



void WLineEdit::setWEdoColorFondo1(wEdoColorFondo1 edoFon1)
{
    //Actualizamos el valor de fondo en el edo. 1
    this->fondo1 = edoFon1;
    fondoI = fondo1;
    update();
}

WLineEdit::wEdoColorFondo2 WLineEdit::getWEdoColorFondo2()
{
    //Retornamos el color de fondo del segundo edo.
    return (this->fondo2);
}


void WLineEdit::setWEdoColorFondo2(wEdoColorFondo2 edoFon2)
{
    //Actualizamos el color de fondo del segundo edo.
    this->fondo2 = edoFon2;
    fondoN = fondo2;
    update();
}

WLineEdit::wEdoColorTexto2 WLineEdit::getWEdoColorTexto2()
{
    //Retornamos el color actual del texto del segundo edo (elemento seleccionado)
    //En referencia al tipo enumerado al que esta asociado
    return (this->texto2);
}



void WLineEdit::setWEdoColorTexto2(wEdoColorTexto2 edoTxt2)
{
    //Actualizamos el color del texto en el segundo estado
    this->texto2 = edoTxt2;
    update();
}

WLineEdit::wColorFondo WLineEdit::getWColorFondo()
{
    return (this->fondo);
}

void WLineEdit::setWColorFondo(WLineEdit::wColorFondo fondo)
{
    this->fondo = fondo;
    fondoInicial = fondo;
    update();

}

WLineEdit::wEdoColorTexto1 WLineEdit::getWEdoColorTexto1()
{
    //Retornamos el indice al que hace referencia el tipo enumerado
    //asociado al texto del edo. 1
    return (this->texto1);
}


void WLineEdit::setWEdoColorTexto1(wEdoColorTexto1 edoTxt1)
{
    //Actualizamos el color (basado en indice) de la letra
    //para el primer edo.
    this->texto1 = edoTxt1;
    update();
}




void WLineEdit::wPaintEvent()
{
    QPainter p(this);
    p.setRenderHint(QPainter::Antialiasing,true);
    QPen pen = p.pen();
    /*Depediendo del tipo es el comportamiento de la etiqueta*/
    switch(tipo){//Nos encontramos en el caso widget estatico


            case 0:
                    if(animacion){
                        setAnimacion(false);
                    }
                    pen.setColor(QColor(136,136,136));
                    p.setPen(pen);

                    switch(fondoInicial){

                        case 1://Color rojo
                                p.setBrush(Qt::red);
                                break;
                        case 2://Color verde
                                p.setBrush(Qt::green);
                                break;
                        case 3://Color amarillo
                                p.setBrush(Qt::yellow);
                                break;
                        case 4://Color blanco
                                p.setBrush(Qt::white);
                                break;
                        case 5://Color gris
                                p.setBrush(Qt::gray);
                                break;
                        case 6://Color negro
                                p.setBrush(Qt::black);
                                break;
                        default:
                                p.setBrush(Qt::transparent);
                    }
                    //Volvemos a colocar el texto inicial de la etiqueta as� como el color de fondo inicial (el asignado en la configuraci�n)
                    etiqueta->setText(txtA);
                    break;


            case 1:
                    pen.setColor(QColor(136,136,136));
                    p.setPen(pen);
                    //Iniciamos con el caso negativo equivalente a la propiedad Fondo A
                    if(!fondoCambio){
                        switch(fondoI){
                            case 1://Color rojo
                                    p.setBrush(Qt::red);
                                    break;
                            case 2://Color verde
                                    p.setBrush(Qt::green);
                                    break;
                            case 3://Color amarillo
                                    p.setBrush(Qt::yellow);
                                    break;
                            case 4://Color blanco
                                    p.setBrush(Qt::white);
                                    break;
                            case 5://Color gris
                                    p.setBrush(Qt::gray);
                                    break;
                            case 6://Color negro
                                    p.setBrush(Qt::black);
                                    break;
                            default:
                                    p.setBrush(Qt::transparent);
                        }
                    }else{
                        switch(fondoN){

                            case 1://Color rojo
                                    p.setBrush(Qt::red);
                                    break;
                            case 2://Color verde
                                    p.setBrush(Qt::green);
                                    break;
                            case 3://Color amarillo
                                    p.setBrush(Qt::yellow);
                                    break;
                            case 4://Color blanco
                                    p.setBrush(Qt::white);
                                    break;
                            case 5://Color gris
                                    p.setBrush(Qt::gray);
                                    break;
                            case 6://Color negro
                                    p.setBrush(Qt::black);
                                    break;
                            default:
                                    p.setBrush(Qt::transparent);
                        }
                    }
                    setAnimacion(true);
                   //Hay que definir parejas de colores entre fondo de la etiqueta y color de la letra
                    break;
            default:
                    //Operacion no valida. No hay un caso relacionado con el tipo
                    p.setBrush(QColor(225,225,225));
                    tipo = -1;

    }


    p.drawRect(0,0,width(),height());

}

void WLineEdit::ativarAnimacion()
{
    if(cambio){
        etiqueta->setPalette(edo1);
        etiqueta->setText(txtA);
    }
    else{
        etiqueta->setPalette(edo2);
        etiqueta->setText(txtB);
    }
    update();
    //Animacion intercambiando estados
    cambio = !cambio;
    fondoCambio = !fondoCambio;

}

void WLineEdit::configurarElemento()
{
    //Verificamos la configuracion para los dos estados (color de letra y fondo)

     switch(texto1){
              case 1://Color rojo
                     edo1.setColor(QPalette::WindowText, Qt::red);
                     break;
              case 2://Color verde
                     edo1.setColor(QPalette::WindowText, Qt::green);
                     break;
              case 3://Color amarillo
                     edo1.setColor(QPalette::WindowText, Qt::yellow);
                     break;
              case 4://Color blanco
                     edo1.setColor(QPalette::WindowText, Qt::white);
                     break;

              case 5://Color gris
                     edo1.setColor(QPalette::WindowText,  Qt::gray);
                     break;
              case 6://Color negro
                     edo1.setColor(QPalette::WindowText, Qt::black);
                     break;
              default:
                     edo1.setColor(QPalette::WindowText, Qt::black);
     }

     switch(texto2){

               case 1://Color rojo
                      edo2.setColor(QPalette::WindowText, Qt::red);
                      break;
               case 2://Color verde
                      edo2.setColor(QPalette::WindowText, Qt::green);
                      break;
               case 3://Color amarillo
                      edo2.setColor(QPalette::WindowText, Qt::yellow);
                      break;
               case 4://Color blanco
                      edo2.setColor(QPalette::WindowText, Qt::white);
                      break;
               case 5://Color gris
                      edo2.setColor(QPalette::WindowText, Qt::gray);
                      break;
               case 6://Color negro
                      edo2.setColor(QPalette::WindowText, Qt::black);
                      break;
               default:
                      edo2.setColor(QPalette::WindowText, Qt::black);
      }

}


void WLineEdit::Update()
{
    //Metodo heredado d base y reimplementado para actualizar los valores
    //de la sharedMemory y actualizar el widget de acuerdo a los valores
    //que arroje las operaciones de la sharedMemory
    if(m_ShrdMem == NULL) //Sino existe la instancia de ShrMem no hacemos nada
        return;
    if(!isUpdateable()) //Si no es visible la ventana no hacemos nada
        return;
    //Validamos que exista una referencia a la memoria a traves de la memoria compartida distribuida
    if(indice < 0){
        indice = m_ShrdMem->getVar(id); //Sino hay un bloque de memoria asignado
        if(indice < 0){             //solicitamos dicha referencia a la ShrMem
            return; //Si no es asignado ningun bloque de memoria no hacemos nada
        }
    }

    //Efectuadas las validaciones comenzamos a darle atributos y comportamiento al widget
    //de acuerdo a los valores que la ShrdMem asigno a las siguientes variables:


    //estado -> 0::Estatico 1::Animado
    value = m_ShrdMem->getI(indice);
    //Marcamos el 'tipo' como el valor de retorno que asigna el value (de acuerdo con la memoria compartida)
    tipo = value;
    qDebug()<<"Estamos en el m�todo 'update()'...";

    update();

}

