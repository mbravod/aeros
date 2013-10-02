#ifndef ALED_H
#define ALED_H

#include "awmultestatewidget.h"

class ALed : public AWMultEstateWidget
{
    Q_OBJECT

public:
    ALed(QWidget *parent = 0);
private:
     void init();
protected:
    void AWPaintEvent();
};

#endif
