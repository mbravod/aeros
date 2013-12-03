#ifndef WLABEL_H
#define WLABEL_H

#include "Base.h"
#include <QString>
#include <QLabel>
#include <QFont>

class WLabel : public Base
{
    Q_OBJECT    

    //Propiedades para la alineación
    Q_ENUMS(wAlignment)
    //Definicion de setters y getters
    Q_PROPERTY(QString text READ getText WRITE setText )
    //Definimos un tipo enumerado para el color de texto y fondo de la etiqueta
    Q_PROPERTY(QFont font READ getFont WRITE setFont )
    //Definimos la presicion que maneja el campo
    Q_PROPERTY(int Presicion READ getPresicion WRITE setPresicion)
    //Propiedades de alineación
    Q_PROPERTY(wAlignment Alineacion READ getWAlignment WRITE setWAlignment)



public:

    enum wAlignment{Izquierda = 0,Centro = 1, Derecha = 2, Justificado = 3};

    WLabel(QWidget *parent = 0);
    ~WLabel();

    void setPresicion(int i);
    int getPresicion()const{return m_presicion;}

    QFont getFont();
    void setFont(QFont opt);

    wAlignment getWAlignment();
    void setWAlignment(wAlignment al);
    //Setters y Getters para inscorporar texto a la etiqueta
    QString getText();
    void setText(QString txtName);



private:
    //Etiqueta que instancia dentro del widget para incorporar el texto
    QLabel *etiqueta;
    wAlignment alineacion;

    int m_presicion;
    QFont estilo;


protected:
    //Metodo que heredamos del padre y la redefinimos
    void Update();

    //Solo para cuestiones de pruebas
    void wPaintEvent();

};

#endif
