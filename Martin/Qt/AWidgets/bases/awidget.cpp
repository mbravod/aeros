#include "awidget.h"

AWidget::AWidget(QWidget *parent) :
    QWidget(parent)
{
    m_ShrdMem=NULL;
    this->m_strid="null";
    this->m_intid=-1;
    this->m_isUpdateable = false;
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
}

void AWidget::setIndice(int indice)
{
    this->indice = indice;
}


void AWidget::setTipo(int tipo)
{
    this->tipo = tipo;
}

void AWidget::setValue(int value)
{
    this->value = value;
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
