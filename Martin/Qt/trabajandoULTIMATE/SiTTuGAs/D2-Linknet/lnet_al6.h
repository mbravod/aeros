#ifndef LNET_AL6_H
#define LNET_AL6_H

#define _AL16  20
#include <QWidget>
#include <QMouseEvent>

namespace Ui {
    class LNET_Al6;
}

class LNET_Al6 : public QWidget
{
    Q_OBJECT

public:
    explicit LNET_Al6(QWidget *parent = 0);
    ~LNET_Al6();

private:
    Ui::LNET_Al6 *ui;

public slots:
    void idWindow(int id);
    void cerrar();


signals:
    void clicked (int id);
    void mi_id(int id);

protected:
    void mousePressEvent(QMouseEvent * event);

};

#endif // LNET_AL6_H
