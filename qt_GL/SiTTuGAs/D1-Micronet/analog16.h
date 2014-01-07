#ifndef ANALOG16_H
#define ANALOG16_H
#include <QMouseEvent>
#include <QWidget>

#define analog16 3

namespace Ui {
    class Analog16;
}

class Analog16 : public QWidget
{
    Q_OBJECT

public:
    explicit Analog16(QWidget *parent = 0);
    ~Analog16();
public slots:
    void cerrar();
    void idWindow(int);

signals:
    void clicked (int id);
    void mi_id(int id);
protected:
    void mousePressEvent(QMouseEvent *);

private:
    Ui::Analog16 *ui;
};

#endif // ANALOG16_H
