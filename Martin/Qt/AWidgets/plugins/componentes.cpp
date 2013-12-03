#include "wlabelplugin.h"
#include "wcheckboxplugin.h"
#include "componentes.h"

Componentes::Componentes(QObject *parent)
    : QObject(parent)
{
    m_widgets.append(new WLabelPlugin(this));
    m_widgets.append(new WCheckBoxPlugin(this));
    
}

QList<QDesignerCustomWidgetInterface*> Componentes::customWidgets() const
{
    return m_widgets;
}

Q_EXPORT_PLUGIN2(componentesplugin, Componentes)
