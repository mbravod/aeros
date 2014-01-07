#ifndef LNET_DI_H
#define LNET_DI_H

#include <QWidget>
#include <QMouseEvent>
#define _DI    22

namespace Ui {
    class LNET_DI;
}

class LNET_DI : public QWidget
{
    Q_OBJECT

public:
    explicit LNET_DI(QWidget *parent = 0);
    ~LNET_DI();

private:
    Ui::LNET_DI *ui;

public slots:
    void idWindow(int id);
    void cerrar();


signals:
    void clicked (int id);
    void mi_id(int id);

protected:
    void mousePressEvent(QMouseEvent * event);

};

#endif // LNET_DI_H
