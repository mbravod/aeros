#ifndef DIGITAL24_H
#define DIGITAL24_H
#include <QMouseEvent>
#include <QWidget>
#define digital24 9
namespace Ui {
    class Digital24;
}

class Digital24 : public QWidget
{
    Q_OBJECT

public:
    explicit Digital24(QWidget *parent = 0);
    ~Digital24();
public slots:
    void cerrar();
    void idWindow(int);

signals:
    void clicked (int id);
    void mi_id(int id);
protected:
    void mousePressEvent(QMouseEvent *);
private:
    Ui::Digital24 *ui;
};

#endif // DIGITAL24_H
