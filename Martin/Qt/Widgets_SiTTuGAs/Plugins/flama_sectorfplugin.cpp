#include "flama_sectorf.h"
#include "flama_sectorfplugin.h"

#include <QtCore/QtPlugin>

Flama_SectorFPlugin::Flama_SectorFPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void Flama_SectorFPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool Flama_SectorFPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *Flama_SectorFPlugin::createWidget(QWidget *parent)
{
    return new Flama_SectorF(parent);
}

QString Flama_SectorFPlugin::name() const
{
    return QLatin1String("Flama_SectorF");
}

QString Flama_SectorFPlugin::group() const
{
    return QLatin1String("");
}

QIcon Flama_SectorFPlugin::icon() const
{
    return QIcon();
}

QString Flama_SectorFPlugin::toolTip() const
{
    return QLatin1String("");
}

QString Flama_SectorFPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool Flama_SectorFPlugin::isContainer() const
{
    return false;
}

QString Flama_SectorFPlugin::domXml() const
{
    return QLatin1String("<widget class=\"Flama_SectorF\" name=\"flama_SectorF\">\n</widget>\n");
}

QString Flama_SectorFPlugin::includeFile() const
{
    return QLatin1String("flama_sectorf.h");
}

