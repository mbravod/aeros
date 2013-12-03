#ifndef BOB_DIGITAL_PF1_H
#define BOB_DIGITAL_PF1_H

#include <QWidget>
#include <QMouseEvent>

namespace Ui {
class BOB_DIGITAL_PF1;
}

class BOB_DIGITAL_PF1 : public QWidget
{
    Q_OBJECT
    
public:
    explicit BOB_DIGITAL_PF1(QWidget *parent = 0);
    ~BOB_DIGITAL_PF1();
    
private:
    Ui::BOB_DIGITAL_PF1 *ui;

public slots:
    void cerrar();


signals:
    void cerrarVentana(bool id);
    void clicked(bool c);


protected:
    void mousePressEvent(QMouseEvent *e);

};

#endif // BOB_DIGITAL_PF1_H
