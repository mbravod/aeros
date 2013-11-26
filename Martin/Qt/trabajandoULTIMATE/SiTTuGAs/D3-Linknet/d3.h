#ifndef D3_H
#define D3_H

#include <QWidget>
#include "Abstract/pantallas.h"
#include "../header.h"
#include "n3n18.h"
#include "n3n39.h"
#include "n3n40.h"
#include "n3n41.h"
#include "n3n42.h"

#define analog04 0
#define analog08 1
#define analog08_2 2
#define analog16 3
#define analog16_2 4


namespace Ui {
class D3;
}

class D3 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit D3(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem);
    ~D3();
public slots:

    void SLTanalog04();
    void SLTanalog08();
    void SLTanalog08_2();
    void SLTanalog16();
    void SLTanalog16_2();
    void sltirA();


    void ctlVenActivacion(int id);
    void cerrarVentana(int i);

    //Slot para validar la eleccion de la ventana
    void sltSeleccionarVentana(int id);
signals:
    void irA(int i);
    
private:
    Ui::D3 *ui;
    Header *header;
    bool moving;
    long posX;
    long posY;
    int Id;
    int venActual;
    bool active;
    bool ctrVen[5];
    //Consideramos todas las subventanas emergentes
    N3N18 *eAnalog04;
    N3N39 *eAnalog08;
    N3N40  *eAnalog08_2;
    N3N41 *eAnalog16;
    N3N42 *eAnalog16_2;

protected:
    void mouseMoveEvent( QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *event);

};

#endif // D3_H
