#ifndef LNET_AL3_H
#define LNET_AL3_H

#define _AL3   18
#include <QWidget>
#include <QMouseEvent>


namespace Ui {
    class LNET_Al3;
}

class LNET_Al3 : public QWidget
{
    Q_OBJECT

public:
    explicit LNET_Al3(QWidget *parent = 0);
    ~LNET_Al3();

private:
    Ui::LNET_Al3 *ui;

public slots:
    void idWindow(int id);
    void cerrar();


signals:
    void clicked (int id);
    void mi_id(int id);

protected:
    void mousePressEvent(QMouseEvent * event);
};

#endif // LNET_AL3_H
