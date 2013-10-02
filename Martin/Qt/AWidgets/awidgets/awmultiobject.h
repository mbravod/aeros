#ifndef AWMULTIOBJECT_H
#define AWMULTIOBJECT_H

#include "awmultestatewidget.h"
#include <QSvgRenderer>

class AWMultiObject : public AWMultEstateWidget
{
    Q_OBJECT
    Q_ENUMS(ETypes)
    Q_ENUMS(EColors)
    Q_PROPERTY(ETypes ElementType READ ElementType WRITE setElementType)
    Q_PROPERTY(EColors OnColor READ OnColor WRITE setOnColor)
    Q_PROPERTY(EColors OffColor READ OffColor WRITE setOffColor)

public:
    AWMultiObject(QWidget *parent = 0);
    enum ETypes{VH2=0,CIRLED,VALCUAD2,VALCUAD3,VALSIMP3,VALSIMP4,VALELE2,AGITADOR,INTER,INTERM,BOMBATA,BOMBATB,BOMBATC,BOMBATD,BOMBATE,REGTA,SPRING,CIRLINE,TELEM,SQUARE,ASPTA,ASPTB,FLAME};
    enum EColors{Red=0,Green,Blue,White,Grey,Yellow,Purple,Brown,Orange,Black};

    ETypes ElementType()const{return m_eType;}
    void setElementType(ETypes);

    EColors OnColor(){return m_OnColor;}
    void setOnColor(EColors);

    EColors OffColor(){return m_OffColor;}
    void setOffColor(EColors);
private:
    void init();
    QStringList eTypeList;
    QStringList eColorList;
protected:
    ETypes m_eType;
    EColors m_OnColor;
    EColors m_OffColor;

    void AWPaintEvent();

    bool loadSvgFile(QString filePath);
    QSvgRenderer * m_SVGrenderer;
    bool flag;
};

#endif
