#ifndef WBALANCEI_H
#define WBALANCEI_H

#include <QWidget>
#include <QMouseEvent>
#define wbalancei 1

namespace Ui {
    class WBalanceI;
}

class WBalanceI : public QWidget
{
    Q_OBJECT

public:
    explicit WBalanceI(QWidget *parent = 0);
    ~WBalanceI();
    void setLbtbva(QString s);
    void setLbtbvb(QString s);
    void setLbtbvdmd(QString s);
    void setLbtbvma(QString s);
    void setLbtbvohms(QString s);
    void setLbtbvsel(QString s);
    void setLbtbvaU(QString s);
    void setLbtbvbU(QString s);
    void setLbtbvdmdU(QString s);
    void setLbtbvmaU(QString s);
    void setLbtbvohmsU(QString s);
    void setLbtbvselU(QString s);


private:
    Ui::WBalanceI *ui;

public slots:
    void idWindow(int id);


signals:
    void clicked (int id);


protected:
    void mousePressEvent(QMouseEvent *);


};

#endif // WBALANCEI_H
