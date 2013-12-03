#ifndef LNET_AI8_H
#define LNET_AI8_H
#define _AI8   14
#include <QWidget>
#include <QMouseEvent>

namespace Ui {
    class LNET_AI8;
}

class LNET_AI8 : public QWidget
{
    Q_OBJECT

public:
    explicit LNET_AI8(QWidget *parent = 0);
    ~LNET_AI8();

private:
    Ui::LNET_AI8 *ui;

public slots:
    void idWindow(int id);
    void cerrar();


signals:
    void clicked (int id);
    void mi_id(int id);

protected:
    void mousePressEvent(QMouseEvent * event);
};

#endif // LNET_AI8_H
