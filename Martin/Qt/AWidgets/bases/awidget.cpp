#include "awidget.h"

AWidget::AWidget(QWidget *parent) :
    QWidget(parent)
{
    m_ShrdMem=NULL;
    this->m_strid="null";
    this->m_intid=-1;
    this->m_isUpdateable = false;
    this->id = "null";
    this->tipo = -1;
    this->value = -1;
    this->indice = -1;
}

void AWidget::setStrID(QString id){
    this->m_strid=id;
    this->update();
}
void AWidget::setIntID(int id){
    this->m_intid=id;
    this->update();
}
void AWidget::setUpdateable(bool u){
    this->m_isUpdateable=u;
    this->update();
}

QString AWidget::getId()
{
    return id;
}

int AWidget::getTipo()
{
    return tipo;
}

int AWidget::getIndice()
{
    return indice;
}

int AWidget::getValue()
{
    return value;
}

void AWidget::setId(QString id)
{
    this->id = id;
    update();
}

void AWidget::setIndice(int indice)
{
    this->indice = indice;
    update();
}


void AWidget::setTipo(int tipo)
{
    this->tipo = tipo;
    update();
}

void AWidget::setValue(int value)
{
    this->value = value;
    update();
}

void AWidget::paintEvent(QPaintEvent *){
    AWPaintEvent();
}

void AWidget::Update(){
    //if(m_ShrdMem==NULL || !isUpdateable())return;
}

void AWidget::AWPaintEvent(){
    //Sin codigo se reimplementa en widget checkBox *(es quien lo utiliza)

}
/*
void AWidget::mousePressEvent(QMouseEvent *)
{
    AWPressEvent();
}

void AWidget::AWPressEvent()
{
}
*/
