#ifndef DESC1_H
#define DESC1_H

#include <QWidget>
#include <QMouseEvent>

namespace Ui {
class DESC1;
}

class DESC1 : public QWidget
{
    Q_OBJECT
    
public:
    explicit DESC1(QWidget *parent = 0);
    ~DESC1();
    
private:
    Ui::DESC1 *ui;

public slots:
    void cerrar();


signals:
    void cerrarVentana(bool id);
    void clicked(bool c);

protected:
    void mousePressEvent(QMouseEvent *e);



};

#endif // DESC1_H
