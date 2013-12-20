#ifndef WCHECKBOX_H
#define WCHECKBOX_H

#include <QPainter>
#include <QPen>
#include <QString>
#include "BaseComponentes.h"


class WCheckBox : public BaseComponentes
{
    Q_OBJECT
    Q_PROPERTY(QString text READ getText WRITE setText)
    Q_PROPERTY(QFont font READ getFont WRITE setFont )

public:
    WCheckBox(QWidget *parent = 0);
    ~WCheckBox();
    void setText(QString text);
    QString getText()const{ return text;}
    QFont getFont()const{return estilo;}
    void setFont(QFont opt);


private:
    //Variable local auxiliar para el calculo en el "lienzo"
    QString text;
    QFont estilo;
    QPen pen;
    int w;
    int r;
//Definimos como protected para poder acceder a las
//variables de la clase padre
protected:
    //Este metodo es el que presenta el widget al usuario
    void wPaintEvent();
    void Update();
};

#endif
