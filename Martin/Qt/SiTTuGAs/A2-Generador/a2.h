#ifndef A2_H
#define A2_H

#include <QWidget>
#include "Abstract/pantallas.h"
#include "../header.h"
#include <QTimer>

namespace Ui {
class A2;
}

class A2 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit A2(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem);
    ~A2();
    
private:
    Ui::A2 *ui;
    Header *header;
    QTimer *timer;
    double valuenew;
public slots:
    void ActivarSimulacion();
    void Iniciar();
};

#endif // A2_H
