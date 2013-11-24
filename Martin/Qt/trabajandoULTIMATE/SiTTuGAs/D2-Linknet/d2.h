#ifndef D2_H
#define D2_H

#include <QWidget>
#include <QPoint>
#include <QMouseEvent>
#include "Abstract/pantallas.h"
#include "../header.h"

#define _AI_10 0
#define _AI_11 1
#define _AI_12 2
#define _AI_13 3
#define _AI_14 4
#define _AI_15 5
#define _AI_16 6
#define _AI_17 7
#define _AI_18 8
#define _AI_19 9
#define _AI_6  10
#define _DI_4  11
#define _DI_5  12
#define _AI4   13
#define _AI8   14
#define _AI9   15

#define _AL    16
#define _AL2   17
#define _AL3   18
#define _AL15  19
#define _AL16  20
#define _AL17  21
#define _DI    22
#define _DI3   23
#define _DL2   24



#include "inet_ai_10.h"
#include "inet_ai_11.h"
#include "inet_ai_12.h"
#include "inet_ai_13.h"
#include "inet_ai_14.h"
#include "inet_ai_15.h"
#include "inet_ai_16.h"
#include "inet_ai_17.h"
#include "inet_ai_18.h"
#include "inet_ai_19.h"
#include "inet_ai_6.h"
#include "inet_di_4.h"
#include "inet_di_5.h"
#include "lnet_ai4.h"
#include "lnet_ai8.h"
#include "lnet_ai9.h"
#include "lnet_al.h"
#include "lnet_al2.h"
#include "lnet_al3.h"
#include "lnet_al5.h"
#include "lnet_al6.h"
#include "lnet_al7.h"
#include "lnet_di.h"
#include "lnet_di3.h"
#include "lnet_dl2.h"

namespace Ui {
class D2;
}

class D2 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit D2(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem);
    ~D2();

public slots:

    void ctlVenActivacion(int id);
    void cerrarVentana(int i);
    //Slot para crear una ventana emergente determinada por el usuario
    void sltCrearVentanaAI_10();
    void sltCrearVentanaAI_11();
    void sltCrearVentanaAI_12();
    void sltCrearVentanaAI_13();
    void sltCrearVentanaAI_14();
    void sltCrearVentanaAI_15();
    void sltCrearVentanaAI_16();
    void sltCrearVentanaAI_17();
    void sltCrearVentanaAI_18();
    void sltCrearVentanaAI_19();
    void sltCrearVentanaAI_6();
    void sltCrearVentanaDI_4();
    void sltCrearVentanaDI_5();
    void sltCrearVentanaAI_4();
    void sltCrearVentanaAI_8();
    void sltCrearVentanaAI_9();

    void sltCrearVentanaA1();
    void sltCrearVentanaA12();
    void sltCrearVentanaA13();
    void sltCrearVentanaA15();
    void sltCrearVentanaA16();
    void sltCrearVentanaA17();
    void sltCrearVentanaDI();
    void sltCrearVentanaD3();
    void sltCrearVentanaD12();

    //Slot para validar que ventana seleccionamos

    void sltSeleccionarVentana(int id);
    
private:


    //Arreglo de control para la creacion de ventanas emergentes
    bool ctrVen[25];
    //Variables de control para el comportamiento de ventanas emergentes
    int venActual;
    bool moving;
    long posX;
    long posY;

    //Identificador de ventana emergente
    int Id;

    //Instancia de elementos de la interfaz
    Ui::D2 *ui;
    Header *header;

    //Ventanas emergentes
    Inet_AI_10 *v_inet_AI_10;
    Inet_AI_11 *v_inet_AI_11;
    Inet_AI_12 *v_inet_AI_12;
    Inet_AI_13 *v_inet_AI_13;
    Inet_AI_14 *v_inet_AI_14;
    Inet_AI_15 *v_inet_AI_15;
    Inet_AI_16 *v_inet_AI_16;
    Inet_AI_17 *v_inet_AI_17;
    Inet_AI_18 *v_inet_AI_18;
    Inet_AI_19 *v_inet_AI_19;
    Inet_AI_6  *v_inet_AI_6;
    Inet_DI_4  *v_inet_DI_4;
    Inet_DI_5  *v_inet_DI_5;
    LNET_AI4  *v_lnet_AI4;
    LNET_AI8  *v_lnet_AI8;
    LNET_AI9  *v_lnet_AI9;

    LNET_Al   *v_lnet_Al;
    lnet_al2  *v_lnet_a12;
    LNET_Al3  *v_lnet_a13;
    LNET_Al5  *v_lnet_a15;
    LNET_Al6  *v_lnet_a16;
    LNET_Al7  *v_lnet_a17;
    LNET_DI   *v_lnet_dI;
    LNET_DI3  *v_lnet_d3;
    LNET_Dl2  *v_lnet_d12;



protected:
    void mouseMoveEvent( QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *event);

};

#endif // D2_H


