#include "flama_sectorl.h"
#include "flama_sectorlplugin.h"

#include <QtCore/QtPlugin>

Flama_SectorLPlugin::Flama_SectorLPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void Flama_SectorLPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool Flama_SectorLPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *Flama_SectorLPlugin::createWidget(QWidget *parent)
{
    return new Flama_SectorL(parent);
}

QString Flama_SectorLPlugin::name() const
{
    return QLatin1String("Flama_SectorL");
}

QString Flama_SectorLPlugin::group() const
{
    return QLatin1String("");
}

QIcon Flama_SectorLPlugin::icon() const
{
    return QIcon();
}

QString Flama_SectorLPlugin::toolTip() const
{
    return QLatin1String("");
}

QString Flama_SectorLPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool Flama_SectorLPlugin::isContainer() const
{
    return false;
}

QString Flama_SectorLPlugin::domXml() const
{
    return QLatin1String("<widget class=\"Flama_SectorL\" name=\"flama_SectorL\">\n</widget>\n");
}

QString Flama_SectorLPlugin::includeFile() const
{
    return QLatin1String("flama_sectorl.h");
}

