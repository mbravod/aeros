#ifndef WLABEL_H
#define WLABEL_H

#include "Base.h"
#include <QString>
#include <QLabel>
#include <QFont>

class WLabel : public Base
{
    Q_OBJECT

    //Propiedades para el color de fondo
    Q_ENUMS(wColorFondo)

    //Propiedades para la configuración del cambio de color de fondo
    Q_ENUMS(wEdoColorFondo1)
    Q_ENUMS(wEdoColorTexto1)
    Q_ENUMS(wEdoColorFondo2)
    Q_ENUMS(wEdoColorTexto2)
    //Propiedades para inicializar la eqtiqueta
    Q_PROPERTY(wColorFondo Fondo_Inicial READ getWColorFondo WRITE setWColorFondo)
    //Propiedade para configurar los estados entre animaciones (solo dos estados permitidos)
    Q_PROPERTY(wEdoColorTexto1 Texto_A READ getWEdoColorTexto1 WRITE setWEdoColorTexto1)
    Q_PROPERTY(wEdoColorFondo1 Fondo_A READ getWEdoColorFondo1 WRITE setWEdoColorFondo1)
    Q_PROPERTY(wEdoColorTexto2 Texto_B READ getWEdoColorTexto2 WRITE setWEdoColorTexto2)
    //Opciones para configurar en los estados de la animacion (solo dos estados permitidos)
    Q_PROPERTY(wEdoColorFondo2 Fondo_B READ getWEdoColorFondo2 WRITE setWEdoColorFondo2)

    //Simulando el comportamiento de la sharedMemory (valores que devulve)
    Q_PROPERTY(double valueF READ getValueF WRITE setValueF)

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

    enum wColorFondo{Sin_color = 0, Rojo = 1, Verde =2, Amarillo = 3, Blanco = 4, Gris = 5, Negro = 6};
    //Tipo enumerado para el primer estado
    enum wEdoColorFondo1{A_SinColor = 0,A_Rojo = 1,A_Verde = 2, A_Amarillo = 3,A_Blanco = 4,A_Gris = 5};
    enum wEdoColorTexto1{a_SinColor = 0,a_Negro = 1, a_Rojo = 2,a_Verde = 3, a_Amarillo = 4,a_Blanco = 5,a_Gris = 6};
    //Tipo enumerado para el segundo estado
    enum wEdoColorFondo2{B_SinColor = 0,B_Rojo = 1,B_Verde = 2, B_Amarillo = 3,B_Blanco = 4,B_Gris = 5,B_Negro = 6};
    enum wEdoColorTexto2{b_SinColor = 0,b_Negro = 1, b_Rojo = 2,b_Verde = 3, b_Amarillo = 4,b_Blanco = 5,b_Gris = 6};

    enum wAlignment{Izquierda = 0,Centro = 1, Derecha = 2, Justificado = 3};

    WLabel(QWidget *parent = 0);
    ~WLabel();
    void setValueF(double valueF);

    double getValueF()const{
        return valueF;
    }
    void setPresicion(int i);
    int getPresicion()const{return m_presicion;}


    QFont getFont();
    void setFont(QFont opt);

    wAlignment getWAlignment();
    void setWAlignment(wAlignment al);
    //Setters y Getters para inscorporar texto a la etiqueta
    QString getText();
    void setText(QString txtName);


    //Setters y Getters para configurar la animacion entre estados (Fondo)
    wEdoColorFondo1 getWEdoColorFondo1()const {return fondo1;}
    void setWEdoColorFondo1(wEdoColorFondo1 edoFon1);
    wEdoColorFondo2 getWEdoColorFondo2()const{return fondo2;}
    void setWEdoColorFondo2(wEdoColorFondo2 edoFon2);
    //Setters y Getters para configurar la animacion entre estados (Texto)
    wEdoColorTexto1 getWEdoColorTexto1()const{return texto1;}
    void setWEdoColorTexto1(wEdoColorTexto1 edoTxt1);
    wEdoColorTexto2 getWEdoColorTexto2()const{return texto2;}
    void setWEdoColorTexto2(wEdoColorTexto2 edoTxt2);

    void setWColorFondo(wColorFondo fondo);
     wColorFondo getWColorFondo()const{return fondo;}

    //Metodos destinados a la animacion *(entre dos estados)
    void configurarElemento();
    void configuracionFondoInicial();







private:
    //Etiqueta que instancia dentro del widget para incorporar el texto
    QLabel *etiqueta;
    wAlignment alineacion;
    double valueF;
    int m_presicion;
    QFont estilo;

    wColorFondo fondo;
    wEdoColorFondo1 fondo1;
    wEdoColorFondo2 fondo2;
    wEdoColorTexto1 texto1;
    wEdoColorTexto2 texto2;


protected:

    //Metodo que heredamos del padre y la redefinimos
    void Update();
    //Solo para cuestiones de pruebas
    void wPaintEvent();
};

#endif
