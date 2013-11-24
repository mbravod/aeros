#include "aledplugin.h"
#include "anumindicatorplugin.h"
#include "awidgetscollection.h"
#include "ainstrumentindicatorplugin.h"
#include "auptextlabelplugin.h"
#include "awmultiobjectplugin.h"
#include "awanalogiclevelplugin.h"

AWidgetsCollection::AWidgetsCollection(QObject *parent)
        : QObject(parent)
{
    m_widgets.append(new ALedPlugin(this));
    m_widgets.append(new ANumIndicatorPlugin(this));
    m_widgets.append(new AInstrumentIndicatorPlugin(this));
    m_widgets.append(new AUpTextLabelPlugin(this));
    m_widgets.append(new AWMultiObjectPlugin(this));
    m_widgets.append(new AWAnalogicLevelPlugin(this));
}

QList<QDesignerCustomWidgetInterface*> AWidgetsCollection::customWidgets() const
{
    return m_widgets;
}

Q_EXPORT_PLUGIN2(awidgetscollectionplugin, AWidgetsCollection)
