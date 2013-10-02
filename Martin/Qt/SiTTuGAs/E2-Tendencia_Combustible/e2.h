#ifndef E2_H
#define E2_H

#include <QWidget>
#include "Abstract/pantallas.h"

namespace Ui {
class E2;
}

class E2 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit E2(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem);
    ~E2();
    
private:
    Ui::E2 *ui;
};

#endif // E2_H
