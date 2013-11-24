#ifndef FLAMA_SECTORB_H
#define FLAMA_SECTORB_H

#include "../Base/Base.h"
#include <QString>
#include <QtSvg/QSvgRenderer>
#include <QPainter>
#include <QtSvg/QtSvg>
#include <QTimer>

class Flama_SectorB : public Base
{
    Q_OBJECT

public:
    Flama_SectorB(QWidget *parent = 0);
    ~Flama_SectorB();
    void setActivarB(bool opt);
    bool getActivarB()const{ return bolAnimado;}
    void setTransicionB(bool bolT);
    void initB();

    void cambioCapaB(int capa);
    void iniciaAnimacionB();
    void iniciaTransicionB();


public slots:
    void realizarAnimacionB();
    void realizarTransicionB();

private:

       QTimer *timerAnimado;
       QTimer *timerTransicion;
       bool cambio;
       bool cambioT;
       bool inicio;
       QString capaActual;
       bool bolAnimado;
       bool bolTransicion;
       int contadorAnimado;
       int contadorTransicion;
       //Variables para la presentacion del widget en pantalla
       QSvgRenderer * m_SvGrenderer;
       bool flag;
       void loadSvgFile(QString filePath);


protected:
    void Update();
    void wPaintEvent();




};

#endif
