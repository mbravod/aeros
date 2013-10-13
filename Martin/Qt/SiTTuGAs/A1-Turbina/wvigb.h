#ifndef WVIGB_H
#define WVIGB_H

#include <QWidget>
#include <QString>
#include <QMouseEvent>
#define wvigb 24

namespace Ui {
    class WVIGB;
}

class WVIGB : public QWidget
{
    Q_OBJECT
    /*
    Q_PROPERTY(QString lbVIGVT READ getLbVIGVT WRITE setLbVIGVT);
    Q_PROPERTY(QString lbVIGVT_1 READ getLbVIGVT_1 WRITE setLbVIGVT_1);
    Q_PROPERTY(QString lbVIGVT_2 READ getLbVIGVT_2 WRITE setLbVIGVT_2);
    Q_PROPERTY(QString lbVIGVT_3 READ getLbVIGVT_3 WRITE setLbVIGVT_3);
    Q_PROPERTY(QString lbVIGVT_4 READ getLbVIGVT_4 WRITE setLbVIGVT_4);
    Q_PROPERTY(QString lbVIGVT_5 READ getLbVIGVT_5 WRITE setLbVIGVT_5);
    Q_PROPERTY(QString lbVIGVT_6 READ getLbVIGVT_6 WRITE setLbVIGVT_6);
    Q_PROPERTY(QString lbVIGV_1 READ getLbVIGV_1 WRITE setLbVIGV_1);
    Q_PROPERTY(QString lbVIGV_2 READ getLbVIGV_2 WRITE setLbVIGV_2);
    Q_PROPERTY(QString lbVIGV_3 READ getLbVIGV_3 WRITE setLbVIGV_3);
    Q_PROPERTY(QString lbVIGV_4 READ getLbVIGV_4 WRITE setLbVIGV_4);
    Q_PROPERTY(QString lbVIGV_5 READ getLbVIGV_5 WRITE setLbVIGV_5);
    Q_PROPERTY(QString lbVIGV_6 READ getLbVIGV_6 WRITE setLbVIGV_6);
    Q_PROPERTY(QString lbVIGVU_1 READ getLbVIGVU_1 WRITE setLbVIGVU_1);
    Q_PROPERTY(QString lbVIGVU_2 READ getLbVIGVU_2 WRITE setLbVIGVU_2);
    Q_PROPERTY(QString lbVIGVU_3 READ getLbVIGVU_3 WRITE setLbVIGVU_3);
    Q_PROPERTY(QString lbVIGVU_4 READ getLbVIGVU_4 WRITE setLbVIGVU_4);
    Q_PROPERTY(QString lbVIGVU_5 READ getLbVIGVU_5 WRITE setLbVIGVU_5);
    Q_PROPERTY(QString lbVIGVU_6 READ getLbVIGVU_6 WRITE setLbVIGVU_6);
    */
public:
    explicit WVIGB(QWidget *parent = 0);
    ~WVIGB();
    void setLbVIGVT(QString s);
    void setLbVIGVT_1(QString s);
    void setLbVIGVT_2(QString s);
    void setLbVIGVT_3(QString s);
    void setLbVIGVT_4(QString s);
    void setLbVIGVT_5(QString s);
    void setLbVIGVT_6(QString s);
    void setLbVIGV_1(QString s);
    void setLbVIGV_2(QString s);
    void setLbVIGV_3(QString s);
    void setLbVIGV_4(QString s);
    void setLbVIGV_5(QString s);
    void setLbVIGV_6(QString s);
    void setLbVIGVU_1(QString s);
    void setLbVIGVU_2(QString s);
    void setLbVIGVU_3(QString s);
    void setLbVIGVU_4(QString s);
    void setLbVIGVU_5(QString s);
    void setLbVIGVU_6(QString s);
    QString getLbVIGVU_6();
    QString getLbVIGVU_5();
    QString getLbVIGVU_3();
    QString getLbVIGVU_4();
    QString getLbVIGVU_2();
    QString getLbVIGVU_1();
    QString getLbVIGV_6();
    QString getLbVIGV_5();
    QString getLbVIGV_3();
    QString getLbVIGV_4();
    QString getLbVIGV_2();
    QString getLbVIGV_1();
    QString getLbVIGVT_6();
    QString getLbVIGVT_5();
    QString getLbVIGVT_3();
    QString getLbVIGVT_4();
    QString getLbVIGVT_2();
    QString getLbVIGVT_1();
    QString getLbVIGVT();
public slots:
    void idWindow(int id);
    void cerrar();

signals:
    void clicked (int id);

protected:
    void mousePressEvent(QMouseEvent *);

private:
    Ui::WVIGB *ui;
};

#endif // WVIGB_H
