#include "flama_sectori.h"
#include "flama_sectoriplugin.h"

#include <QtCore/QtPlugin>

Flama_SectorIPlugin::Flama_SectorIPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void Flama_SectorIPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool Flama_SectorIPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *Flama_SectorIPlugin::createWidget(QWidget *parent)
{
    return new Flama_SectorI(parent);
}

QString Flama_SectorIPlugin::name() const
{
    return QLatin1String("Flama_SectorI");
}

QString Flama_SectorIPlugin::group() const
{
    return QLatin1String("");
}

QIcon Flama_SectorIPlugin::icon() const
{
    return QIcon();
}

QString Flama_SectorIPlugin::toolTip() const
{
    return QLatin1String("");
}

QString Flama_SectorIPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool Flama_SectorIPlugin::isContainer() const
{
    return false;
}

QString Flama_SectorIPlugin::domXml() const
{
    return QLatin1String("<widget class=\"Flama_SectorI\" name=\"flama_SectorI\">\n</widget>\n");
}

QString Flama_SectorIPlugin::includeFile() const
{
    return QLatin1String("flama_sectori.h");
}

