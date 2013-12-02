#ifndef FLAMA_SECTORJ_H
#define FLAMA_SECTORJ_H

#include "Base.h"
#include <QString>
#include <QtSvg/QSvgRenderer>
#include <QPainter>
#include <QtSvg/QtSvg>
#include <QTimer>


class Flama_SectorJ : public Base
{
    Q_OBJECT
    
public:
    Flama_SectorJ(QWidget *parent = 0);
    ~Flama_SectorJ();
    void setActivarJ(bool opt);
    bool getActivarJ()const{ return bolAnimado;}
    void setTransicionJ(bool bolT);
    void initJ();

    void cambioCapaJ(int capa);
    void iniciaAnimacionJ();
    void iniciaTransicionJ();

public slots:
    void realizarAnimacionJ();
    void realizarTransicionJ();


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
