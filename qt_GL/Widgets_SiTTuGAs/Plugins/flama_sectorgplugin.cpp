#include "flama_sectorg.h"
#include "flama_sectorgplugin.h"

#include <QtCore/QtPlugin>

Flama_SectorGPlugin::Flama_SectorGPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void Flama_SectorGPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool Flama_SectorGPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *Flama_SectorGPlugin::createWidget(QWidget *parent)
{
    return new Flama_SectorG(parent);
}

QString Flama_SectorGPlugin::name() const
{
    return QLatin1String("Flama_SectorG");
}

QString Flama_SectorGPlugin::group() const
{
    return QLatin1String("");
}

QIcon Flama_SectorGPlugin::icon() const
{
    return QIcon();
}

QString Flama_SectorGPlugin::toolTip() const
{
    return QLatin1String("");
}

QString Flama_SectorGPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool Flama_SectorGPlugin::isContainer() const
{
    return false;
}

QString Flama_SectorGPlugin::domXml() const
{
    return QLatin1String("<widget class=\"Flama_SectorG\" name=\"flama_SectorG\">\n</widget>\n");
}

QString Flama_SectorGPlugin::includeFile() const
{
    return QLatin1String("flama_sectorg.h");
}

