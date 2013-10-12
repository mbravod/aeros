#ifndef WESTATORV_H
#define WESTATORV_H

#include <QWidget>

namespace Ui {
    class WEstatorV;
}

class WEstatorV : public QWidget
{
    Q_OBJECT

public:
    explicit WEstatorV(QWidget *parent = 0);
    ~WEstatorV();

    void setLbVsva(QString s);
    void setLbVsvb(QString s);
    void setLbVsvdmd(QString s);
    void setLbVsvMa(QString s);
    void setLbVsvOhms(QString s);
    void setLbVsvsel(QString s);
    void setLbVsvaU(QString s);
    void setLbVsvbU(QString s);
    void setLbVsvdmdU(QString s);
    void setLbVsvMaU(QString s);
    void setLbVsvOhmsU(QString s);
    void setLbVsvselU(QString s);

private:
    Ui::WEstatorV *ui;
};

#endif // WESTATORV_H
