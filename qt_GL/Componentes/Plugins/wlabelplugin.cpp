#include "wlabel.h"
#include "wlabelplugin.h"

#include <QtCore/QtPlugin>

WLabelPlugin::WLabelPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void WLabelPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool WLabelPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *WLabelPlugin::createWidget(QWidget *parent)
{
    return new WLabel(parent);
}

QString WLabelPlugin::name() const
{
    return QLatin1String("WLabel");
}

QString WLabelPlugin::group() const
{
    return QLatin1String("");
}

QIcon WLabelPlugin::icon() const
{
    return QIcon();
}

QString WLabelPlugin::toolTip() const
{
    return QLatin1String("");
}

QString WLabelPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool WLabelPlugin::isContainer() const
{
    return false;
}

QString WLabelPlugin::domXml() const
{
    return QLatin1String("<widget class=\"WLabel\" name=\"wLabel\">\n</widget>\n");
}

QString WLabelPlugin::includeFile() const
{
    return QLatin1String("wlabel.h");
}

