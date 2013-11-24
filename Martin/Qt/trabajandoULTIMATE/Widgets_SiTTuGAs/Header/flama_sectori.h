#ifndef FLAMA_SECTORI_H
#define FLAMA_SECTORI_H

#include "../Base/Base.h"
#include <QString>
#include <QtSvg/QSvgRenderer>
#include <QPainter>
#include <QtSvg/QtSvg>
#include <QTimer>


class Flama_SectorI : public Base
{
    Q_OBJECT
    
public:
    Flama_SectorI(QWidget *parent = 0);
    ~Flama_SectorI();
    void setActivarI(bool opt);
    bool getActivarI()const{ return bolAnimado;}
    void setTransicionI(bool bolT);
    void initI();

    void cambioCapaI(int capa);
    void iniciaAnimacionI();
    void iniciaTransicionI();

public slots:
    void realizarAnimacionI();
    void realizarTransicionI();


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
