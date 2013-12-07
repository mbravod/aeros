#ifndef B2_H
#define B2_H

#include <QWidget>
#include "Abstract/pantallas.h"
#include "../header.h"

namespace Ui {
    class B2;
}

class B2 : public Pantallas
{
    Q_OBJECT

public:
    explicit B2(SiTTuGAs *siTTuGAs,HTTPRequest *shrdMem);
    ~B2();

private:
    Ui::B2 *ui;
    Header *header;
};

#endif // B2_H
