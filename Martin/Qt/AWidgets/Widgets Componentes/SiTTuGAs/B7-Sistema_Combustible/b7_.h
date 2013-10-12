#ifndef B7_H
#define B7_H

#include <QWidget>

#include "Abstract/pantallas.h"

#include "Abstract/pantallas.h"

namespace Ui {
class B7;
}

class B7 : public QWidget, public Pantallas
{
    Q_OBJECT
    
public:
    explicit B7(QWidget *parent = 0);
    ~B7();
    
private:
    Ui::B7 *ui;
};

#endif // B7_H
