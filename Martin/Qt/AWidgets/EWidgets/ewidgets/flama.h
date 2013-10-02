#ifndef FLAMA_H
#define FLAMA_H

#include "../base/base.h"
#include <QtSvg/QSvgRenderer>
#include <QString>
#include <QDebug>

#define X_OFFSET 10
#define Y_OFFSET 10

class Flama : public base
{
    Q_OBJECT
    
public:
    Flama(QWidget *parent = 0);

private:
    void init();

protected:
    void EWPaintEvent();
    bool loadSvgFile(QString filePAth);
    QSvgRenderer * m_SvGrenderer;
    bool flag;


};

#endif
