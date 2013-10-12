#ifndef COMPONENTES_H
#define COMPONENTES_H

#include <QtDesigner/QtDesigner>
#include <QtCore/qplugin.h>

class Componentes : public QObject, public QDesignerCustomWidgetCollectionInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetCollectionInterface)
    
public:
    explicit Componentes(QObject *parent = 0);
    
    virtual QList<QDesignerCustomWidgetInterface*> customWidgets() const;
    
private:
    QList<QDesignerCustomWidgetInterface*> m_widgets;
};

#endif
