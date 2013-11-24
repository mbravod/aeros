#ifndef INTERNOSDG_H
#define INTERNOSDG_H

#include <QDialog>

namespace Ui {
class InternosDG;
}

class InternosDG : public QDialog
{
    Q_OBJECT
    
public:
    explicit InternosDG(QWidget *parent = 0);
    ~InternosDG();
    
private:
    Ui::InternosDG *ui;
};

#endif // INTERNOSDG_H
