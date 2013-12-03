#ifndef BASE_H
#define BASE_H

#include <QWidget>
#include <QString>

//Posiblemente cambiar esta referencia una vez que se defina el nombre
#include "../SharedMemory/httprequest.h"


class Base : public QWidget
{
    Q_OBJECT
    //Macro para declarar propiedades de la clase inherentes a QOBJECT()
    Q_PROPERTY(QString id READ getId WRITE setId )
    //Para este caso el tipo nos epecifica como se debe comportar el widget
    Q_PROPERTY(int tipo READ getTipo WRITE setTipo)
    //Q_PROPERTY (bool isUpdateable READ isUpdateable WRITE setUpdateable)

    //Simulando el comportamiento de la sharedMemory (valores que devulve)
    Q_PROPERTY(double valueF READ getValueF WRITE setValueF)

    Q_PROPERTY(int value READ getValue WRITE setValue)

    //Solo para cuestiones de prueba (es recomendable borrar las dos lineas anteriores)

public:
    explicit Base(QWidget *parent = 0);
    //Metodos setters y getters
    QString getId();
    int getTipo();
    int getIndice();
    int getValue();
    double getValueF()const{
        return valueF;
    }
    void setId(QString id);
    void setIndice(int indice);
    void setTipo(int tipo);
    void setValue(int value);
    void setValueF(double valueF);
    //Metodo para inicializar la sharedMemory
    void setShrdMem(HTTPRequest *s);
    //Metodo para acceder a los elementos de la SharedMemory
    bool isUpdateable()const{return m_isUpdateable;}
    void setUpdateable(bool u);

signals:

public slots:

protected:
    //Variables protegidas
    QString id;
    int tipo;
    int indice;
    bool m_isUpdateable;
    int value;
    double valueF;
    HTTPRequest *m_ShrdMem;
    void paintEvent(QPaintEvent *);
    virtual void Update();
    virtual void wPaintEvent();
    
};

#endif // BASE_H
