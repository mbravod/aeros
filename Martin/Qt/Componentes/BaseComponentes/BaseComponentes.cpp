#include "BaseComponentes.h"

BaseComponentes::BaseComponentes(QWidget *parent) :
    QWidget(parent)
{
    //Inicializamos variables
    id.append(NULL); //Limpiamos de cualquier elemento en la cadena (basura a considerarse)
    tipo = -1;
    m_ShrdMem=NULL;
    indice = -1;
    value= -1;
    valueF = -1.0;
}

void BaseComponentes::setShrdMem(HTTPRequest *s)
{
    this->m_ShrdMem = s;
    //Por implementar y definir comportamiento
}

void BaseComponentes::setUpdateable(bool u)
{
    this->m_isUpdateable = u;
    update();
}

void BaseComponentes::setTipo(int estado){
    this->tipo = estado;
    update();
}

void BaseComponentes::setValue(int value)
{
    this->value = value;
    update();
}


void BaseComponentes::Update()
{
    //Estas funciones se reimplementan en cada widget
}

void BaseComponentes::paintEvent(QPaintEvent *)
{
    wPaintEvent();
}

void BaseComponentes::wPaintEvent()
{
    //Sin codigo se reimplementa en widget checkBox *(es quien lo utiliza)
}

int BaseComponentes::getTipo(){
    return (this->tipo);
}

int BaseComponentes::getIndice()
{
    return (this->indice);
}

int BaseComponentes::getValue()
{
    return (this->value);
}


void BaseComponentes::setId(QString id){
    this->id = id;
    update();
}

void BaseComponentes::setIndice(int indice)
{
    this->indice = indice;
    update();
}

QString BaseComponentes::getId(){
    return (this->id);
}
