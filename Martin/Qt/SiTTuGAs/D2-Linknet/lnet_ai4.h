#ifndef LNET_AI4_H
#define LNET_AI4_H
#define _AI4   13
#include <QWidget>
#include <QMouseEvent>

namespace Ui {
    class LNET_AI4;
}

class LNET_AI4 : public QWidget
{
    Q_OBJECT

public:
    explicit LNET_AI4(QWidget *parent = 0);
    ~LNET_AI4();

private:
    Ui::LNET_AI4 *ui;

public slots:
    void idWindow(int id);
    void cerrar();


signals:
    void clicked (int id);
    void mi_id(int id);

protected:
    void mousePressEvent(QMouseEvent * event);

};

#endif // LNET_AI4_H
