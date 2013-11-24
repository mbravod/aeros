#include "awmultestatewidget.h"

AWMultEstateWidget::AWMultEstateWidget(QWidget *parent):
        AWidget(parent)
{
    init();
}

void AWMultEstateWidget::setValueNormal(int opt)
{
    this->normal = opt;
    update();
}
void AWMultEstateWidget::init(){
    value = -1;
    m_orientation = Degree0;
    alarma = 0; //Rojo por defecto
    normal = 2; //Blanco por defecto
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
