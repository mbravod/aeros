#ifndef COMPRESORGAS_H
#define COMPRESORGAS_H

#include <QWidget>
#include "Abstract/pantallas.h"
#include "Extras/bob_digital_pf.h"
#include <QPoint>
#include <QMouseEvent>

namespace Ui {
class CompresorGas;
}

class N6 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit N6(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem);
    ~N6();
    
private:
    Ui::CompresorGas *ui;
    BOB_DIGITAL_PF *v_emergente;
    bool activado;
    bool moving;
    long posX;
    long posY;



public slots:
    void ventanaEmergente();
    void ctrVentanaEmergente(bool opt);
    void ctrlVentanaMovimiento(bool opt);


protected:
    void mouseMoveEvent( QMouseEvent * e);
    void mouseReleaseEvent(QMouseEvent *event);

};

#endif // COMPRESORGAS_H
