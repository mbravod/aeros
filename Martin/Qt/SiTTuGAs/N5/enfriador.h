#ifndef ENFRIADOR_H
#define ENFRIADOR_H

#include <QWidget>
#include "Abstract/pantallas.h"
#include "Extras/bob_digital_pf.h"
#include <QPoint>
#include <QMouseEvent>

namespace Ui {
class ENFRIADOR;
}

class N5 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit N5(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem);
    ~N5();
    
private:
    Ui::ENFRIADOR *ui;
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

#endif // ENFRIADOR_H
