#ifndef LNET_AI4_H
#define LNET_AI4_H

#include <QWidget>

namespace Ui {
    class LNET_AI4;
}

class LNET_AI4 : public QWidget
{
    Q_OBJECT

public:
    explicit LNET_AI4(QWidget *parent = 0);
    ~LNET_AI4();

private:
    Ui::LNET_AI4 *ui;
};

#endif // LNET_AI4_H
