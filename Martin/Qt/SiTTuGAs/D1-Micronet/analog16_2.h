#ifndef ANALOG16_2_H
#define ANALOG16_2_H
#include <QMouseEvent>
#include <QMainWindow>
#define analog16_2 4
namespace Ui {
    class Analog16_2;
}

class Analog16_2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Analog16_2(QWidget *parent = 0);
    ~Analog16_2();


    void setLbIp(QString s);
    void setLbNum_1(QString s);
    void setLbNum_2(QString s);
    void setLbNum_3(QString s);
    void setLbNum_4(QString s);
    void setLbNum_5(QString s);
    void setLbNum_6(QString s);
    void setLbNum_7(QString s);
    void setLbNum_8(QString s);
    void setLbNum_9(QString s);
    void setLbNum_10(QString s);
    void setLbNum_11(QString s);
    void setLbNum_12(QString s);
    void setLbNumDes_1(QString s);
    void setLbNumDes_2(QString s);
    void setLbNumDes_3(QString s);
    void setLbNumDes_4(QString s);
    void setLbNumDes_5(QString s);
    void setLbNumDes_6(QString s);
    void setLbNumDes_7(QString s);
    void setLbNumDes_8(QString s);
    void setLbNumDes_9(QString s);
    void setLbNumDes_10(QString s);
    void setLbNumDes_11(QString s);
    void setLbNumDes_12(QString s);
    void setLbTit_1(QString s);
    void setLbTit_2(QString s);
    void setLbTit_3(QString s);
    void setLbTit_4(QString s);
    void setLbTit_5(QString s);
    void setLbTit_6(QString s);
    void setLbTit_7(QString s);
    void setLbTit_8(QString s);
    void setLbTit_9(QString s);
    void setLbTit_10(QString s);
    void setLbTit_11(QString s);
    void setLbTit_12(QString s);
    void setLbUni_1(QString s);
    void setLbUni_2(QString s);
    void setLbUni_3(QString s);
    void setLbUni_4(QString s);
    void setLbUni_5(QString s);
    void setLbUni_6(QString s);
    void setLbUni_7(QString s);
    void setLbUni_8(QString s);
    void setLbUni_9(QString s);
    void setLbUni_10(QString s);
    void setLbUni_11(QString s);
    void setLbUni_12(QString s);
public slots:
    void cerrar();
    void idWindow(int);

signals:
    void clicked (int id);
    void mi_id(int id);
protected:
    void mousePressEvent(QMouseEvent *);



private:
    Ui::Analog16_2 *ui;
};

#endif // ANALOG16_2_H
