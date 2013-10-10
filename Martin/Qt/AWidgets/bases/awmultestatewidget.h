#ifndef AWMULTESTATEWIDGET_H
#define AWMULTESTATEWIDGET_H

#include "awidget.h"

class AWMultEstateWidget : public AWidget
{
    Q_OBJECT
    //Estas macros pueden ir sin punto y coma... verificar
    Q_PROPERTY (int Normal READ getValueNormal WRITE setValueNormal)
    Q_PROPERTY (int Alarma READ getAlarma WRITE setAlarma)
    Q_ENUMS(AWOrientation)
    Q_ENUMS(AWState)
    Q_PROPERTY(AWOrientation Orientation READ Orientation WRITE setOrientation)
    //Q_PROPERTY(AWState State READ State WRITE setState)

public:
    AWMultEstateWidget(QWidget *parent=0);

    enum AWOrientation{Degree0=0,Degree90=90,Degree180=180,Degree270=270};
    enum AWState{Apagado=0,Encendido,TransicionOn,TransicionOff,Error1,Error2,Error3};

    int getValueNormal()const{return normal;}
    void setValueNormal(int opt);

    int getAlarma()const{return alarma;}
    void setAlarma(int);

    AWOrientation Orientation()const{return m_orientation;}
    void setOrientation(AWOrientation);

    //AWState State()const{return m_state;}
    //void setState(AWState);
    virtual void Update();
private:
    void init();
protected:
    AWOrientation m_orientation;
    int alarma;
    int normal;
    //AWState m_state;



};

#endif // AWMULTESTATEWIDGET_H
