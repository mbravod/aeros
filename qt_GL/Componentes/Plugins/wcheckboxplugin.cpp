#include "wcheckbox.h"
#include "wcheckboxplugin.h"

#include <QtCore/QtPlugin>

WCheckBoxPlugin::WCheckBoxPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void WCheckBoxPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool WCheckBoxPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *WCheckBoxPlugin::createWidget(QWidget *parent)
{
    return new WCheckBox(parent);
}

QString WCheckBoxPlugin::name() const
{
    return QLatin1String("WCheckBox");
}

QString WCheckBoxPlugin::group() const
{
    return QLatin1String("");
}

QIcon WCheckBoxPlugin::icon() const
{
    return QIcon();
}

QString WCheckBoxPlugin::toolTip() const
{
    return QLatin1String("");
}

QString WCheckBoxPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool WCheckBoxPlugin::isContainer() const
{
    return false;
}

QString WCheckBoxPlugin::domXml() const
{
    return QLatin1String("<widget class=\"WCheckBox\" name=\"wCheckBox\">\n</widget>\n");
}

QString WCheckBoxPlugin::includeFile() const
{
    return QLatin1String("wcheckbox.h");
}

