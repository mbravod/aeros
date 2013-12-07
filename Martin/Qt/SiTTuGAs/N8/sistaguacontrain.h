#ifndef SISTAGUACONTRAIN_H
#define SISTAGUACONTRAIN_H

#include <QWidget>
#include "Abstract/pantallas.h"
#include "Extras/bob_digital_pf.h"
#include "Extras/bob_digital_pf1.h"
#include <QPoint>
#include <QMouseEvent>

namespace Ui {
class SistAguaContrain;
}

class N8 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit N8(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem);
    ~N8();
    
private:
    Ui::SistAguaContrain *ui;
    BOB_DIGITAL_PF *v_emergente;
    BOB_DIGITAL_PF1 *v_emergente1;
    bool activado;
    bool moving;
    bool activado1;
    bool moving1;
    long posX;
    long posY;

public slots:
    void ventanaEmergente();
    void ctrVentanaEmergente(bool opt);
    void ctrlVentanaMovimiento(bool opt);
    void ventanaEmergente1();
    void ctrVentanaEmergente1(bool opt);
    void ctrlVentanaMovimiento1(bool opt);
protected:
    void mouseMoveEvent( QMouseEvent * e);
    void mouseReleaseEvent(QMouseEvent *event);

};

#endif // SISTAGUACONTRAIN_H
