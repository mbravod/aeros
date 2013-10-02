#ifndef ANALOG16_3_H
#define ANALOG16_3_H

#include <QWidget>

namespace Ui {
    class Analog16_3;
}

class Analog16_3 : public QWidget
{
    Q_OBJECT

public:
    explicit Analog16_3(QWidget *parent = 0);
    ~Analog16_3();

private:
    Ui::Analog16_3 *ui;
};

#endif // ANALOG16_3_H
