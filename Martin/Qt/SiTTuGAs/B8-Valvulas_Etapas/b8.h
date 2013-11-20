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
    explicit B8(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem);
    ~B8();
    
private:
    Ui::B8 *ui;
    Header *header;

public slots:
    void comenzarAnimacion();
    void detenerAnimacion();
};

#endif // B8_H