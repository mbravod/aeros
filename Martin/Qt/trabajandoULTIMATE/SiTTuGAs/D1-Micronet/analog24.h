#ifndef ANALOG24_H
#define ANALOG24_H
#include <QMouseEvent>
#include <QWidget>
#define analog24 6
namespace Ui {
    class Analog24;
}

class Analog24 : public QWidget
{
    Q_OBJECT

public:
    explicit Analog24(QWidget *parent = 0);
    ~Analog24();
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
    Ui::Analog24 *ui;
};

#endif // ANALOG24_H
