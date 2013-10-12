#ifndef LNET_AL2_H
#define LNET_AL2_H

#include <QWidget>

namespace Ui {
    class lnet_al2;
}

class lnet_al2 : public QWidget
{
    Q_OBJECT

public:
    explicit lnet_al2(QWidget *parent = 0);
    ~lnet_al2();

private:
    Ui::lnet_al2 *ui;
};

#endif // LNET_AL2_H
