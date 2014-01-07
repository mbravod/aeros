#ifndef N3N41_H
#define N3N41_H
#include <QMouseEvent>

#include <QWidget>

#define analog04 0
#define analog08 1
#define analog08_2 2
#define analog16 3
#define analog16_2 4
namespace Ui {
class N3N41;
}

class N3N41 : public QWidget
{
    Q_OBJECT
    
public:
    explicit N3N41(QWidget *parent = 0);
    ~N3N41();
public slots:
    void cerrar();
    void idWindow(int);

signals:
    void clicked (int id);
    void mi_id(int id);
protected:
    void mousePressEvent(QMouseEvent *);

private:
    Ui::N3N41 *ui;
};

#endif // N3N41_H
