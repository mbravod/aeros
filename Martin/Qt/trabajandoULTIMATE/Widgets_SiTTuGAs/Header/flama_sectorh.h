#ifndef FLAMA_SECTORH_H
#define FLAMA_SECTORH_H


#include "../Base/Base.h"
#include <QString>
#include <QtSvg/QSvgRenderer>
#include <QPainter>
#include <QtSvg/QtSvg>
#include <QTimer>


class Flama_SectorH : public Base
{
    Q_OBJECT
    
public:
    Flama_SectorH(QWidget *parent = 0);
    ~Flama_SectorH();
    void setActivarH(bool opt);
    bool getActivarH()const{ return bolAnimado;}
    void setTransicionH(bool bolT);
    void initH();

    void cambioCapaH(int capa);
    void iniciaAnimacionH();
    void iniciaTransicionH();

public slots:
    void realizarAnimacionH();
    void realizarTransicionH();


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
