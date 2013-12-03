#ifndef B3_H
#define B3_H

#include <QWidget>

#include "Abstract/pantallas.h"
#include "sistema_lubricante_turbina_2.h"
#include "../header.h"

namespace Ui {
class B3;
}

class B3 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit B3(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem);
    ~B3();

private slots:
    void STemp1(double t);
    void STemp2(double t);
    void STemp3(double t);
    void STemp4(double t);
    void STemp5(double t);
    void STemp6(double t);
    void STemp7(double t);
    void Model();
    
private:
    Ui::B3 *ui;
    SISTEMA_LUBRICANTE_TURBINA_2 *modelo;
    Header *header;

};

#endif // B3_H
