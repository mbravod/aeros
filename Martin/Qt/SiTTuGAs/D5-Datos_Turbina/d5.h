#ifndef D5_H
#define D5_H

#include <QWidget>

#include "Abstract/pantallas.h"

namespace Ui {
class D5;
}

class D5 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit D5(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem);
    ~D5();
    
private:
    Ui::D5 *ui;
};

#endif // D5_H
