#include "base.h"

base::base(QWidget *parent) :
    QWidget(parent)
{
    this->id = 0;
    init();
}

void base::setIntID(int id){
    this->id = id;
    this->update();
}

void base::paintEvent(QPaintEvent *e)
{
    EWPaintEvent(); //Delego la tarea a otra funcion
}

void base::EWPaintEvent()
{
    //Al parecer solo defino la estructura
}

void base::init(){
    m_value = 0;
}

void base::setValue(int opt)
{
    m_value =  opt;
    update();
}
