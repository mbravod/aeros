#include "awmultestatewidget.h"

AWMultEstateWidget::AWMultEstateWidget(QWidget *parent):
        AWidget(parent)
{
    init();
}
void AWMultEstateWidget::init(){
    m_value=0;
    m_orientation = Degree0;
    alarma = 0;
}

void AWMultEstateWidget::setValue(int i){
    this->m_value = i;
    update();
}

void AWMultEstateWidget::setAlarma(int x)
{
    this->alarma = x;
    update();
}

void AWMultEstateWidget::setOrientation(AWOrientation i){
    this->m_orientation = i;
    update();
}
void AWMultEstateWidget::Update(){
    //if(m_ShrdMem==NULL || !isUpdateable())return;
    //setValue(m_ShrdMem->getI(0));
}
