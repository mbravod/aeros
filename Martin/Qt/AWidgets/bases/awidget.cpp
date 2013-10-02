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

void AWidget::paintEvent(QPaintEvent *){
    AWPaintEvent();
}

void AWidget::Update(){
    if(m_ShrdMem==NULL || !isUpdateable())return;
}

void AWidget::AWPaintEvent(){

}
