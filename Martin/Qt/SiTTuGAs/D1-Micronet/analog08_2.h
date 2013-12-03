#ifndef ANALOG08_2_H
#define ANALOG08_2_H
#include <QMouseEvent>
#include <QWidget>
#define analog08_2 2
namespace Ui {
    class Analog08_2;
}

class Analog08_2 : public QWidget
{
    Q_OBJECT

public:
    explicit Analog08_2(QWidget *parent = 0);
    ~Analog08_2();
public slots:
    void cerrar();
    void idWindow(int);

signals:
    void clicked (int id);
    void mi_id(int id);
protected:
    void mousePressEvent(QMouseEvent *);

private:
    Ui::Analog08_2 *ui;
};

#endif // ANALOG08_2_H
