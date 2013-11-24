#ifndef WIDGETSSITTUGAS_H
#define WIDGETSSITTUGAS_H

#include <QtDesigner/QtDesigner>
#include <QtCore/qplugin.h>

class WidgetsSiTTuGAs : public QObject, public QDesignerCustomWidgetCollectionInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetCollectionInterface)
    
public:
    explicit WidgetsSiTTuGAs(QObject *parent = 0);
    
    virtual QList<QDesignerCustomWidgetInterface*> customWidgets() const;
    
private:
    QList<QDesignerCustomWidgetInterface*> m_widgets;
};

#endif
