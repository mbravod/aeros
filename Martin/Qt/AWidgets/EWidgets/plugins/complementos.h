#ifndef COMPLEMENTOS_H
#define COMPLEMENTOS_H

#include <QtDesigner/QtDesigner>
#include <QtCore/qplugin.h>

class Complementos : public QObject, public QDesignerCustomWidgetCollectionInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetCollectionInterface)
    
public:
    explicit Complementos(QObject *parent = 0);
    
    virtual QList<QDesignerCustomWidgetInterface*> customWidgets() const;
    
private:
    QList<QDesignerCustomWidgetInterface*> m_widgets;
};

#endif
