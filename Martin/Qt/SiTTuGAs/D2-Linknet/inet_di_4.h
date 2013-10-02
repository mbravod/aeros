#ifndef INET_DI_4_H
#define INET_DI_4_H

#include <QWidget>

namespace Ui {
class Inet_DI_4;
}

class Inet_DI_4 : public QWidget
{
    Q_OBJECT
    
public:
    explicit Inet_DI_4(QWidget *parent = 0);
    ~Inet_DI_4();
    
private:
    Ui::Inet_DI_4 *ui;
};

#endif // INET_DI_4_H
