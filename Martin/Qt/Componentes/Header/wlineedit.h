#ifndef WLINEEDIT_H
#define WLINEEDIT_H

#include "BaseComponentes.h"
#include <QTimer>
#include <QFont>
#include <QLabel>
#include <QPainter>
#include <QPen>
#include <QDebug>

//Etiquetas de alarma
class WLineEdit : public BaseComponentes
{
    Q_OBJECT

    //Propiedades para el color de fondo
    Q_ENUMS(wColorFondo)

    //Propiedades para la configuración del cambio de color de fondo
    Q_ENUMS(wEdoColorFondo1)
    Q_ENUMS(wEdoColorTexto1)

    Q_ENUMS(wEdoColorFondo2)
    Q_ENUMS(wEdoColorTexto2)

    //Propiedades para la alineación
    Q_ENUMS(wAlignment)

    //Propiedades para inicializar la eqtiqueta
    Q_PROPERTY(wColorFondo Fondo_Inicial READ getWColorFondo WRITE setWColorFondo)

    //Propiedade para configurar los estados entre animaciones (solo dos estados permitidos)
    Q_PROPERTY(wEdoColorTexto1 Texto_A READ getWEdoColorTexto1 WRITE setWEdoColorTexto1)
    Q_PROPERTY(wEdoColorFondo1 Fondo_A READ getWEdoColorFondo1 WRITE setWEdoColorFondo1)

    Q_PROPERTY(wEdoColorTexto2 Texto_B READ getWEdoColorTexto2 WRITE setWEdoColorTexto2)
    //Opciones para configurar en los estados de la animacion (solo dos estados permitidos)
    Q_PROPERTY(wEdoColorFondo2 Fondo_B READ getWEdoColorFondo2 WRITE setWEdoColorFondo2)
    //Propiedad para la alineacion
    Q_PROPERTY(wAlignment Alineacion READ getWAlignment WRITE setWAlignment)
    //Texto que tendra la etiqueta
    Q_PROPERTY(QString text READ getText WRITE setText)
    Q_PROPERTY(QString text_B READ getText_B WRITE setText_B)
    //Propiedades para el formato del texto
    Q_PROPERTY(QFont font READ getFont WRITE setFont)



public:
    WLineEdit(QWidget *parent = 0);
    ~WLineEdit();
    enum wAlignment{Izquierda = 0,Centro = 1, Derecha = 2, Justificado = 3};

    enum wColorFondo{Sin_color = 0, Rojo = 1, Verde =2, Amarillo = 3, Blanco = 4, Gris = 5, Negro = 6};

    //Tipo enumerado para el primer estado
    enum wEdoColorFondo1{A_SinColor = 0,A_Rojo = 1,A_Verde = 2, A_Amarillo = 3,A_Blanco = 4,A_Gris = 5};
    enum wEdoColorTexto1{a_Negro = 0, a_Rojo = 1,a_Verde = 2, a_Amarillo = 3,a_Blanco = 4,a_Gris = 5};
    //Tipo enumerado para el segundo estado
    enum wEdoColorFondo2{B_SinColor = 0,B_Rojo = 1,B_Verde = 2, B_Amarillo = 3,B_Blanco = 4,B_Gris = 5,B_Negro = 6};
    enum wEdoColorTexto2{b_Negro = 0, b_Rojo = 1,b_Verde = 2, b_Amarillo = 3,b_Blanco = 4,b_Gris = 5};

    //Definimos setters y getters para la controlar la animacion
    bool getAnimacion();
    void setAnimacion(bool opt);

    //Propiedades para modificar el formato de presentacion de la etiqueta
    QFont getFont();
    void setFont(QFont opt);

    //Setters y Getters para configurar la animacion entre estados (Fondo)
    wEdoColorFondo1 getWEdoColorFondo1()const {return fondo1;}
    void setWEdoColorFondo1(wEdoColorFondo1 edoFon1);


    wEdoColorFondo2 getWEdoColorFondo2();
    void setWEdoColorFondo2(wEdoColorFondo2 edoFon2);

    //Setters y Getters para configurar la animacion entre estados (Texto)

    wEdoColorTexto1 getWEdoColorTexto1();
    void setWEdoColorTexto1(wEdoColorTexto1 edoTxt1);

    wEdoColorTexto2 getWEdoColorTexto2();
    void setWEdoColorTexto2(wEdoColorTexto2 edoTxt2);

    wColorFondo getWColorFondo();
    void setWColorFondo(wColorFondo fondo);

    //Metodos destinados a la animacion *(entre dos estados)
    void configurarElemento();
    void configuracionFondoInicial();
    //Configuracion de la alinacion del texto en la etiqueta
    wAlignment getWAlignment();
    void setWAlignment(wAlignment al);

    QString getText()const{
        return txtA;
    }
    void setText(QString txtName);

    QString getText_B()const{
        return txtB;
    }
    void setText_B(const QString txtName);



private:
    //Contador y bandera para la animacion
    QTimer *timer;
    QLabel *etiqueta;
    bool cambio;
    bool animacion;
    bool fondoCambio;
    QFont estilo;
    int fondoI;
    int fondoN;
    int fondoInicial;

    QString txtA;
    QString txtB;

    //Paleta con la configuracion para cada estado (valido solo para la animacion)
    QPalette edo;
    QPalette edo1;
    QPalette edo2;

    wColorFondo fondo;
    wEdoColorFondo1 fondo1;
    wEdoColorFondo2 fondo2;

    wEdoColorTexto1 texto1;
    wEdoColorTexto2 texto2;

    wAlignment alineacion;


//Apartado para la animacion
public slots:
    void ativarAnimacion();

protected:
    void wPaintEvent();
    void Update();
};
#endif
