#ifndef D1_H
#define D1_H

#include <QWidget>
#include <QString>
#include "Abstract/pantallas.h"
#include "../header.h"

namespace Ui {
    class D1;
}

class D1 : public Pantallas
{
    Q_OBJECT

public:
    explicit D1(SiTTuGAs *siTTuGAs,ShrdMem *shrdMem);
    ~D1();
    void setLbInd_1(QString s);
    void setLbInd_2(QString s);
    void setLbInd_3(QString s);
    void setLbInd_4(QString s);
    void setLbInd_5(QString s);
    void setLbInd_6(QString s);
    void setLbInd_7(QString s);
    void setLbInd_8(QString s);
    void setLbInd_9(QString s);

    void setLbInd_10(QString s);
    void setLbInd_11(QString s);
    void setLbInd_12(QString s);
    void setLbInd_13(QString s);
    void setLbInd_14(QString s);
    void setLbInd_15(QString s);
    void setLbInd_16(QString s);
    void setLbInd_17(QString s);
    void setLbInd_18(QString s);
    void setLbInd_19(QString s);

    void setLbInd_20(QString s);
    void setLbInd_21(QString s);
    void setLbInd_22(QString s);
    void setLbInd_23(QString s);
    void setLbInd_24(QString s);
    void setLbInd_25(QString s);
    void setLbInd_26(QString s);
    void setLbInd_27(QString s);
    void setLbInd_28(QString s);
    void setLbInd_29(QString s);
    void setLbInd_30(QString s);
    void setLbInd_31(QString s);
    void setLbInd_32(QString s);

private:
    Ui::D1 *ui;
    Header *header;
};

#endif // D1_H
