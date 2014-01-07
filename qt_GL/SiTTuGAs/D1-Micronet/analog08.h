#ifndef ANALOG08_H
#define ANALOG08_H
#include <QMouseEvent>
#include <QWidget>
#define analog08 1

namespace Ui {
    class Analog08;
}

class Analog08 : public QWidget
{
    Q_OBJECT

public:
    explicit Analog08(QWidget *parent = 0);
    ~Analog08();
public slots:
    void cerrar();
    void idWindow(int);

signals:
    void clicked (int id);
    void mi_id(int id);
protected:
    void mousePressEvent(QMouseEvent *);
private:
    Ui::Analog08 *ui;
};

#endif // ANALOG08_H
