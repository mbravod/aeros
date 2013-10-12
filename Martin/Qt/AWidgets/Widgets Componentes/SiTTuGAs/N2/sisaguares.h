#ifndef SISAGUARES_H
#define SISAGUARES_H

#include <QWidget>

namespace Ui {
class SisAguaRes;
}

class N2 : public QWidget
{
    Q_OBJECT
    
public:
    explicit N2(QWidget *parent = 0);
    ~N2();
    
private:
    Ui::SisAguaRes *ui;
};

#endif // SISAGUARES_H
