#include "welemento_c.h"
#include "welemento_cplugin.h"

#include <QtCore/QtPlugin>

wElemento_CPlugin::wElemento_CPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void wElemento_CPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool wElemento_CPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *wElemento_CPlugin::createWidget(QWidget *parent)
{
    return new wElemento_C(parent);
}

QString wElemento_CPlugin::name() const
{
    return QLatin1String("wElemento_C");
}

QString wElemento_CPlugin::group() const
{
    return QLatin1String("");
}

QIcon wElemento_CPlugin::icon() const
{
    return QIcon();
}

QString wElemento_CPlugin::toolTip() const
{
    return QLatin1String("");
}

QString wElemento_CPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool wElemento_CPlugin::isContainer() const
{
    return false;
}

QString wElemento_CPlugin::domXml() const
{
    return QLatin1String("<widget class=\"wElemento_C\" name=\"w_Elemento_C\">\n</widget>\n");
}

QString wElemento_CPlugin::includeFile() const
{
    return QLatin1String("welemento_c.h");
}

