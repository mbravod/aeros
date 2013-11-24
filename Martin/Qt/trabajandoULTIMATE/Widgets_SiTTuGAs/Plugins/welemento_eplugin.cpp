#include "welemento_e.h"
#include "welemento_eplugin.h"

#include <QtCore/QtPlugin>

wElemento_EPlugin::wElemento_EPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void wElemento_EPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool wElemento_EPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *wElemento_EPlugin::createWidget(QWidget *parent)
{
    return new wElemento_E(parent);
}

QString wElemento_EPlugin::name() const
{
    return QLatin1String("wElemento_E");
}

QString wElemento_EPlugin::group() const
{
    return QLatin1String("");
}

QIcon wElemento_EPlugin::icon() const
{
    return QIcon();
}

QString wElemento_EPlugin::toolTip() const
{
    return QLatin1String("");
}

QString wElemento_EPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool wElemento_EPlugin::isContainer() const
{
    return false;
}

QString wElemento_EPlugin::domXml() const
{
    return QLatin1String("<widget class=\"wElemento_E\" name=\"wElemento_E\">\n</widget>\n");
}

QString wElemento_EPlugin::includeFile() const
{
    return QLatin1String("welemento_e.h");
}

