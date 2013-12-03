#include "flama_anexom.h"
#include "flama_anexomplugin.h"

#include <QtCore/QtPlugin>

Flama_AnexoMPlugin::Flama_AnexoMPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void Flama_AnexoMPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool Flama_AnexoMPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *Flama_AnexoMPlugin::createWidget(QWidget *parent)
{
    return new Flama_AnexoM(parent);
}

QString Flama_AnexoMPlugin::name() const
{
    return QLatin1String("Flama_AnexoM");
}

QString Flama_AnexoMPlugin::group() const
{
    return QLatin1String("");
}

QIcon Flama_AnexoMPlugin::icon() const
{
    return QIcon();
}

QString Flama_AnexoMPlugin::toolTip() const
{
    return QLatin1String("");
}

QString Flama_AnexoMPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool Flama_AnexoMPlugin::isContainer() const
{
    return false;
}

QString Flama_AnexoMPlugin::domXml() const
{
    return QLatin1String("<widget class=\"Flama_AnexoM\" name=\"flama_AnexoM\">\n</widget>\n");
}

QString Flama_AnexoMPlugin::includeFile() const
{
    return QLatin1String("flama_anexom.h");
}

