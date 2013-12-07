#include "pantallas.h"

#include "Sittugas/sittugas.h"
#include "SharedMemory/httprequest.h"

Pantallas::Pantallas(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem):
        QWidget(siTTuGAs)
{
    this->m_SiTTuGAs = siTTuGAs;
    this->m_shrdMem = shrdMem;
    this->title = "";
    this->clave = "";
}

QString Pantallas::getTitle()
{
    return this->title;
}
/*
void Pantallas::Update(){

    if(allAWWidget.size()!=0){
    int i;
    for(i=0;i<allAWWidget.size();i++)
        allAWWidget.at(i)->Update();
    }
}//*/

QString Pantallas::getClave()
{
    return this->clave;
}

void Pantallas::setUpdateableChildrenList()
{

    allAWWidget = this->findChildren<AWidget *>();

    int i;
    for(i=0;i<allAWWidget.size();i++){

        if(allAWWidget.at(i)->isUpdateable()){
            allAWWidget.at(i)->setShrdMem(this->m_shrdMem);
        }
        else{
            allAWWidget.removeAt(i);
            i--;
        }
    }
}
