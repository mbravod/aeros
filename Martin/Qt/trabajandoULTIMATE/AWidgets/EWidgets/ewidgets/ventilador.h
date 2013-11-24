#ifndef VENTILADOR_H
#define VENTILADOR_H

#include <QWidget>
#include <QPainter>
#include <QDebug>
#include <QTimer>
#include <QtSvg/QSvgRenderer>
#include <QtSvg/QtSvg>
#include <QPen>
#include <QString>

//Valores definidos para la presentacion de la imagen
#define X_OFFSET 10
#define Y_OFFSET 10

class Ventilador : public QWidget
{
    Q_OBJECT
    Q_PROPERTY(bool activar READ activar  WRITE setActivar)
//Constructor de la interfaz
public:
    Ventilador(QWidget *parent = 0);
    ~Ventilador();
    //Implementamos la activacion de la animacion
    bool activar()const{
        return inicio;
    }
    void setActivar(bool opt);
    int side;
    int w;
    int h;

//Elementos para controlar la animacion
private:
    QTimer *timer;
    void init(bool opt);
    bool inicio;
    void loadSvgFile(QString filePath);
    QSvgRenderer * m_SvGrenderer;
    bool cambio;

//Metodo que presenta la imagene en la ventana (GUI)
protected:
    void paintEvent(QPaintEvent *);

//Cambiamos el estado de la imagen (presentamos deferentes imagenes para cada estado)
public slots:
    void animacion();



};

#endif
