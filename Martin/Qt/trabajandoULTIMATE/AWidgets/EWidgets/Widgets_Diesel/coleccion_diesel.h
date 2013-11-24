#ifndef COLECCION_DIESEL_H
#define COLECCION_DIESEL_H

#include <QtDesigner/QtDesigner>
#include <QtCore/qplugin.h>

class Coleccion_Diesel : public QObject, public QDesignerCustomWidgetCollectionInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetCollectionInterface)
    
public:
    explicit Coleccion_Diesel(QObject *parent = 0);
    
    virtual QList<QDesignerCustomWidgetInterface*> customWidgets() const;
    
private:
    QList<QDesignerCustomWidgetInterface*> m_widgets;
};

#endif
