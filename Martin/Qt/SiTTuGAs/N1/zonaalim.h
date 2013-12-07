#ifndef ZONAALIM_H
#define ZONAALIM_H

#include <QWidget>
#include <QPoint>
#include <QMouseEvent>
#include "Abstract/pantallas.h"
#include "Extras/desc_2.h"



namespace Ui {
class zonaAlim;
}

class N1 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit N1(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem);
    ~N1();
    
private:
    Ui::zonaAlim *ui;
    bool activado;
    bool moving;
    long posX;
    long posY;
    DESC_2 *v_emergente;


public slots:
    void ventanaTablaRelay();
    void ventanaEmergente();
    void ctrVentanaEmergente(bool opt);
    void ctrlVentanaMovimiento(bool opt);


protected:
    void mouseMoveEvent( QMouseEvent * e);
    void mouseReleaseEvent(QMouseEvent *event);
};

#endif // ZONAALIM_H
