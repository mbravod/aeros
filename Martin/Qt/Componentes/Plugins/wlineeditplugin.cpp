#include "wlineedit.h"
#include "wlineeditplugin.h"

#include <QtCore/QtPlugin>

WLineEditPlugin::WLineEditPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void WLineEditPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool WLineEditPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *WLineEditPlugin::createWidget(QWidget *parent)
{
    return new WLineEdit(parent);
}

QString WLineEditPlugin::name() const
{
    return QLatin1String("WLineEdit");
}

QString WLineEditPlugin::group() const
{
    return QLatin1String("");
}

QIcon WLineEditPlugin::icon() const
{
    return QIcon();
}

QString WLineEditPlugin::toolTip() const
{
    return QLatin1String("");
}

QString WLineEditPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool WLineEditPlugin::isContainer() const
{
    return false;
}

QString WLineEditPlugin::domXml() const
{
    return QLatin1String("<widget class=\"WLineEdit\" name=\"wLineEdit\">\n</widget>\n");
}

QString WLineEditPlugin::includeFile() const
{
    return QLatin1String("wlineedit.h");
}

