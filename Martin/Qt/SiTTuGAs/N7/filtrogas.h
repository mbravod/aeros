#ifndef FILTROGAS_H
#define FILTROGAS_H

#include <QWidget>
#include "Abstract/pantallas.h"
#include "Extras/bob_digital_pf.h"
#include <QPoint>
#include <QMouseEvent>

namespace Ui {
class filtroGas;
}

class N7 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit N7(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem);
    ~N7();
    
private:
    Ui::filtroGas *ui;
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

#endif // FILTROGAS_H
