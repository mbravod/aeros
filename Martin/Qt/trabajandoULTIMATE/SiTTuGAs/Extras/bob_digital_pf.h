#ifndef BOB_DIGITAL_PF_H
#define BOB_DIGITAL_PF_H

#include <QWidget>
#include <QMouseEvent>


namespace Ui {
class BOB_DIGITAL_PF;
}

class BOB_DIGITAL_PF : public QWidget
{
    Q_OBJECT
    
public:
    explicit BOB_DIGITAL_PF(QWidget *parent = 0);
    ~BOB_DIGITAL_PF();
    
private:
    Ui::BOB_DIGITAL_PF *ui;

public slots:
    void cerrar();


signals:
    void cerrarVentana(bool id);
    void clicked(bool c);

protected:
    void mousePressEvent(QMouseEvent *e);


};

#endif // BOB_DIGITAL_PF_H
