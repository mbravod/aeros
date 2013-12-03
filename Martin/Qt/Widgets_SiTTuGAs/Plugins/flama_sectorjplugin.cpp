#include "flama_sectorj.h"
#include "flama_sectorjplugin.h"

#include <QtCore/QtPlugin>

Flama_SectorJPlugin::Flama_SectorJPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void Flama_SectorJPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool Flama_SectorJPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *Flama_SectorJPlugin::createWidget(QWidget *parent)
{
    return new Flama_SectorJ(parent);
}

QString Flama_SectorJPlugin::name() const
{
    return QLatin1String("Flama_SectorJ");
}

QString Flama_SectorJPlugin::group() const
{
    return QLatin1String("");
}

QIcon Flama_SectorJPlugin::icon() const
{
    return QIcon();
}

QString Flama_SectorJPlugin::toolTip() const
{
    return QLatin1String("");
}

QString Flama_SectorJPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool Flama_SectorJPlugin::isContainer() const
{
    return false;
}

QString Flama_SectorJPlugin::domXml() const
{
    return QLatin1String("<widget class=\"Flama_SectorJ\" name=\"flama_SectorJ\">\n</widget>\n");
}

QString Flama_SectorJPlugin::includeFile() const
{
    return QLatin1String("flama_sectorj.h");
}

