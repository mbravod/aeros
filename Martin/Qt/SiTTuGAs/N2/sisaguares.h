#ifndef SISAGUARES_H
#define SISAGUARES_H

#include <QWidget>
#include "Abstract/pantallas.h"
#include "Extras/bob_digital_pf.h"
#include <QPoint>
#include <QMouseEvent>

namespace Ui {
class SisAguaRes;
}

class N2 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit N2(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem);
    ~N2();
    
private:
    Ui::SisAguaRes *ui;
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

#endif // SISAGUARES_H
