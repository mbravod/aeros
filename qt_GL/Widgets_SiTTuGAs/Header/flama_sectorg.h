#ifndef FLAMA_SECTORG_H
#define FLAMA_SECTORG_H

#include "Base.h"
#include <QString>
#include <QtSvg/QSvgRenderer>
#include <QPainter>
#include <QtSvg/QtSvg>
#include <QTimer>


class Flama_SectorG : public Base
{
    Q_OBJECT
    
public:
    Flama_SectorG(QWidget *parent = 0);
    ~Flama_SectorG();
    void setActivarG(bool opt);
    bool getActivarG()const{ return bolAnimado;}
    void setTransicionG(bool bolT);
    void initG();

    void cambioCapaG(int capa);
    void iniciaAnimacionG();
    void iniciaTransicionG();

public slots:
    void realizarAnimacionG();
    void realizarTransicionG();


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
