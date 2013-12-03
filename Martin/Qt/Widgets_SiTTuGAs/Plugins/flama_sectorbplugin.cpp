#include "flama_sectorb.h"
#include "flama_sectorbplugin.h"

#include <QtCore/QtPlugin>

Flama_SectorBPlugin::Flama_SectorBPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void Flama_SectorBPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool Flama_SectorBPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *Flama_SectorBPlugin::createWidget(QWidget *parent)
{
    return new Flama_SectorB(parent);
}

QString Flama_SectorBPlugin::name() const
{
    return QLatin1String("Flama_SectorB");
}

QString Flama_SectorBPlugin::group() const
{
    return QLatin1String("");
}

QIcon Flama_SectorBPlugin::icon() const
{
    return QIcon();
}

QString Flama_SectorBPlugin::toolTip() const
{
    return QLatin1String("");
}

QString Flama_SectorBPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool Flama_SectorBPlugin::isContainer() const
{
    return false;
}

QString Flama_SectorBPlugin::domXml() const
{
    return QLatin1String("<widget class=\"Flama_SectorB\" name=\"flama_SectorB\">\n</widget>\n");
}

QString Flama_SectorBPlugin::includeFile() const
{
    return QLatin1String("flama_sectorb.h");
}

