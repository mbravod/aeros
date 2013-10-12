#ifndef LNET_AL6_H
#define LNET_AL6_H

#include <QWidget>

namespace Ui {
    class LNET_Al6;
}

class LNET_Al6 : public QWidget
{
    Q_OBJECT

public:
    explicit LNET_Al6(QWidget *parent = 0);
    ~LNET_Al6();

private:
    Ui::LNET_Al6 *ui;
};

#endif // LNET_AL6_H
