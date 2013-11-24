#ifndef BASE_H
#define BASE_H

#include <QWidget>

class base : public QWidget
{
    Q_OBJECT
    //Macros para los setter´s y getter´s
    Q_PROPERTY (int intID READ intID WRITE setIntID)
    Q_PROPERTY (int Value READ Value WRITE setValue)



public:
    base(QWidget *parent = 0);

    int intID()const{return id;}
    void setIntID(int id);
    
    int Value()const{return m_value;}
    void setValue(int);
    //Elementos protegidos


private:
    void init();


protected:
    int id;
    //Este metodo se redefine en las clases que lo heredan
    void paintEvent(QPaintEvent *);
    //Investigar la funcionalidad de "virtual"
    virtual void EWPaintEvent();
    int m_value;

signals:
    
public slots:
    
};

#endif // BASE_H
