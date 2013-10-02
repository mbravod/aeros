#include "ventilador.h"
#include "ventiladorplugin.h"

#include <QtCore/QtPlugin>

VentiladorPlugin::VentiladorPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void VentiladorPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool VentiladorPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *VentiladorPlugin::createWidget(QWidget *parent)
{
    return new Ventilador(parent);
}

QString VentiladorPlugin::name() const
{
    return QLatin1String("Ventilador");
}

QString VentiladorPlugin::group() const
{
    return QLatin1String("");
}

QIcon VentiladorPlugin::icon() const
{
    return QIcon();
}

QString VentiladorPlugin::toolTip() const
{
    return QLatin1String("");
}

QString VentiladorPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool VentiladorPlugin::isContainer() const
{
    return false;
}

QString VentiladorPlugin::domXml() const
{
    return QLatin1String("<widget class=\"Ventilador\" name=\"ventilador\">\n</widget>\n");
}

QString VentiladorPlugin::includeFile() const
{
    return QLatin1String("ventilador.h");
}

