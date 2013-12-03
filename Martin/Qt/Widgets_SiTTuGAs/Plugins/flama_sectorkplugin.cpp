#include "flama_sectork.h"
#include "flama_sectorkplugin.h"

#include <QtCore/QtPlugin>

Flama_SectorKPlugin::Flama_SectorKPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void Flama_SectorKPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool Flama_SectorKPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *Flama_SectorKPlugin::createWidget(QWidget *parent)
{
    return new Flama_SectorK(parent);
}

QString Flama_SectorKPlugin::name() const
{
    return QLatin1String("Flama_SectorK");
}

QString Flama_SectorKPlugin::group() const
{
    return QLatin1String("");
}

QIcon Flama_SectorKPlugin::icon() const
{
    return QIcon();
}

QString Flama_SectorKPlugin::toolTip() const
{
    return QLatin1String("");
}

QString Flama_SectorKPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool Flama_SectorKPlugin::isContainer() const
{
    return false;
}

QString Flama_SectorKPlugin::domXml() const
{
    return QLatin1String("<widget class=\"Flama_SectorK\" name=\"flama_SectorK\">\n</widget>\n");
}

QString Flama_SectorKPlugin::includeFile() const
{
    return QLatin1String("flama_sectork.h");
}

