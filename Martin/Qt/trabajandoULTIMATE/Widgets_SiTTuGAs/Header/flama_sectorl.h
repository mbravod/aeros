#ifndef FLAMA_SECTORL_H
#define FLAMA_SECTORL_H


#include "Base.h"
#include <QString>
#include <QtSvg/QSvgRenderer>
#include <QPainter>
#include <QtSvg/QtSvg>
#include <QTimer>


class Flama_SectorL : public Base
{
    Q_OBJECT
    
public:
    Flama_SectorL(QWidget *parent = 0);
    ~Flama_SectorL();
    void setActivarL(bool opt);
    bool getActivarL()const{ return bolAnimado;}
    void setTransicionL(bool bolT);
    void initL();

    void cambioCapaL(int capa);
    void iniciaAnimacionL();
    void iniciaTransicionL();

public slots:
    void realizarAnimacionL();
    void realizarTransicionL();


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
