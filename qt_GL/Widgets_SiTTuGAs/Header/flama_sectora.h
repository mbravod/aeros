#ifndef FLAMA_SECTORA_H
#define FLAMA_SECTORA_H

#include "Base.h"
#include <QString>
#include <QtSvg/QSvgRenderer>
#include <QPainter>
#include <QtSvg/QtSvg>
#include <QTimer>

class Flama_SectorA : public Base
{
    Q_OBJECT
    
public:
    Flama_SectorA(QWidget *parent = 0);
    ~Flama_SectorA();
    void cambioCapaA(int capa);

private:
    //No se recomienda pero pasaremos estos atributos a los widgets para no repetir tanto codigo (pues son las
    //mismas variables para los widgets de flamas)
    QString capaActual;
    bool flag;
    //Variables para la presentacion del widget en pantalla
    QSvgRenderer * m_SvGrenderer;
    void loadSvgFile(QString filePath);

protected:
    void Update();
    void wPaintEvent();
};

#endif
