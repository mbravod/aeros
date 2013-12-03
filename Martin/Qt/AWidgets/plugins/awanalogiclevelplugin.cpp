#include "awanalogiclevel.h"
#include "awanalogiclevelplugin.h"

#include <QtCore/QtPlugin>

AWAnalogicLevelPlugin::AWAnalogicLevelPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void AWAnalogicLevelPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool AWAnalogicLevelPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *AWAnalogicLevelPlugin::createWidget(QWidget *parent)
{
    return new AWAnalogicLevel(parent);
}

QString AWAnalogicLevelPlugin::name() const
{
    return QLatin1String("AWAnalogicLevel");
}

QString AWAnalogicLevelPlugin::group() const
{
    return QLatin1String("");
}

QIcon AWAnalogicLevelPlugin::icon() const
{
    return QIcon();
}

QString AWAnalogicLevelPlugin::toolTip() const
{
    return QLatin1String("");
}

QString AWAnalogicLevelPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool AWAnalogicLevelPlugin::isContainer() const
{
    return false;
}

QString AWAnalogicLevelPlugin::domXml() const
{
    return QLatin1String("<widget class=\"AWAnalogicLevel\" name=\"aWAnalogicLevel\">\n</widget>\n");
}

QString AWAnalogicLevelPlugin::includeFile() const
{
    return QLatin1String("awanalogiclevel.h");
}

