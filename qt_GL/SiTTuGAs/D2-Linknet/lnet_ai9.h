#ifndef LNET_AI9_H
#define LNET_AI9_H

#define _AI9   15
#include <QWidget>
#include <QMouseEvent>

namespace Ui {
    class LNET_AI9;
}

class LNET_AI9 : public QWidget
{
    Q_OBJECT

public:
    explicit LNET_AI9(QWidget *parent = 0);
    ~LNET_AI9();

private:
    Ui::LNET_AI9 *ui;

public slots:
    void idWindow(int id);
    void cerrar();


signals:
    void clicked (int id);
    void mi_id(int id);

protected:
    void mousePressEvent(QMouseEvent * event);

};

#endif // LNET_AI9_H
