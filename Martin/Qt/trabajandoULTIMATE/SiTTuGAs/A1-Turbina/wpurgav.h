#ifndef WPURGAV_H
#define WPURGAV_H

#include <QWidget>
#include <QMouseEvent>
#define wpurgav 14
#define wrotorturb 15
#define wstg8bld 16
#define wtempadm 17
#define wtempcompa1 18
#define wtempcompa2 19
#define wtempcompb 20
#define wtempespera 21
#define wveln25 22 //Listo
#define wvelnsd 23 //Listo
#define wvigb 24
#define wvoltctrl 25

namespace Ui {
    class WPurgaV;
}

class WPurgaV : public QWidget
{
    Q_OBJECT

public:
    explicit WPurgaV(QWidget *parent = 0);
    ~WPurgaV();

    void setLbVsva(QString s);
    void setLbVsvb(QString s);
    void setLbVsvdmd(QString s);
    void setLbVsvMa(QString s);
    void setLbtbvohms(QString s);
    void setLbVsvsel(QString s);
    void setLbVsvaU(QString s);
    void setLbVsvbU(QString s);
    void setLbVsvdmdU(QString s);
    void setLbVsvMaU(QString s);
    void setLbtbvohmsU(QString s);
    void setLbVsvselU(QString s);
public slots:
    void idWindow(int id);
    void cerrar();

signals:
    void clicked (int id);
    void mi_id(int id);

protected:
    void mousePressEvent(QMouseEvent *);
private:
    Ui::WPurgaV *ui;
};

#endif // WPURGAV_H
