#ifndef TOOLBAR_H
#define TOOLBAR_H

#include <QToolBar>
#include <QResizeEvent>
#include <QColor>

class ToolBar : public QToolBar
{
    Q_OBJECT
public:
    ToolBar(QWidget *parent);
    ToolBar();
    ~ToolBar();
    QColor m_Color;

    void setColor(const QColor &c);

protected:
    virtual void paintEvent (QPaintEvent *event);
    virtual void resizeEvent(QResizeEvent *event);
private:
    static const qreal scaledSize;  /* init in cpp */

};

#endif // TOOLBAR_H
