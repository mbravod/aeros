#ifndef DESC_2_H
#define DESC_2_H

#include <QWidget>
#include <QMouseEvent>

namespace Ui {
class DESC_2;
}

class DESC_2 : public QWidget
{
    Q_OBJECT
    
public:
    explicit DESC_2(QWidget *parent = 0);
    ~DESC_2();
    
private:
    Ui::DESC_2 *ui;

public slots:
    void cerrar();


signals:
    void cerrarVentana(bool id);
    void clicked(bool c);

protected:
    void mousePressEvent(QMouseEvent *e);


};

#endif // DESC_2_H
