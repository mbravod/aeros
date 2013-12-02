#include "wventilador.h"
#include "wventiladorplugin.h"

#include <QtCore/QtPlugin>

wVentiladorPlugin::wVentiladorPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void wVentiladorPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool wVentiladorPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *wVentiladorPlugin::createWidget(QWidget *parent)
{
    return new wVentilador(parent);
}

QString wVentiladorPlugin::name() const
{
    return QLatin1String("wVentilador");
}

QString wVentiladorPlugin::group() const
{
    return QLatin1String("");
}

QIcon wVentiladorPlugin::icon() const
{
    return QIcon();
}

QString wVentiladorPlugin::toolTip() const
{
    return QLatin1String("");
}

QString wVentiladorPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool wVentiladorPlugin::isContainer() const
{
    return false;
}

QString wVentiladorPlugin::domXml() const
{
    return QLatin1String("<widget class=\"wVentilador\" name=\"w_Ventilador\">\n</widget>\n");
}

QString wVentiladorPlugin::includeFile() const
{
    return QLatin1String("wventilador.h");
}

