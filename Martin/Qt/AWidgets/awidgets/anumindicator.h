#ifndef ANUMINDICATOR_H
#define ANUMINDICATOR_H

#include "awmultestatewidget.h"
#include <QSvgRenderer>


class ANumIndicator : public AWMultEstateWidget
{
    Q_OBJECT

public:
    ANumIndicator(QWidget *parent = 0);
    void Update();
private:
    void init();
protected:
    void AWPaintEvent();

    bool loadSvgFile(QString filePath);
    QSvgRenderer * m_SVGrenderer;
    bool flag;
};

#endif
