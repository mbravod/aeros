#include "wlineedit.h"

WLineEdit::WLineEdit(QWidget *parent) :
    Base(parent)
{
    //Instancia del contador de la animacion y conexion
    timer = new QTimer(this);
    etiqueta = new QLabel(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(ativarAnimacion()));

    //Variable de control para activar o detener la animacion
    cambio = false;
    animacion = false;


}

WLineEdit::~WLineEdit()
{
    //Verificamos que el contador no  este activado para destruirlo, en caso contrario lo detenemos antes de destruirlo
    if(timer->isActive())
        timer->stop();
    timer->~QTimer();
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
        timer->start(250); //Cada segundo
    }
    else
    {
        timer->stop();
    }
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

QString WLineEdit::getText_B()
{
    return "ok";
}

void WLineEdit::setText_B(QString txtName)
{
}

QString WLineEdit::getText()
{
    //Retornamos el valor actual de la etiqueta
    return ("Camboia");
}

void WLineEdit::setText(const QString txtName)
{
    etiqueta->setText(txtName);
    update();
}



void WLineEdit::setWEdoColorFondo1(wEdoColorFondo1 edoFon1)
{
    //Actualizamos el valor de fondo en el edo. 1
    this->fondo1 = edoFon1;

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

void WLineEdit::setWColorFondo(WLineEdit::wColorFondo fondo)
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
    /*Depediendo del tipo es el comportamiento de la etiqueta
    switch(tipo){//Nos encontramos en el caso widget estatico
            case 0:
                    //Pasamos la cadena con color de texto negro y calor de fondo transparente
                    setText(QString::number(valueF,'f',m_presicion));
                    //configurarElemento(estado);
                    break;
            case 1://Nos encontramos en la parte de animacion
                    setAnimacion(true);
                   //Hay que definir parejas de colores entre fondo de la etiqueta y color de la letra
                    break;
            default:
                    //Operacion no valida. No hay un caso relacionado con el tipo
                    tipo = -1;
                    if(animacion){
                        setAnimacion(false);
                    }
    }*/
}

void WLineEdit::ativarAnimacion()
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

void WLineEdit::configurarElemento()
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

    //configurarElemento();
    //setAnimacion(true);
    update();

}

