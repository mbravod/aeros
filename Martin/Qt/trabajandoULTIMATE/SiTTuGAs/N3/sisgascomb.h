#ifndef SISGASCOMB_H
#define SISGASCOMB_H

#include <QWidget>
#include "Abstract/pantallas.h"
#include "Extras/bob_digital_pf.h"
#include "Extras/bob_digital_pf1.h"
#include "Extras/desc1.h"
#include "Extras/desc_2.h"
#include <QPoint>
#include <QMouseEvent>

namespace Ui {
class SisGasComb;
}

class N3 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit N3(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem);
    ~N3();
    
private:
    Ui::SisGasComb *ui;
    BOB_DIGITAL_PF1 *v_emergente1;
    BOB_DIGITAL_PF *v_emergente;

    DESC1 *v_emergente2;
    DESC_2 *v_emergente3;

    bool activado;
    bool moving;
    bool activado1;
    bool moving1;
    bool activado2;
    bool moving2;
    bool activado3;
    bool moving3;
    long posX;
    long posY;

public slots:
    void ventanaEmergente();
    void ctrVentanaEmergente(bool opt);
    void ctrlVentanaMovimiento(bool opt);
    void ventanaEmergente1();
    void ctrVentanaEmergente1(bool opt);
    void ctrlVentanaMovimiento1(bool opt);

    void ventanaEmergente2();
    void ctrVentanaEmergente2(bool opt);
    void ctrlVentanaMovimiento2(bool opt);

    void ventanaEmergente3();
    void ctrVentanaEmergente3(bool opt);
    void ctrlVentanaMovimiento3(bool opt);


protected:
    void mouseMoveEvent( QMouseEvent * e);
    void mouseReleaseEvent(QMouseEvent *event);


};

#endif // SISGASCOMB_H
