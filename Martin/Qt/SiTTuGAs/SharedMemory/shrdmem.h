#ifndef SHRDMEM_H
#define SHRDMEM_H

#include <QObject>

//Solo habra un objeto de ShrdMem por cada Interface principal de operador. Para prevenir accesos no necesarios o caidas de la interface
//hay que modificar la logica del MDI de manera que solo se actualicen los objetos de la interface actual mostrada.
class ShrdMem : public QObject
{
    Q_OBJECT
public:
    ShrdMem(QObject *parent = 0);

    float getF(int pos);

    int getI(int pos);
    int getVar(QString var);

    void setF(float val, int pos);
    void setI(int val, int pos);

    void setFAULTI(int iintwait,int iintup,int iintlen,int iintdown,int iintvar,int normalvali, int failvali );
    void setFAULTF(int iintwait,int iintup,int iintlen,int iintdown,int ifntvar,float normalvalf, float failvalf );
    void setMFAULTI(int iintwait,int iintup,int iintlen,int iintdown,int iintvar,int normalvali, int failvali );
    void setMFAULTF(int iintwait,int iintup,int iintlen,int iintdown,int ifntvar,float normalval, float failval );

signals:

    void varNotFound(QString string);

};

#endif // SHRDMEM_H
