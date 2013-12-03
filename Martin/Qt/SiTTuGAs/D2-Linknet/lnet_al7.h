#ifndef LNET_AL7_H
#define LNET_AL7_H

#define _AL17  21
#include <QWidget>
#include <QMouseEvent>

namespace Ui {
    class LNET_Al7;
}

class LNET_Al7 : public QWidget
{
    Q_OBJECT

public:
    explicit LNET_Al7(QWidget *parent = 0);
    ~LNET_Al7();

private:
    Ui::LNET_Al7 *ui;

public slots:
    void idWindow(int id);
    void cerrar();


signals:
    void clicked (int id);
    void mi_id(int id);

protected:
    void mousePressEvent(QMouseEvent * event);


};

#endif // LNET_AL7_H
