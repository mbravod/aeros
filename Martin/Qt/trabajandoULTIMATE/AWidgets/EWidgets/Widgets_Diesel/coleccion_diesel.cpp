#include "elemento1plugin.h"
#include "elemento2plugin.h"
#include "elemento3plugin.h"
#include "elemento4plugin.h"
#include "elemento5plugin.h"
#include "elemento6plugin.h"
#include "elemento7plugin.h"
#include "elemento8plugin.h"
#include "elemento9plugin.h"
#include "coleccion_diesel.h"

Coleccion_Diesel::Coleccion_Diesel(QObject *parent)
    : QObject(parent)
{
    m_widgets.append(new Elemento1Plugin(this));
    m_widgets.append(new Elemento2Plugin(this));
    m_widgets.append(new Elemento3Plugin(this));
    m_widgets.append(new Elemento4Plugin(this));
    m_widgets.append(new Elemento5Plugin(this));
    m_widgets.append(new Elemento6Plugin(this));
    m_widgets.append(new Elemento7Plugin(this));
    m_widgets.append(new Elemento8Plugin(this));
    m_widgets.append(new Elemento9Plugin(this));
    
}

QList<QDesignerCustomWidgetInterface*> Coleccion_Diesel::customWidgets() const
{
    return m_widgets;
}

Q_EXPORT_PLUGIN2(coleccion_dieselplugin, Coleccion_Diesel)
