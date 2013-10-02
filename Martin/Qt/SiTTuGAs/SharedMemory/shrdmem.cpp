#include "shrdmem.h"

ShrdMem::ShrdMem(QObject *parent) :
    QObject(parent)
{
}

void  ShrdMem::setF(float val, int pos){
}

void  ShrdMem::setI(int val, int pos){
}

void  ShrdMem::setFAULTI(int iintwait,int iintup,int iintlen,int iintdown,int iintvar,int normalvali, int failvali ){
}

void ShrdMem::setMFAULTI(int iintwait,int iintup,int iintlen,int iintdown,int iintvar,int normalvali, int failvali )
{
}

void ShrdMem::setFAULTF(int iintwait,int iintup,int iintlen,int iintdown,int ifntvar,float normalval, float failval ){
}

void ShrdMem::setMFAULTF(int iintwait,int iintup,int iintlen,int iintdown,int ifntvar,float normalval, float failval ){
}

float ShrdMem::getF(int pos){
    qDebug("ShrdMem::getF");
    return 1;
}

int ShrdMem::getI(int pos){
    qDebug("ShrdMem::getI");
    return 1;
}

int ShrdMem::getVar(QString var){
    return 0;
}
