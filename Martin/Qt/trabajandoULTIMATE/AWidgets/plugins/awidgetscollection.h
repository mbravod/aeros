#ifndef AWIDGETSCOLLECTION_H
#define AWIDGETSCOLLECTION_H

#include <QtDesigner/QtDesigner>
#include <QtCore/qplugin.h>

class AWidgetsCollection : public QObject, public QDesignerCustomWidgetCollectionInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetCollectionInterface)

public:
    explicit AWidgetsCollection(QObject *parent = 0);

    virtual QList<QDesignerCustomWidgetInterface*> customWidgets() const;

private:
    QList<QDesignerCustomWidgetInterface*> m_widgets;
};

#endif
