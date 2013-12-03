#include "flama_sectorh.h"
#include "flama_sectorhplugin.h"

#include <QtCore/QtPlugin>

Flama_SectorHPlugin::Flama_SectorHPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void Flama_SectorHPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool Flama_SectorHPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *Flama_SectorHPlugin::createWidget(QWidget *parent)
{
    return new Flama_SectorH(parent);
}

QString Flama_SectorHPlugin::name() const
{
    return QLatin1String("Flama_SectorH");
}

QString Flama_SectorHPlugin::group() const
{
    return QLatin1String("");
}

QIcon Flama_SectorHPlugin::icon() const
{
    return QIcon();
}

QString Flama_SectorHPlugin::toolTip() const
{
    return QLatin1String("");
}

QString Flama_SectorHPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool Flama_SectorHPlugin::isContainer() const
{
    return false;
}

QString Flama_SectorHPlugin::domXml() const
{
    return QLatin1String("<widget class=\"Flama_SectorH\" name=\"flama_SectorH\">\n</widget>\n");
}

QString Flama_SectorHPlugin::includeFile() const
{
    return QLatin1String("flama_sectorh.h");
}

