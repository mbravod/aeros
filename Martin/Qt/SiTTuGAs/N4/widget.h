#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "Abstract/pantallas.h"

namespace Ui {
class Widget;
}

class N4 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit N4(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem);
    ~N4();
    
private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
