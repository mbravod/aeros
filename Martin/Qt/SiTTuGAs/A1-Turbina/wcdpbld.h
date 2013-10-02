#ifndef WCDPBLD_H
#define WCDPBLD_H

#include <QWidget>
#include <QString>
namespace Ui {
    class WCDPBLD;
}

class WCDPBLD : public QWidget
{
    Q_OBJECT
 /* Q_PROPERTY(QString lbCDPBT READ getLbCDPBT WRITE setLbCDPBT);
    Q_PROPERTY(QString lbCDPBT_1 READ getLbCDPBT_1 WRITE setLbCDPBT_1);
    Q_PROPERTY(QString lbCDPBT_2 READ getLbCDPBT_2 WRITE setLbCDPBT_2);
    Q_PROPERTY(QString lbCDPBT_3 READ getLbCDPBT_3 WRITE setLbCDPBT_3);
    Q_PROPERTY(QString lbCDPBT_4 READ getLbCDPBT_4 WRITE setLbCDPBT_4);
    Q_PROPERTY(QString lbCDPBT_5 READ getLbCDPBT_5 WRITE setLbCDPBT_5);
    Q_PROPERTY(QString lbCDPBT_6 READ getLbCDPBT_6 WRITE setLbCDPBT_6);

    Q_PROPERTY(QString lbCDPB_1 READ getLbCDPB_1 WRITE setLbCDPB_1);
    Q_PROPERTY(QString lbCDPB_2 READ getLbCDPB_2 WRITE setLbCDPB_2);
    Q_PROPERTY(QString lbCDPB_3 READ getLbCDPB_3 WRITE setLbCDPB_3);
    Q_PROPERTY(QString lbCDPB_4 READ getLbCDPB_4 WRITE setLbCDPB_4);
    Q_PROPERTY(QString lbCDPB_5 READ getLbCDPB_5 WRITE setLbCDPB_5);
    Q_PROPERTY(QString lbCDPB_6 READ getLbCDPB_6 WRITE setLbCDPB_6);

    Q_PROPERTY(QString lbCDPBU_1 READ getLbCDPBU_1 WRITE setLbCDPBU_1);
    Q_PROPERTY(QString lbCDPBU_2 READ getLbCDPBU_2 WRITE setLbCDPBU_2);
    Q_PROPERTY(QString lbCDPBU_3 READ getLbCDPBU_3 WRITE setLbCDPBU_3);
    Q_PROPERTY(QString lbCDPBU_4 READ getLbCDPBU_4 WRITE setLbCDPBU_4);
    Q_PROPERTY(QString lbCDPBU_5 READ getLbCDPBU_5 WRITE setLbCDPBU_5);
    Q_PROPERTY(QString lbCDPBU_6 READ getLbCDPBU_6 WRITE setLbCDPBU_6);
*/
public:
    explicit WCDPBLD(QWidget *parent = 0);
    ~WCDPBLD();
    void setLbCDPBT(QString s);
    void setLbCDPBT_1(QString s);
    void setLbCDPBT_2(QString s);
    void setLbCDPBT_3(QString s);
    void setLbCDPBT_4(QString s);
    void setLbCDPBT_5(QString s);
    void setLbCDPBT_6(QString s);
    void setLbCDPB_1(QString s);
    void setLbCDPB_2(QString s);
    void setLbCDPB_3(QString s);
    void setLbCDPB_4(QString s);
    void setLbCDPB_5(QString s);
    void setLbCDPB_6(QString s);
    void setLbCDPBU_1(QString s);
    void setLbCDPBU_2(QString s);
    void setLbCDPBU_3(QString s);
    void setLbCDPBU_4(QString s);
    void setLbCDPBU_5(QString s);
    void setLbCDPBU_6(QString s);
    QString getLbCDPBU_6();
    QString getLbCDPBU_5();
    QString getLbCDPBU_4();
    QString getLbCDPBU_3();
    QString getLbCDPBU_2();
    QString getLbCDPBU_1();
    QString getLbCDPB_6();
    QString getLbCDPB_5();
    QString getLbCDPB_4();
    QString getLbCDPB_3();
    QString getLbCDPB_2();
    QString getLbCDPB_1();
    QString getLbCDPBT_6();
    QString getLbCDPBT_5();
    QString getLbCDPBT_4();
    QString getLbCDPBT_3();
    QString getLbCDPBT_2();
    QString getLbCDPBT_1();
    QString getLbCDPBT();
private:
    Ui::WCDPBLD *ui;
};

#endif // WCDPBLD_H
