#ifndef AUPTEXTLABEL_H
#define AUPTEXTLABEL_H

#include "awanalogicwidget.h"
#include <QLabel>
#include <QFrame>

class AUpTextLabel : public AWAnalogicWidget
{
    Q_OBJECT
    Q_PROPERTY(QString LabelText READ LabelText WRITE setText)
    Q_PROPERTY(QFrame::Shape FrameShape READ FrameShape WRITE setFrameShape)
    Q_PROPERTY(QFrame::Shadow FrameShadow READ FrameShadow WRITE setFrameShadow)
    Q_PROPERTY(int LineWidth READ LineWidth WRITE setLineWidth)
    Q_PROPERTY(QFont Font READ Font WRITE setFont)

    Q_PROPERTY(QString StrOnState READ StrOnState WRITE setStrOnState)
    Q_PROPERTY(QString StrOffState READ StrOffState WRITE setStrOffState)

    Q_PROPERTY(int Presicion READ Presicion WRITE setPresicion)

    Q_ENUMS(AWAlignment)
    Q_PROPERTY(AWAlignment Alignment READ Alignment WRITE setAlignment)

public:

    enum AWAlignment{AlignLeft=0,AlignCenter,AlignRight};

    AUpTextLabel(QWidget *parent = 0);
    QString LabelText()const{return m_StringText;}

    void setFrameShape(QFrame::Shape f);
    QFrame::Shape FrameShape()const{return m_Label->frameShape();}

    void setFrameShadow(QFrame::Shadow f);
    QFrame::Shadow FrameShadow()const{return m_Label->frameShadow();}

    void setLineWidth(int i);
    int LineWidth()const{return m_Label->lineWidth();}

    void setFont(QFont f);
    QFont Font()const{return m_font;}

    void setStrOnState(QString s);
    QString StrOnState()const{return m_strOnState;}

    void setStrOffState(QString s);
    QString StrOffState()const{return m_strOffState;}

    void setPresicion(int i);
    int Presicion()const{return m_presicion;}

    void setAlignment(AWAlignment i);
    AWAlignment Alignment()const{return flagAlign;}

    void Update();


public slots:
    void setText(const QString &s);
private:
    void init();

protected:
    QLabel *m_Label;
    void AWPaintEvent();
    QString m_StringText;
    QFont m_font;
    QString m_strOnState;
    QString m_strOffState;
    QStringList strList;

    int m_presicion;
    AWAlignment flagAlign;
};

#endif
