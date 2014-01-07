#ifndef ANALOG04_H
#define ANALOG04_H
#include <QMouseEvent>
#include <QWidget>
#define analog04 0

namespace Ui {
    class Analog04;
}

class Analog04 : public QWidget
{
    Q_OBJECT

public:
    explicit Analog04(QWidget *parent = 0);
    ~Analog04();
public slots:
    void cerrar();
    void idWindow(int);

signals:
    void clicked (int id);
    void mi_id(int id);
protected:
    void mousePressEvent(QMouseEvent *);



private:
    Ui::Analog04 *ui;
};

#endif // ANALOG04_H
