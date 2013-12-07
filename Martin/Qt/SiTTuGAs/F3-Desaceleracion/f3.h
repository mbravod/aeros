#ifndef F3_H
#define F3_H

#include <QWidget>
#include "Abstract/pantallas.h"
#include "../header.h"

namespace Ui {
class F3;
}

class F3 : public Pantallas
{
    Q_OBJECT
    
public:
    explicit F3(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem);
    ~F3();
    
private:
    Ui::F3 *ui;
    Header *header;
};

#endif // F3_H
