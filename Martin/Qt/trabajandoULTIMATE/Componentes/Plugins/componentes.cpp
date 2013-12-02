#include "wcheckboxplugin.h"
#include "wlabelplugin.h"
#include "wlineeditplugin.h"
#include "componentes.h"

Componentes::Componentes(QObject *parent)
    : QObject(parent)
{
    m_widgets.append(new WCheckBoxPlugin(this));
    m_widgets.append(new WLabelPlugin(this));
    m_widgets.append(new WLineEditPlugin(this));
    
}

QList<QDesignerCustomWidgetInterface*> Componentes::customWidgets() const
{
    return m_widgets;
}

Q_EXPORT_PLUGIN2(componentesplugin, Componentes)
