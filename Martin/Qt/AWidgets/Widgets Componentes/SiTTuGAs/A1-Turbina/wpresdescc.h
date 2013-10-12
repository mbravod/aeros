#ifndef WPRESDESCC_H
#define WPRESDESCC_H

#include <QWidget>
#include <QString>

namespace Ui {
    class WPresDescC;
}

class WPresDescC : public QWidget
{
    Q_OBJECT
 /*
    Q_PROPERTY(QString lbPreDESCT READ getLbPreDESCT WRITE setLbPreDESCT);
    Q_PROPERTY(QString lbDESCT_1 READ getLbDESCT_1 WRITE setLbDESCT_1);
    Q_PROPERTY(QString lbDESCT_2 READ getLbDESCT_2 WRITE setLbDESCT_2);
    Q_PROPERTY(QString lbDESC_1 READ getLbDESC_1 WRITE setLbDESC_1);
    Q_PROPERTY(QString lbDESC_2 READ getLbDESC_2 WRITE setLbDESC_2);
    Q_PROPERTY(QString lbDESCU_1 READ getLbDESCU_1 WRITE setLbDESCU_1);
    Q_PROPERTY(QString lbDESCU_2 READ getLbDESCU_2 WRITE setLbDESCU_2);
  */
public:
    explicit WPresDescC(QWidget *parent = 0);
    ~WPresDescC();
    void setLbPreDESCT(QString s);
    void setLbDESCT_1(QString s);
    void setLbDESCT_2(QString s);
    void setLbDESC_1(QString s);
    void setLbDESC_2(QString s);
    void setLbDESCU_1(QString s);
    void setLbDESCU_2(QString s);
    QString getLbDESCU_2();
    QString getLbDESCU_1();
    QString getLbDESC_2();
    QString getLbDESC_1();
    QString getLbDESCT_2();
    QString getLbDESCT_1();
    QString getLbPreDESCT();
private:
    Ui::WPresDescC *ui;
};

#endif // WPRESDESCC_H
