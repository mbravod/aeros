#ifndef ANALOG16_3_H
#define ANALOG16_3_H
#include <QMouseEvent>
#include <QWidget>
#define analog16_3 5
namespace Ui {
    class Analog16_3;
}

class Analog16_3 : public QWidget
{
    Q_OBJECT

public:
    explicit Analog16_3(QWidget *parent = 0);
    ~Analog16_3();
public slots:
    void cerrar();
    void idWindow(int);

signals:
    void clicked (int id);
    void mi_id(int id);
protected:
    void mousePressEvent(QMouseEvent *);

private:
    Ui::Analog16_3 *ui;
};

#endif // ANALOG16_3_H
