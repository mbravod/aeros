#ifndef B8_H
#define B8_H

#include <QWidget>
#include "Abstract/pantallas.h"
#include "../header.h"

namespace Ui {
class B8;
}

class B8 :public Pantallas
{
    Q_OBJECT
    
public:
    explicit B8(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem);
    ~B8();
    
private:
    Ui::B8 *ui;
    Header *header;
    int contadorPrueba;

public slots:
    void comenzarAnimacion();

};

#endif // B8_H
