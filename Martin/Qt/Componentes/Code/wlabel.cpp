#include "wlabel.h"

WLabel::WLabel(QWidget *parent) :
    BaseComponentes(parent)
{
    //Instancia de la etiqueta que anexamos al widget
    etiqueta = new QLabel(this);
    m_presicion = 0;
    tipo = -1;
    m_presicion = 0;
    valueF = 0.0;
}

WLabel::~WLabel()
{
    etiqueta->~QLabel();
}


QFont WLabel::getFont()
{
    return estilo;
}

void WLabel::setFont(QFont opt)
{   //Guardamos las modificaciones de la etiqueta
    this->estilo = opt;
    etiqueta->setFont(estilo);
    update();
}

void WLabel::setValueF(double valueF)
{
    this->valueF = valueF;
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
    //Actualizamos el widget
    update();
}

void WLabel::setWEdoColorFondo1(WLabel::wEdoColorFondo1 edoFon1)
{
    this->fondo1 = edoFon1;
}

void WLabel::setWEdoColorFondo2(WLabel::wEdoColorFondo2 edoFon2)
{
       this->fondo2 = edoFon2;
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

    //Si queremos presentar un numero entero manejamos la presicion como 0 *(default)

    valueF = m_ShrdMem->getF(indice);
    update();

}

void WLabel::wPaintEvent()
{
    switch(tipo){
        case 0:
                etiqueta->setText(QString::number(valueF,'f',m_presicion));
                etiqueta->setMaximumSize(width(),height());
                etiqueta->setMinimumSize(width(),height());
                break;

        default:
                //Ajustamos tamanio de la etiqueta an   cho y alto
                etiqueta->setMaximumSize(width(),height());
                etiqueta->setMinimumSize(width(),height());
                tipo = -1;
    }


}





void WLabel::setPresicion(int i){
    this->m_presicion = i;
    this->update();
}

void WLabel::setWEdoColorTexto1(WLabel::wEdoColorTexto1 edoTxt1)
{
    this->texto1 = edoTxt1;
}

void WLabel::setWEdoColorTexto2(WLabel::wEdoColorTexto2 edoTxt2)
{
    this->texto2 = edoTxt2;
}

void WLabel::setWColorFondo(WLabel::wColorFondo fondo)
{
    this->fondo = fondo;
}


