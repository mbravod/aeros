#include "ventiladorplugin.h"
#include "flamaplugin.h"
#include "complementos.h"

Complementos::Complementos(QObject *parent)
    : QObject(parent)
{
    m_widgets.append(new VentiladorPlugin(this));
    m_widgets.append(new FlamaPlugin(this));
    
}

QList<QDesignerCustomWidgetInterface*> Complementos::customWidgets() const
{
    return m_widgets;
}

Q_EXPORT_PLUGIN2(complementosplugin, Complementos)
