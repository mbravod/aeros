#include "flama_sectord.h"
#include "flama_sectordplugin.h"

#include <QtCore/QtPlugin>

Flama_SectorDPlugin::Flama_SectorDPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void Flama_SectorDPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool Flama_SectorDPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *Flama_SectorDPlugin::createWidget(QWidget *parent)
{
    return new Flama_SectorD(parent);
}

QString Flama_SectorDPlugin::name() const
{
    return QLatin1String("Flama_SectorD");
}

QString Flama_SectorDPlugin::group() const
{
    return QLatin1String("");
}

QIcon Flama_SectorDPlugin::icon() const
{
    return QIcon();
}

QString Flama_SectorDPlugin::toolTip() const
{
    return QLatin1String("");
}

QString Flama_SectorDPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool Flama_SectorDPlugin::isContainer() const
{
    return false;
}

QString Flama_SectorDPlugin::domXml() const
{
    return QLatin1String("<widget class=\"Flama_SectorD\" name=\"flama_SectorD\">\n</widget>\n");
}

QString Flama_SectorDPlugin::includeFile() const
{
    return QLatin1String("flama_sectord.h");
}

