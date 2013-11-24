#ifndef DIGITAL24_2_H
#define DIGITAL24_2_H
#include <QMouseEvent>
#include <QWidget>
#define digital24_2 10
namespace Ui {
    class Digital24_2;
}

class Digital24_2 : public QWidget
{
    Q_OBJECT

public:
    explicit Digital24_2(QWidget *parent = 0);
    ~Digital24_2();
public slots:
    void cerrar();
    void idWindow(int);

signals:
    void clicked (int id);
    void mi_id(int id);
protected:
    void mousePressEvent(QMouseEvent *);
private:
    Ui::Digital24_2 *ui;
};

#endif // DIGITAL24_2_H
