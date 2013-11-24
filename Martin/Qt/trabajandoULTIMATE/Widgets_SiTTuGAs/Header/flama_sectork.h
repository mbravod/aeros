#ifndef FLAMA_SECTORK_H
#define FLAMA_SECTORK_H

#include "../Base/Base.h"
#include <QString>
#include <QtSvg/QSvgRenderer>
#include <QPainter>
#include <QtSvg/QtSvg>
#include <QTimer>


class Flama_SectorK : public Base
{
    Q_OBJECT
    
public:
    Flama_SectorK(QWidget *parent = 0);
    ~Flama_SectorK();
    void setActivarK(bool opt);
    bool getActivarK()const{ return bolAnimado;}
    void setTransicionK(bool bolT);
    void initK();

    void cambioCapaK(int capa);
    void iniciaAnimacionK();
    void iniciaTransicionK();

public slots:
    void realizarAnimacionK();
    void realizarTransicionK();


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
