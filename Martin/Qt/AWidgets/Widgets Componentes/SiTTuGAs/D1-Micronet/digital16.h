#ifndef DIGITAL16_H
#define DIGITAL16_H

#include <QWidget>

namespace Ui {
    class Digital16;
}

class Digital16 : public QWidget
{
    Q_OBJECT

public:
    explicit Digital16(QWidget *parent = 0);
    ~Digital16();

private:
    Ui::Digital16 *ui;
};

#endif // DIGITAL16_H
