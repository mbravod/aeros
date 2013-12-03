#include "flama_sectore.h"
#include "flama_sectoreplugin.h"

#include <QtCore/QtPlugin>

Flama_SectorEPlugin::Flama_SectorEPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void Flama_SectorEPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool Flama_SectorEPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *Flama_SectorEPlugin::createWidget(QWidget *parent)
{
    return new Flama_SectorE(parent);
}

QString Flama_SectorEPlugin::name() const
{
    return QLatin1String("Flama_SectorE");
}

QString Flama_SectorEPlugin::group() const
{
    return QLatin1String("");
}

QIcon Flama_SectorEPlugin::icon() const
{
    return QIcon();
}

QString Flama_SectorEPlugin::toolTip() const
{
    return QLatin1String("");
}

QString Flama_SectorEPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool Flama_SectorEPlugin::isContainer() const
{
    return false;
}

QString Flama_SectorEPlugin::domXml() const
{
    return QLatin1String("<widget class=\"Flama_SectorE\" name=\"flama_SectorE\">\n</widget>\n");
}

QString Flama_SectorEPlugin::includeFile() const
{
    return QLatin1String("flama_sectore.h");
}

