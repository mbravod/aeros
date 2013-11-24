#include "Base.h"

Base::Base(QWidget *parent) :
    QWidget(parent)
{
    //Inicializamos variables
    id.append(NULL); //Limpiamos de cualquier elemento en la cadena (basura a considerarse)
    tipo = -1;
    m_ShrdMem = NULL;
    indice = -1;
    value= -1;
}

void Base::setShrdMem(ShrdMem *s)
{
    this->m_ShrdMem = s;
    update();
    //Por implementar y definir comportamiento
}

void Base::setUpdateable(bool u)
{
    this->m_isUpdateable = u;
    update();
}

void Base::setTipo(int estado){
    this->tipo = estado;
    update();
}

void Base::setValue(int value)
{
    this->value = value;
    update();
}

void Base::Update()
{
    //Estas funciones se reimplementan en cada widget
}

void Base::paintEvent(QPaintEvent *)
{
    wPaintEvent();
}

void Base::wPaintEvent()
{
    //Sin codigo, se implementa en cada widget de manera particular (segun la funcionalidad del widget)
}


int Base::getTipo(){
    return (this->tipo);
}

int Base::getIndice()
{
    return (this->indice);
}

int Base::getValue()
{
    return (this->value);
}

void Base::setId(QString id){
    this->id = id;
    update();
}

void Base::setIndice(int indice)
{
    this->indice = indice;
    update();
}

QString Base::getId(){
    return (this->id);
}
