#ifndef ANALOG24_S2_H
#define ANALOG24_S2_H
#include <QMouseEvent>
#include <QWidget>
#define analog25_s2 7
namespace Ui {
    class Analog24_S2;
}

class Analog24_S2 : public QWidget
{
    Q_OBJECT

public:
    explicit Analog24_S2(QWidget *parent = 0);
    ~Analog24_S2();
    int flag;
public slots:
    void cerrar();
    void siguiente();
    void idWindow(int);

signals:
    void clicked (int id);
    void mi_id(int id);
protected:
    void mousePressEvent(QMouseEvent *);

private:
    Ui::Analog24_S2 *ui;
};

#endif // ANALOG24_S2_H
