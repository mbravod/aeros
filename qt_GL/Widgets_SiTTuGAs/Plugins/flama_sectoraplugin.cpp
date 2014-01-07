#include "flama_sectora.h"
#include "flama_sectoraplugin.h"

#include <QtCore/QtPlugin>

Flama_SectorAPlugin::Flama_SectorAPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void Flama_SectorAPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool Flama_SectorAPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *Flama_SectorAPlugin::createWidget(QWidget *parent)
{
    return new Flama_SectorA(parent);
}

QString Flama_SectorAPlugin::name() const
{
    return QLatin1String("Flama_SectorA");
}

QString Flama_SectorAPlugin::group() const
{
    return QLatin1String("");
}

QIcon Flama_SectorAPlugin::icon() const
{
    return QIcon();
}

QString Flama_SectorAPlugin::toolTip() const
{
    return QLatin1String("");
}

QString Flama_SectorAPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool Flama_SectorAPlugin::isContainer() const
{
    return false;
}

QString Flama_SectorAPlugin::domXml() const
{
    return QLatin1String("<widget class=\"Flama_SectorA\" name=\"flama_SectorA\">\n</widget>\n");
}

QString Flama_SectorAPlugin::includeFile() const
{
    return QLatin1String("flama_sectora.h");
}

