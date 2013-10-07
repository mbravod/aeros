#include "aled.h"


ALed::ALed(QWidget *parent) :
        AWMultEstateWidget(parent)
{
    init();
}

void ALed::Update()
{
    if(m_ShrdMem == NULL)
        return;
    if(!this->parentWidget()->isVisible())  //Verificar metodo para saber si
        return;                // la ventana que contiene el widget es "visible" (para el usuario)
    if(indice< 0){
        indice = m_ShrdMem->getVar(id);
        if(indice < 0){
            return;
        }
    }
    //Logica para definir atributos y comportamiento del widget
    value = m_ShrdMem->getI(indice);
}

void ALed::init(){
}

void ALed::AWPaintEvent(){
}
