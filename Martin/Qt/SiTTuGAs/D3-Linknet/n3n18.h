#ifndef N3N18_H
#define N3N18_H
#include <QMouseEvent>

#include <QWidget>


#define analog04 0
#define analog08 1
#define analog08_2 2
#define analog16 3
#define analog16_2 4
namespace Ui {
class N3N18;
}

class N3N18 : public QWidget
{
    Q_OBJECT
    
public:
    explicit N3N18(QWidget *parent = 0);
    ~N3N18();
public slots:
    void cerrar();
    void idWindow(int);

signals:
    void clicked (int id);
    void mi_id(int id);
protected:
    void mousePressEvent(QMouseEvent *);

    
private:
    Ui::N3N18 *ui;
};

#endif // N3N18_H
