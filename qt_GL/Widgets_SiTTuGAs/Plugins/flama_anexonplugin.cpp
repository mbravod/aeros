#include "flama_anexon.h"
#include "flama_anexonplugin.h"

#include <QtCore/QtPlugin>

Flama_AnexoNPlugin::Flama_AnexoNPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void Flama_AnexoNPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool Flama_AnexoNPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *Flama_AnexoNPlugin::createWidget(QWidget *parent)
{
    return new Flama_AnexoN(parent);
}

QString Flama_AnexoNPlugin::name() const
{
    return QLatin1String("Flama_AnexoN");
}

QString Flama_AnexoNPlugin::group() const
{
    return QLatin1String("");
}

QIcon Flama_AnexoNPlugin::icon() const
{
    return QIcon();
}

QString Flama_AnexoNPlugin::toolTip() const
{
    return QLatin1String("");
}

QString Flama_AnexoNPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool Flama_AnexoNPlugin::isContainer() const
{
    return false;
}

QString Flama_AnexoNPlugin::domXml() const
{
    return QLatin1String("<widget class=\"Flama_AnexoN\" name=\"flama_AnexoN\">\n</widget>\n");
}

QString Flama_AnexoNPlugin::includeFile() const
{
    return QLatin1String("flama_anexon.h");
}

