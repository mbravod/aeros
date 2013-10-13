#ifndef WTEMPCOMPB_H
#define WTEMPCOMPB_H

#include <QWidget>
#include <QString>
#include <QMouseEvent>
#define wtempcompb 20


namespace Ui {
    class WTempCompB;
}

class WTempCompB : public QWidget
{
    Q_OBJECT
    /*
    Q_PROPERTY(QString lbTemCOMBT READ getLbTemCOMBT WRITE setLbTemCOMBT);
    Q_PROPERTY(QString lbCOMBT_1 READ getLbCOMBT_1 WRITE setLbCOMBT_1);
    Q_PROPERTY(QString lbCOMBT_2 READ getLbCOMBT_2 WRITE setLbCOMBT_2);
    Q_PROPERTY(QString lbCOMBT_3 READ getLbCOMBT_3 WRITE setLbCOMBT_3);
    Q_PROPERTY(QString lbCOMBT_4 READ getLbCOMBT_4 WRITE setLbCOMBT_4);
    Q_PROPERTY(QString lbCOMBT_5 READ getLbCOMBT_5 WRITE setLbCOMBT_5);
    Q_PROPERTY(QString lbCOMBT_6 READ getLbCOMBT_6 WRITE setLbCOMBT_6);
    Q_PROPERTY(QString lbCOMBT_7 READ getLbCOMBT_7 WRITE setLbCOMBT_7);
    Q_PROPERTY(QString lbCOMBT_8 READ getLbCOMBT_8 WRITE setLbCOMBT_8);

    Q_PROPERTY(QString lbCOMB_1 READ getLbCOMB_1 WRITE setLbCOMB_1);
    Q_PROPERTY(QString lbCOMB_2 READ getLbCOMB_2 WRITE setLbCOMB_2);
    Q_PROPERTY(QString lbCOMB_3 READ getLbCOMB_3 WRITE setLbCOMB_3);
    Q_PROPERTY(QString lbCOMB_4 READ getLbCOMB_4 WRITE setLbCOMB_4);
    Q_PROPERTY(QString lbCOMB_5 READ getLbCOMB_5 WRITE setLbCOMB_5);
    Q_PROPERTY(QString lbCOMB_6 READ getLbCOMB_6 WRITE setLbCOMB_6);
    Q_PROPERTY(QString lbCOMB_7 READ getLbCOMB_7 WRITE setLbCOMB_7);
    Q_PROPERTY(QString lbCOMB_8 READ getLbCOMB_8 WRITE setLbCOMB_8);

    Q_PROPERTY(QString lbCOMBU_1 READ getLbCOMBU_1 WRITE setLbCOMBU_1);
    Q_PROPERTY(QString lbCOMBU_2 READ getLbCOMBU_2 WRITE setLbCOMBU_2);
    Q_PROPERTY(QString lbCOMBU_3 READ getLbCOMBU_3 WRITE setLbCOMBU_3);
    Q_PROPERTY(QString lbCOMBU_4 READ getLbCOMBU_4 WRITE setLbCOMBU_4);
    Q_PROPERTY(QString lbCOMBU_5 READ getLbCOMBU_5 WRITE setLbCOMBU_5);
    Q_PROPERTY(QString lbCOMBU_6 READ getLbCOMBU_6 WRITE setLbCOMBU_6);
    Q_PROPERTY(QString lbCOMBU_7 READ getLbCOMBU_7 WRITE setLbCOMBU_7);
    Q_PROPERTY(QString lbCOMBU_8 READ getLbCOMBU_8 WRITE setLbCOMBU_8);
    */
public:
    explicit WTempCompB(QWidget *parent = 0);
    ~WTempCompB();
    void setLbTemCOMBT(QString s);
    void setLbCOMBT_1(QString s);
    void setLbCOMBT_2(QString s);
    void setLbCOMBT_3(QString s);
    void setLbCOMBT_4(QString s);
    void setLbCOMBT_5(QString s);
    void setLbCOMBT_6(QString s);
    void setLbCOMBT_7(QString s);
    void setLbCOMBT_8(QString s);

    void setLbCOMB_1(QString s);
    void setLbCOMB_2(QString s);
    void setLbCOMB_3(QString s);
    void setLbCOMB_4(QString s);
    void setLbCOMB_5(QString s);
    void setLbCOMB_6(QString s);
    void setLbCOMB_7(QString s);
    void setLbCOMB_8(QString s);

    void setLbCOMBU_1(QString s);
    void setLbCOMBU_2(QString s);
    void setLbCOMBU_3(QString s);
    void setLbCOMBU_4(QString s);
    void setLbCOMBU_5(QString s);
    void setLbCOMBU_6(QString s);
    void setLbCOMBU_7(QString s);
    void setLbCOMBU_8(QString s);
    QString getLbCOMBU_8();
    QString getLbCOMBU_7();
    QString getLbCOMBU_6();
    QString getLbCOMBU_5();
    QString getLbCOMBU_4();
    QString getLbCOMBU_3();
    QString getLbCOMBU_2();
    QString getLbCOMBU_1();

    QString getLbCOMB_8();
    QString getLbCOMB_7();
    QString getLbCOMB_6();
    QString getLbCOMB_5();
    QString getLbCOMB_4();
    QString getLbCOMB_3();
    QString getLbCOMB_2();
    QString getLbCOMB_1();

    QString getLbCOMBT_8();
    QString getLbCOMBT_7();
    QString getLbCOMBT_6();
    QString getLbCOMBT_5();
    QString getLbCOMBT_4();
    QString getLbCOMBT_3();
    QString getLbCOMBT_2();
    QString getLbCOMBT_1();
    QString getLbTemCOMBT();
public slots:
    void idWindow(int id);
    void cerrar();

signals:
    void clicked (int id);
protected:
    void mousePressEvent(QMouseEvent *);
private:
    Ui::WTempCompB *ui;
};

#endif // WTEMPCOMPB_H
