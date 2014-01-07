#ifndef E3_H
#define E3_H

#include <QWidget>
#include "Abstract/pantallas.h"

namespace Ui {
class E3;
}

class E3 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit E3(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem);
    ~E3();
    
private:
    Ui::E3 *ui;
};

#endif // E3_H
