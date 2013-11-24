#include "flama_sectorc.h"
#include "flama_sectorcplugin.h"

#include <QtCore/QtPlugin>

Flama_SectorCPlugin::Flama_SectorCPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void Flama_SectorCPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool Flama_SectorCPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *Flama_SectorCPlugin::createWidget(QWidget *parent)
{
    return new Flama_SectorC(parent);
}

QString Flama_SectorCPlugin::name() const
{
    return QLatin1String("Flama_SectorC");
}

QString Flama_SectorCPlugin::group() const
{
    return QLatin1String("");
}

QIcon Flama_SectorCPlugin::icon() const
{
    return QIcon();
}

QString Flama_SectorCPlugin::toolTip() const
{
    return QLatin1String("");
}

QString Flama_SectorCPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool Flama_SectorCPlugin::isContainer() const
{
    return false;
}

QString Flama_SectorCPlugin::domXml() const
{
    return QLatin1String("<widget class=\"Flama_SectorC\" name=\"flama_SectorC\">\n</widget>\n");
}

QString Flama_SectorCPlugin::includeFile() const
{
    return QLatin1String("flama_sectorc.h");
}

