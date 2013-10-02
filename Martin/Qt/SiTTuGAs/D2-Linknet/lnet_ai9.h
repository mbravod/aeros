#ifndef LNET_AI9_H
#define LNET_AI9_H

#include <QWidget>

namespace Ui {
    class LNET_AI9;
}

class LNET_AI9 : public QWidget
{
    Q_OBJECT

public:
    explicit LNET_AI9(QWidget *parent = 0);
    ~LNET_AI9();

private:
    Ui::LNET_AI9 *ui;
};

#endif // LNET_AI9_H
