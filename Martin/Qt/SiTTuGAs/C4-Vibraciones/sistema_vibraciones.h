#ifndef SISTEMA_VIBRACIONES_H
#define SISTEMA_VIBRACIONES_H

#include <QWidget>
#include <QTimer>
#include <QDebug>
#include <QtCore/qmath.h>


namespace Ui {
    class SISTEMA_VIBRACIONES;
}

class SISTEMA_VIBRACIONES : public QWidget
{
    Q_OBJECT

public:
    explicit SISTEMA_VIBRACIONES(QWidget *parent = 0);
    ~SISTEMA_VIBRACIONES();
    QTimer *Timer;

    double Vibraciones(double A,double B,double C,double CIDesplazamiento,double CIVelocidad);
    double Vibraciones2(double A2,double B2,double C2,double CIDesplazamiento2,double CIVelocidad2);
    double Vibraciones3(double A3,double B3,double C3,double CIDesplazamiento3,double CIVelocidad3);
    double Vibraciones4(double A4,double B4,double C4,double CIDesplazamiento4,double CIVelocidad4);
    double Vibraciones5(double A5,double B5,double C5,double CIDesplazamiento5,double CIVelocidad5);
    double Vibraciones6(double A6,double B6,double C6,double CIDesplazamiento6,double CIVelocidad6);
    double Vibraciones7(double A7,double B7,double C7,double CIDesplazamiento7,double CIVelocidad7);
    double Vibraciones8(double A8,double B8,double C8,double CIDesplazamiento8,double CIVelocidad8);
    double Vibraciones9(double A9,double B9,double C9,double CIDesplazamiento9,double CIVelocidad9);
    double Vibraciones10(double A10,double B10,double C10,double CIDesplazamiento10,double CIVelocidad10);
    double Vibraciones11(double A11,double B11,double C11,double CIDesplazamiento11,double CIVelocidad11);
    double Vibraciones12(double A12,double B12,double C12,double CIDesplazamiento12,double CIVelocidad12);

signals:
    void SVibra01(double);
    void SVibra02(double);
    void SVibra03(double);
    void SVibra04(double);
    void SVibra05(double);
    void SVibra06(double);
    void SVibra07(double);
    void SVibra08(double);
    void SVibra09(double);
    void SVibra10(double);
    void SVibra11(double);
    void SVibra12(double);


public slots:

    int Iniciar();
    int Finalizar();
    void Modelo();


private:
    Ui::SISTEMA_VIBRACIONES *ui;

    double Tiempo;                    //Tiempo del timer

    double A;
    double B;
    double C;
    double CIDesplazamiento;
    double CIVelocidad;
    double Desplazamiento;

    double A2;
    double B2;
    double C2;
    double CIDesplazamiento2;
    double CIVelocidad2;
    double Desplazamiento2;

    double A3;
    double B3;
    double C3;
    double CIDesplazamiento3;
    double CIVelocidad3;
    double Desplazamiento3;

    double A4;
    double B4;
    double C4;
    double CIDesplazamiento4;
    double CIVelocidad4;
    double Desplazamiento4;

    double A5;
    double B5;
    double C5;
    double CIDesplazamiento5;
    double CIVelocidad5;
    double Desplazamiento5;

    double A6;
    double B6;
    double C6;
    double CIDesplazamiento6;
    double CIVelocidad6;
    double Desplazamiento6;

    double A7;
    double B7;
    double C7;
    double CIDesplazamiento7;
    double CIVelocidad7;
    double Desplazamiento7;

    double A8;
    double B8;
    double C8;
    double CIDesplazamiento8;
    double CIVelocidad8;
    double Desplazamiento8;

    double A9;
    double B9;
    double C9;
    double CIDesplazamiento9;
    double CIVelocidad9;
    double Desplazamiento9;

    double A10;
    double B10;
    double C10;
    double CIDesplazamiento10;
    double CIVelocidad10;
    double Desplazamiento10;

    double A11;
    double B11;
    double C11;
    double CIDesplazamiento11;
    double CIVelocidad11;
    double Desplazamiento11;

    double A12;
    double B12;
    double C12;
    double CIDesplazamiento12;
    double CIVelocidad12;
    double Desplazamiento12;
};

#endif // SISTEMA_VIBRACIONES_H
