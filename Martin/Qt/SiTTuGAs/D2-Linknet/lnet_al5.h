#ifndef LNET_AL5_H
#define LNET_AL5_H
#define _AL15  19
#include <QWidget>
#include <QMouseEvent>

namespace Ui {
    class LNET_Al5;
}

class LNET_Al5 : public QWidget
{
    Q_OBJECT

public:
    explicit LNET_Al5(QWidget *parent = 0);
    ~LNET_Al5();

private:
    Ui::LNET_Al5 *ui;

public slots:
    void idWindow(int id);
    void cerrar();


signals:
    void clicked (int id);
    void mi_id(int id);

protected:
    void mousePressEvent(QMouseEvent * event);
};

#endif // LNET_AL5_H
