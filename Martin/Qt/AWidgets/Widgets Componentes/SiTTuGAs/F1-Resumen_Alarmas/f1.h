#ifndef F1_H
#define F1_H

#include <QWidget>
#include "Abstract/pantallas.h"
#include "../header.h"

namespace Ui {
class F1;
}

class F1 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit F1(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem);
    ~F1();
    
private:
    Ui::F1 *ui;
    Header *header;
};

#endif // F1_H
