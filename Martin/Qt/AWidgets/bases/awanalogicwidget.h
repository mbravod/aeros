#ifndef AWANALOGICWIDGET_H
#define AWANALOGICWIDGET_H

#include "awidget.h"

class AWAnalogicWidget : public AWidget
{
    Q_OBJECT
    Q_PROPERTY (double Value READ Value WRITE setValue)
    Q_ENUMS(AWOrientation)
    Q_PROPERTY(AWOrientation Orientation READ Orientation WRITE setOrientation)
public:
    AWAnalogicWidget(QWidget *parent=0);
    enum AWOrientation{Degree0=0,Degree90=90,Degree180=180,Degree270=270};

    double Value()const{return m_value;}
    void setValue(double);
    AWOrientation Orientation()const{return m_orientation;}
    void setOrientation(AWOrientation);

    virtual void Update();

private:
    void init();
protected:
    AWOrientation m_orientation;
    double m_value;


};

#endif // AWANALOGICWIDGET_H
