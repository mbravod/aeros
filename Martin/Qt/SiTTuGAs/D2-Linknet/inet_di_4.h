#ifndef INET_DI_4_H
#define INET_DI_4_H

#define _DI_4  11
#include <QWidget>
#include <QMouseEvent>

namespace Ui {
class Inet_DI_4;
}

class Inet_DI_4 : public QWidget
{
    Q_OBJECT
    
public:
    explicit Inet_DI_4(QWidget *parent = 0);
    ~Inet_DI_4();
    
private:
    Ui::Inet_DI_4 *ui;

public slots:
    void idWindow(int id);
    void cerrar();


signals:
    void clicked (int id);
    void mi_id(int id);

protected:
    void mousePressEvent(QMouseEvent * event);

};

#endif // INET_DI_4_H
