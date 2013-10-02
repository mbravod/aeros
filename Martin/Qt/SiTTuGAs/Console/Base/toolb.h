#ifndef TOOLB_H
#define TOOLB_H

#include <QToolButton>
#include <QResizeEvent>
#include <QColor>

class ToolB : public QToolButton
{
    Q_OBJECT
public:
    ToolB(QWidget *parent);
    ToolB();
    ~ToolB();
    void setIcon(const QString& fileName);
    QPixmap mypix;
    bool state;
protected:
    virtual void paintEvent (QPaintEvent *event);
    virtual void resizeEvent(QResizeEvent *event);
    virtual void enterEvent ( QEvent * e );
    virtual void leaveEvent ( QEvent * e );
private:
    static const qreal scaledSize;  /* init in cpp */
};

#endif // TOOLB_H
