#ifndef ANALOG24_S2_H
#define ANALOG24_S2_H

#include <QWidget>

namespace Ui {
    class Analog24_S2;
}

class Analog24_S2 : public QWidget
{
    Q_OBJECT

public:
    explicit Analog24_S2(QWidget *parent = 0);
    ~Analog24_S2();

private:
    Ui::Analog24_S2 *ui;
};

#endif // ANALOG24_S2_H
