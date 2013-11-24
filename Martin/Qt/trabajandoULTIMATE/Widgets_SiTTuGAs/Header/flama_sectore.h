#ifndef FLAMA_SECTORE_H
#define FLAMA_SECTORE_H

#include "../Base/Base.h"
#include <QString>
#include <QtSvg/QSvgRenderer>
#include <QPainter>
#include <QtSvg/QtSvg>
#include <QTimer>


class Flama_SectorE : public Base
{
    Q_OBJECT
    
public:
    Flama_SectorE(QWidget *parent = 0);
    ~Flama_SectorE();
    void setActivarE(bool opt);
    bool getActivarE()const{ return bolAnimado;}
    void setTransicionE(bool bolT);
    void initE();

    void cambioCapaE(int capa);
    void iniciaAnimacionE();
    void iniciaTransicionE();

public slots:
    void realizarAnimacionE();
    void realizarTransicionE();


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
