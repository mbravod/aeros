#include "welemento_d.h"
#include "welemento_dplugin.h"

#include <QtCore/QtPlugin>

wElemento_DPlugin::wElemento_DPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void wElemento_DPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool wElemento_DPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *wElemento_DPlugin::createWidget(QWidget *parent)
{
    return new wElemento_D(parent);
}

QString wElemento_DPlugin::name() const
{
    return QLatin1String("wElemento_D");
}

QString wElemento_DPlugin::group() const
{
    return QLatin1String("");
}

QIcon wElemento_DPlugin::icon() const
{
    return QIcon();
}

QString wElemento_DPlugin::toolTip() const
{
    return QLatin1String("");
}

QString wElemento_DPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool wElemento_DPlugin::isContainer() const
{
    return false;
}

QString wElemento_DPlugin::domXml() const
{
    return QLatin1String("<widget class=\"wElemento_D\" name=\"wElemento_D\">\n</widget>\n");
}

QString wElemento_DPlugin::includeFile() const
{
    return QLatin1String("welemento_d.h");
}

