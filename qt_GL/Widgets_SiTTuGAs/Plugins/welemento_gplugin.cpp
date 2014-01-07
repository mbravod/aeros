#include "welemento_g.h"
#include "welemento_gplugin.h"

#include <QtCore/QtPlugin>

wElemento_GPlugin::wElemento_GPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void wElemento_GPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool wElemento_GPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *wElemento_GPlugin::createWidget(QWidget *parent)
{
    return new wElemento_G(parent);
}

QString wElemento_GPlugin::name() const
{
    return QLatin1String("wElemento_G");
}

QString wElemento_GPlugin::group() const
{
    return QLatin1String("");
}

QIcon wElemento_GPlugin::icon() const
{
    return QIcon();
}

QString wElemento_GPlugin::toolTip() const
{
    return QLatin1String("");
}

QString wElemento_GPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool wElemento_GPlugin::isContainer() const
{
    return false;
}

QString wElemento_GPlugin::domXml() const
{
    return QLatin1String("<widget class=\"wElemento_G\" name=\"w_Elemento_G\">\n</widget>\n");
}

QString wElemento_GPlugin::includeFile() const
{
    return QLatin1String("welemento_g.h");
}

