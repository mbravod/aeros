#ifndef B4_H
#define B4_H

#include <QWidget>
#include "Abstract/pantallas.h"
#include "../header.h"

namespace Ui {
    class B4;
}

class B4 : public Pantallas
{
    Q_OBJECT

public:
    explicit B4(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem);
    ~B4();

private:
    Ui::B4 *ui;
    Header *header;
};

#endif // B4_H
