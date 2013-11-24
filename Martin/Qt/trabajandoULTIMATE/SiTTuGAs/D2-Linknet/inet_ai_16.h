#ifndef INET_AI_16_H
#define INET_AI_16_H

#define _AI_16 6

#include <QWidget>
#include <QMouseEvent>

namespace Ui {
    class Inet_AI_16;
}

class Inet_AI_16 : public QWidget
{
    Q_OBJECT

public:
    explicit Inet_AI_16(QWidget *parent = 0);
    ~Inet_AI_16();

private:
    Ui::Inet_AI_16 *ui;

public slots:
    void idWindow(int id);
    void cerrar();


signals:
    void clicked (int id);
    void mi_id(int id);

protected:
    void mousePressEvent(QMouseEvent * event);

};

#endif // INET_AI_16_H
