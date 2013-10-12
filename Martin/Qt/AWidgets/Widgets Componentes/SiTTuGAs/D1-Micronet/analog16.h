#ifndef ANALOG16_H
#define ANALOG16_H

#include <QWidget>

namespace Ui {
    class Analog16;
}

class Analog16 : public QWidget
{
    Q_OBJECT

public:
    explicit Analog16(QWidget *parent = 0);
    ~Analog16();

private:
    Ui::Analog16 *ui;
};

#endif // ANALOG16_H
