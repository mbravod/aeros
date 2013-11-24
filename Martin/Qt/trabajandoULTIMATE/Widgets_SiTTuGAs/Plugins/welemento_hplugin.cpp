#include "welemento_h.h"
#include "welemento_hplugin.h"

#include <QtCore/QtPlugin>

wElemento_HPlugin::wElemento_HPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void wElemento_HPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool wElemento_HPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *wElemento_HPlugin::createWidget(QWidget *parent)
{
    return new wElemento_H(parent);
}

QString wElemento_HPlugin::name() const
{
    return QLatin1String("wElemento_H");
}

QString wElemento_HPlugin::group() const
{
    return QLatin1String("");
}

QIcon wElemento_HPlugin::icon() const
{
    return QIcon();
}

QString wElemento_HPlugin::toolTip() const
{
    return QLatin1String("");
}

QString wElemento_HPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool wElemento_HPlugin::isContainer() const
{
    return false;
}

QString wElemento_HPlugin::domXml() const
{
    return QLatin1String("<widget class=\"wElemento_H\" name=\"wElemento_H\">\n</widget>\n");
}

QString wElemento_HPlugin::includeFile() const
{
    return QLatin1String("welemento_h.h");
}

