#ifndef F4_H
#define F4_H

#include <QWidget>
#include "Abstract/pantallas.h"
#include "../header.h"

namespace Ui {
class F4;
}

class F4 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit F4(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem);
    ~F4();
    
private:
    Ui::F4 *ui;
    Header *header;
};

#endif // F4_H
