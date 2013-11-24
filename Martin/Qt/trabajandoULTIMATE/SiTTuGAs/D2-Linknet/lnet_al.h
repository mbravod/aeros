#ifndef LNET_AL_H
#define LNET_AL_H

#define _AL    16
#include <QWidget>
#include <QMouseEvent>

namespace Ui {
    class LNET_Al;
}

class LNET_Al : public QWidget
{
    Q_OBJECT

public:
    explicit LNET_Al(QWidget *parent = 0);
    ~LNET_Al();

private:
    Ui::LNET_Al *ui;

public slots:
    void idWindow(int id);
    void cerrar();


signals:
    void clicked (int id);
    void mi_id(int id);

protected:
    void mousePressEvent(QMouseEvent * event);
};

#endif // LNET_AL_H
