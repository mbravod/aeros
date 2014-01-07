#ifndef AWANALOGICLEVEL_H
#define AWANALOGICLEVEL_H

#include "awanalogicwidget.h"

class AWAnalogicLevel : public AWAnalogicWidget
{
    Q_OBJECT
    Q_PROPERTY(QColor ValColor READ ValColor WRITE setValColor)

public:
    AWAnalogicLevel(QWidget *parent = 0);
    QColor ValColor()const{return m_valColor;}
    void setValColor(QColor c);
public slots:
    void Update();

private:
    void init();
protected:
    QColor m_valColor;
    void AWPaintEvent();
};

#endif
