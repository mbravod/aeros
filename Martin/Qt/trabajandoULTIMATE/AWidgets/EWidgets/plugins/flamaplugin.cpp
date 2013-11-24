#include "flama.h"
#include "flamaplugin.h"

#include <QtCore/QtPlugin>

FlamaPlugin::FlamaPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void FlamaPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool FlamaPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *FlamaPlugin::createWidget(QWidget *parent)
{
    return new Flama(parent);
}

QString FlamaPlugin::name() const
{
    return QLatin1String("Flama");
}

QString FlamaPlugin::group() const
{
    return QLatin1String("");
}

QIcon FlamaPlugin::icon() const
{
    return QIcon();
}

QString FlamaPlugin::toolTip() const
{
    return QLatin1String("");
}

QString FlamaPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool FlamaPlugin::isContainer() const
{
    return false;
}

QString FlamaPlugin::domXml() const
{
    return QLatin1String("<widget class=\"Flama\" name=\"flama\">\n</widget>\n");
}

QString FlamaPlugin::includeFile() const
{
    return QLatin1String("flama.h");
}

