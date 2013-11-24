#include "wlabel.h"

WLabel::WLabel(QWidget *parent) :
    Base(parent)
{
    //Instancia de la etiqueta que anexamos al widget
    etiqueta = new QLabel(this);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(ativarAnimacion()));
    //Variable de control para activar o detener la animacion
    cambio = false;

    etiqueta->setAutoFillBackground(true);
}

WLabel::~WLabel()
{
    etiqueta->~QLabel();
    timer->~QTimer();
}


QFont WLabel::getFont()
{
    return estilo;
}

void WLabel::setFont(QFont opt)
{   //Guardamos las modificaciones de la etiqueta
    this->estilo = opt;
    QFont auxiliar = etiqueta->font();
    auxiliar.setStyle(estilo.style());

    auxiliar.setItalic(estilo.italic());
    auxiliar.setWeight(estilo.weight());
    auxiliar.setFamily(estilo.family());
    auxiliar.setPointSize(estilo.pointSize());
    auxiliar.setBold(estilo.bold());

    etiqueta->setFont(auxiliar);
    update();

}


bool WLabel::getAnimacion()
{
    return cambio;
}



void WLabel::setAnimacion(bool opt)
{
    configurarElemento();//Prueba hay que emular la SharedMemory()

    if(opt)
    {
        //Activamos el color de fondo

        timer->start(250); //Cada segundo
    }
    else
    {
        timer->stop();
        etiqueta->setPalette(edo);
    }
    update();
}

WLabel::wAlignment WLabel::getWAlignment()
{
    return alineacion;
}

void WLabel::setWAlignment(WLabel::wAlignment al)
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

QString WLabel::getText()
{
    //Retornamos el valor actual de la etiqueta
    return (etiqueta->text());
}

void WLabel::setText(const QString txtName)
{
   //Agregamos la cadena a la etiqueta
    etiqueta->setText(txtName);
    //Verificar que el color de letra, fondo y otras propiedades se respeten
    //al invocar el metodo "setTexto()"
    //Ajustamos tamanio de la etiqueta ancho y alto
    etiqueta->setMinimumWidth(width());
    etiqueta->setMinimumHeight(height());
    //Actualizamos el widget
    update();
}


WLabel::wEdoColorFondo1 WLabel::getWEdoColorFondo1()
{
    //Retornamos el color de fondo del edo. 1
    return (this->fondo1);
}





void WLabel::setWEdoColorFondo1(wEdoColorFondo1 edoFon1)
{
    //Actualizamos el valor de fondo en el edo. 1
    this->fondo1 = edoFon1;

    update();
}

WLabel::wEdoColorFondo2 WLabel::getWEdoColorFondo2()
{
    //Retornamos el color de fondo del segundo edo.
    return (this->fondo2);
}



void WLabel::setWEdoColorFondo2(wEdoColorFondo2 edoFon2)
{
    //Actualizamos el color de fondo del segundo edo.
    this->fondo2 = edoFon2;
    update();
}

WLabel::wEdoColorTexto2 WLabel::getWEdoColorTexto2()
{
    //Retornamos el color actual del texto del segundo edo (elemento seleccionado)
    //En referencia al tipo enumerado al que esta asociado
    return (this->texto2);
}



void WLabel::setWEdoColorTexto2(wEdoColorTexto2 edoTxt2)
{
    //Actualizamos el color del texto en el segundo estado
    this->texto2 = edoTxt2;
    update();
}

void WLabel::setWColorFondo(WLabel::wColorFondo fondo)
{
    this->fondo = fondo;
    //etiqueta->setAutoFillBackground(true);
    switch(fondo){
            case 0://Sin fondo
                    edo.setColor(QPalette::Window, Qt::transparent);
                    break;
            case 1://Color rojo
                    edo.setColor(QPalette::Window, Qt::red);
                    break;
            case 2://Color verde
                    edo.setColor(QPalette::Window, Qt::green);
                    break;
            case 3://Color amarillo
                    edo.setColor(QPalette::Window, Qt::yellow);
                    break;
            case 4://Color blanco
                    edo.setColor(QPalette::Window, Qt::white);
                    break;
            case 5://Color gris
                    edo.setColor(QPalette::Window, Qt::gray);
                    break;
            case 6://Color negro
                    edo.setColor(QPalette::Window, Qt::black);
                    break;
    }
    etiqueta->setPalette(edo);
    update();


}

WLabel::wEdoColorTexto1 WLabel::getWEdoColorTexto1()
{
    //Retornamos el indice al que hace referencia el tipo enumerado
    //asociado al texto del edo. 1
    return (this->texto1);
}


void WLabel::setWEdoColorTexto1(wEdoColorTexto1 edoTxt1)
{
    //Actualizamos el color (basado en indice) de la letra
    //para el primer edo.
    this->texto1 = edoTxt1;
    update();
}





void WLabel::Update()
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

    //value -> apagado (0) / prendido (1)

    //estado -> 0::Estatico 1::Animado
    value = m_ShrdMem->getI(indice);
    switch(tipo){//Nos encontramos en el caso widget estatico
            case 0:
                    //Pasamos la cadena con color de texto negro y calor de fondo transparente
                    setText(QString::number(value));
                    //configurarElemento(estado);
                    break;
            case 1://Nos encontramos en la parte de animacion
                    configurarElemento();
                    setAnimacion(true);
                   //Hay que definir parejas de colores entre fondo de la etiqueta y color de la letra
                    break;
            default:
                    //Operacion no valida. No hay un caso relacionado con el tipo
                    tipo = -1;
    }
    update();

}



void WLabel::ativarAnimacion()
{
    if(cambio){
        etiqueta->setPalette(edo1);
    }
    else{
        etiqueta->setPalette(edo2);
    }
    update();
    //Animacion intercambiando estados
    cambio = !cambio;

}

void WLabel::configurarElemento()
{
    //Verificamos la configuracion para los dos estados (color de letra y fondo)
    switch(fondo1){
              case 0://Sin fondo
                     edo1.setColor(QPalette::Window, Qt::transparent);
                     break;
              case 1://Color rojo
                     edo1.setColor(QPalette::Window, Qt::red);
                     break;
              case 2://Color verde
                     edo1.setColor(QPalette::Window, Qt::green);
                     break;
              case 3://Color amarillo
                     edo1.setColor(QPalette::Window, Qt::yellow);
                     break;
              case 4://Color blanco
                     edo1.setColor(QPalette::Window, Qt::white);
                     break;
              case 5://Color gris
                     edo1.setColor(QPalette::Window, Qt::gray);
                     break;
              case 6://Color negro
                     edo1.setColor(QPalette::Window, Qt::black);
                     break;
     }
     switch(texto1){
              case 0://Sin fondo
                     edo1.setColor(QPalette::WindowText, Qt::transparent);
                     break;
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
     }

     switch(fondo2){
               case 0://Sin fondo
                      edo2.setColor(QPalette::Window, Qt::transparent);
                      break;
               case 1://Color rojo
                      edo2.setColor(QPalette::Window, Qt::red);
                      break;
               case 2://Color verde
                      edo2.setColor(QPalette::Window, Qt::green);
                      break;
               case 3://Color amarillo
                      edo2.setColor(QPalette::Window, Qt::yellow);
                      break;
               case 4://Color blanco
                      edo2.setColor(QPalette::Window, Qt::white);
                      break;

               case 5://Color gris
                      edo2.setColor(QPalette::Window, Qt::gray);
                      break;
               case 6://Color negro
                      edo2.setColor(QPalette::Window, Qt::black);
                      break;
      }
      switch(texto2){
               case 0://Sin fondo
                      edo2.setColor(QPalette::WindowText, Qt::transparent);
                      break;
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
      }

}

