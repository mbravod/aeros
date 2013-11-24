#ifndef LNET_DI3_H
#define LNET_DI3_H

#include <QWidget>
#include <QMouseEvent>
#define _DI3   23
namespace Ui {
    class LNET_DI3;
}

class LNET_DI3 : public QWidget
{
    Q_OBJECT

public:
    explicit LNET_DI3(QWidget *parent = 0);
    ~LNET_DI3();

private:
    Ui::LNET_DI3 *ui;

public slots:
    void idWindow(int id);
    void cerrar();


signals:
    void clicked (int id);
    void mi_id(int id);

protected:
    void mousePressEvent(QMouseEvent * event);

};

#endif // LNET_DI3_H
