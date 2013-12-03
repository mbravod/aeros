#ifndef QLABELCLICK_H
#define QLABELCLICK_H

#include <QLabel>

class QLabelClick : public QLabel
{
    Q_OBJECT

    public:
        QLabelClick(QWidget * parent = 0);
        ~QLabelClick(){};

    signals:
        void clicked(QString);

    protected:
        void mousePressEvent(QMouseEvent * event);
};

#endif // QLABELCLICK_H
