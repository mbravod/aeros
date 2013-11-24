#ifndef FLAMA_SECTORC_H
#define FLAMA_SECTORC_H

#include "../Base/Base.h"
#include <QString>
#include <QtSvg/QSvgRenderer>
#include <QPainter>
#include <QtSvg/QtSvg>
#include <QTimer>

class Flama_SectorC : public Base
{
    Q_OBJECT
    
public:
    Flama_SectorC(QWidget *parent = 0);
    ~Flama_SectorC();
    void setActivarC(bool opt);
    bool getActivarC()const{ return bolAnimado;}
    void setTransicionC(bool bolT);
    void initC();

    void cambioCapaC(int capa);
    void iniciaAnimacionC();
    void iniciaTransicionC();

public slots:
    void realizarAnimacionC();
    void realizarTransicionC();

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
