#ifndef LNET_AL2_H
#define LNET_AL2_H

#include <QWidget>
#include <QMouseEvent>
#define _AL2   17

namespace Ui {
    class lnet_al2;
}

class lnet_al2 : public QWidget
{
    Q_OBJECT

public:
    explicit lnet_al2(QWidget *parent = 0);
    ~lnet_al2();

private:
    Ui::lnet_al2 *ui;

public slots:
    void idWindow(int id);
    void cerrar();


signals:
    void clicked (int id);
    void mi_id(int id);

protected:
    void mousePressEvent(QMouseEvent * event);
};

#endif // LNET_AL2_H
