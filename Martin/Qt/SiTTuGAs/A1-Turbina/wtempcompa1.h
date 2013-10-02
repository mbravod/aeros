#ifndef WTEMPCOMPA1_H
#define WTEMPCOMPA1_H

#include <QWidget>
#include <QString>

namespace Ui {
    class WTempCompA1;
}

class WTempCompA1 : public QWidget
{
    Q_OBJECT
    /*
    Q_PROPERTY(QString lbTemCOMAT READ getLbTemCOMAT WRITE setLbTemCOMAT);
    Q_PROPERTY(QString lbCOMAT_1 READ getLbCOMAT_1 WRITE setLbCOMAT_1);
    Q_PROPERTY(QString lbCOMAT_2 READ getLbCOMAT_2 WRITE setLbCOMAT_2);
    Q_PROPERTY(QString lbCOMA_1 READ getLbCOMA_1 WRITE setLbCOMA_1);
    Q_PROPERTY(QString lbCOMA_2 READ getLbCOMA_2 WRITE setLbCOMA_2);
    Q_PROPERTY(QString lbCOMAU_1 READ getLbCOMAU_1 WRITE setLbCOMAU_1);
    Q_PROPERTY(QString lbCOMAU_2 READ getLbCOMAU_2 WRITE setLbCOMAU_2);
    */
public:
    explicit WTempCompA1(QWidget *parent = 0);
    ~WTempCompA1();
    void setLbTemCOMAT(QString);
    void setLbCOMAT_1(QString);
    void setLbCOMAT_2(QString);
    void setLbCOMA_1(QString);
    void setLbCOMA_2(QString);
    void setLbCOMAU_1(QString);
    void setLbCOMAU_2(QString);
    QString getLbCOMAU_2();
    QString getLbCOMAU_1();
    QString getLbCOMA_2();
    QString getLbCOMA_1();
    QString getLbCOMAT_2();
    QString getLbCOMAT_1();
    QString getLbTemCOMAT();
private:
    Ui::WTempCompA1 *ui;
};

#endif // WTEMPCOMPA1_H
