#include "awanalogicwidget.h"

AWAnalogicWidget::AWAnalogicWidget(QWidget *parent):
        AWidget(parent)
{
    init();
}
void AWAnalogicWidget::init(){
    m_value=0;
}

void AWAnalogicWidget::setValue(double i){
    this->m_value = i;
    update();
}
void AWAnalogicWidget::setOrientation(AWOrientation i){
    this->m_orientation = i;
    update();
}

void AWAnalogicWidget::Update(){
    //if(m_ShrdMem==NULL || !isUpdateable())return;
    //setValue(m_ShrdMem->getF(0));
}
