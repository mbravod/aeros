#ifndef WLABEL_H
#define WLABEL_H

#include "Base.h"
#include <QString>
#include <QLabel>
#include <QTimer>
#include <QFont>

class WLabel : public Base
{
    Q_OBJECT    
    //Definicion de setters y getters
    Q_PROPERTY(QString text READ getText WRITE setText )
    //Definimos un tipo enumerado para el color de texto y fondo de la etiqueta
    Q_PROPERTY(QFont font READ getFont WRITE setFont )

    Q_ENUMS(wAlignment)

    Q_ENUMS(wColorFondo)

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

    Q_PROPERTY(wAlignment Alineacion READ getWAlignment WRITE setWAlignment)


    //Bandera para la activacion de animacion
    Q_PROPERTY(bool Animacion READ getAnimacion  WRITE setAnimacion)

public:

    WLabel(QWidget *parent = 0);
    ~WLabel();


    QFont getFont();
    void setFont(QFont opt);


    //Tipo enumerado para el primer estado
    enum wEdoColorFondo1{A_SinColor = 0,A_Rojo = 1,A_Verde = 2, A_Amarillo = 3,A_Blanco = 4,A_Gris = 5,A_Negro = 6};
    enum wEdoColorTexto1{a_SinColor = 0,a_Rojo = 1,a_Verde = 2, a_Amarillo = 3,a_Blanco = 4,a_Gris = 5,a_Negro = 6};
    //Tipo enumerado para el segundo estado
    enum wEdoColorFondo2{B_SinColor = 0,B_Rojo = 1,B_Verde = 2, B_Amarillo = 3,B_Blanco = 4,B_Gris = 5,B_Negro = 6};
    enum wEdoColorTexto2{b_SinColor = 0,b_Rojo = 1,b_Verde = 2, b_Amarillo = 3,b_Blanco = 4,b_Gris = 5,b_Negro = 6};
    enum wAlignment{Izquierda = 0,Centro = 1, Derecha = 2, Justificado = 3};

    enum wColorFondo{Sin_color = 0, Rojo = 1, Verde =2, Amarillo = 3, Blanco = 4, Gris = 5, Negro = 6};
    //Definimos setters y getters para la controlar la animacion
    bool getAnimacion();
    void setAnimacion(bool opt);

    wAlignment getWAlignment();
    void setWAlignment(wAlignment al);
    //Setters y Getters para inscorporar texto a la etiqueta
    QString getText();
    void setText(QString txtName);

    //Setters y Getters para configurar la animacion entre estados (Fondo)

    wEdoColorFondo1 getWEdoColorFondo1();
    void setWEdoColorFondo1(wEdoColorFondo1 edoFon1);

    wEdoColorFondo2 getWEdoColorFondo2();
    void setWEdoColorFondo2(wEdoColorFondo2 edoFon2);

    //Setters y Getters para configurar la animacion entre estados (Texto)

    wEdoColorTexto1 getWEdoColorTexto1();
    void setWEdoColorTexto1(wEdoColorTexto1 edoTxt1);

    wEdoColorTexto2 getWEdoColorTexto2();
    void setWEdoColorTexto2(wEdoColorTexto2 edoTxt2);

    wColorFondo getWColorFondo()const{ return fondo;}
    void setWColorFondo(wColorFondo fondo);

    //Metodos destinados a la animacion *(entre dos estados)
    void configurarElemento();


//Apartado para la animacion
public slots:
    void ativarAnimacion();

private:
    //Contador y bandera para la animacion
    QTimer *timer;
    bool cambio;
    bool animacion;
    QFont estilo;

    int tamanio;

    //Paleta con la configuracion para cada estado (valido solo para la animacion)
    QPalette edo;
    QPalette edo1;
    QPalette edo2;
    //Etiqueta que instancia dentro del widget para incorporar el texto
    QLabel *etiqueta;

    wEdoColorFondo1 fondo1;
    wEdoColorFondo2 fondo2;

    wEdoColorTexto1 texto1;
    wEdoColorTexto2 texto2;
    wAlignment alineacion;
    wColorFondo fondo;


protected:
    //Metodo que heredamos del padre y la redefinimos
    void Update();


};

#endif
