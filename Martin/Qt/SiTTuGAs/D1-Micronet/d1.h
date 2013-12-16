#ifndef D1_H
#define D1_H

#include <QWidget>
#include <QString>
#include "Abstract/pantallas.h"
#include "../header.h"

#include "analog04.h"
#include "analog08.h"
#include "analog08_2.h"
#include "analog16.h"
#include "analog16_2.h"
#include "analog16_3.h"
#include "analog24.h"
#include "analog24_s2.h"
#include "digital16.h"
#include "digital24.h"
#include "digital24_2.h"

#define analog04 0
#define analog08 1
#define analog08_2 2
#define analog16 3
#define analog16_2 4
#define analog16_3 5
#define analog24 6
#define analog24_s2 7
#define digital16 8
#define digital24 9
#define digital24_2 10





namespace Ui {
    class D1;
}

class D1 : public Pantallas
{
    Q_OBJECT

public:
    explicit D1(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem);
    ~D1();
    void cerrarVentanasEmergentes();
    void setLbInd_1(QString s);
    void setLbInd_2(QString s);
    void setLbInd_3(QString s);
    void setLbInd_4(QString s);
    void setLbInd_5(QString s);
    void setLbInd_6(QString s);
    void setLbInd_7(QString s);
    void setLbInd_8(QString s);
    void setLbInd_9(QString s);

    void setLbInd_10(QString s);
    void setLbInd_11(QString s);
    void setLbInd_12(QString s);
    void setLbInd_13(QString s);
    void setLbInd_14(QString s);
    void setLbInd_15(QString s);
    void setLbInd_16(QString s);
    void setLbInd_17(QString s);
    void setLbInd_18(QString s);
    void setLbInd_19(QString s);

    void setLbInd_20(QString s);
    void setLbInd_21(QString s);
    void setLbInd_22(QString s);
    void setLbInd_23(QString s);
    void setLbInd_24(QString s);
    void setLbInd_25(QString s);
    void setLbInd_26(QString s);
    void setLbInd_27(QString s);
    void setLbInd_28(QString s);
    void setLbInd_29(QString s);
    void setLbInd_30(QString s);
    void setLbInd_31(QString s);
    void setLbInd_32(QString s);
signals:
    void irA(int );

public slots:

    void SLTanalog04();
    void SLTanalog08();
    void SLTanalog08_2();
    void SLTanalog16();
    void SLTanalog16_2();
    void SLTanalog16_3();
    void SLTanalog24();
    void SLTanalog24_s2();
    void SLTdigital16();
    void SLTdigital24();
    void SLTdigital24_2();
    void sltIrD2();
    void sltIrD3();


    void ctlVenActivacion(int id);
    void cerrarVentana(int i);

    //Slot para validar la eleccion de la ventana
    void sltSeleccionarVentana(int id);
private:
    Ui::D1 *ui;
    Header *header;
    bool moving;
    long posX;
    long posY;
    int Id;
    int venActual;
    bool active;
    bool ctrVen[11];
    //Consideramos todas las subventanas emergentes
    Analog04 *eAnalog04;
    Analog08 *eAnalog08;
    Analog08_2  *eAnalog08_2;
    Analog16 *eAnalog16;
    Analog16_2 *eAnalog16_2;
    Analog16_3 *eAnalog16_3;
    Analog24 *eAnalog24;
    Analog24_S2 *eAnalog24_s2;
    Digital16 *eDigital16;
    Digital24 *eDigital24;
    Digital24_2 *eDigital24_2;


protected:
    void mouseMoveEvent( QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *event);
};

#endif // D1_H
