#ifndef LNET_DL2_H
#define LNET_DL2_H

#include <QMouseEvent>
#include <QWidget>
#define _DL2   24

namespace Ui {
    class LNET_Dl2;
}

class LNET_Dl2 : public QWidget
{
    Q_OBJECT

public:
    explicit LNET_Dl2(QWidget *parent = 0);
    ~LNET_Dl2();

private:
    Ui::LNET_Dl2 *ui;

public slots:
    void idWindow(int id);
    void cerrar();


signals:
    void clicked (int id);
    void mi_id(int id);

protected:
    void mousePressEvent(QMouseEvent * event);

};

#endif // LNET_DL2_H
