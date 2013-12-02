#ifndef WBOMBA_H
#define WBOMBA_H
#include "Base.h"
#include <QString>
#include <QtSvg/QSvgRenderer>
#include <QPainter>
#include <QtSvg/QtSvg>
#include <QTimer>

class wBomba : public Base
{
    Q_OBJECT

public:
    wBomba(QWidget *parent = 0);
    ~wBomba();
    void setActivarBomba(bool opt);
    bool getActivarBomba()const{ return bolAnimado;}
    void setTransicionBomba(bool bolT);
    void initBomba();

    void cambioCapaBomba(int capa);
    void iniciaAnimacionBomba();
    void iniciaTransicionBomba();


public slots:
    void realizarAnimacionBomba();
    void realizarTransicionBomba();

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
