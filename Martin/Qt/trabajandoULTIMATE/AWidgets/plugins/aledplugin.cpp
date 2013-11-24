#include "aled.h"
#include "aledplugin.h"

#include <QtCore/QtPlugin>

ALedPlugin::ALedPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void ALedPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool ALedPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *ALedPlugin::createWidget(QWidget *parent)
{
    return new ALed(parent);
}

QString ALedPlugin::name() const
{
    return QLatin1String("ALed");
}

QString ALedPlugin::group() const
{
    return QLatin1String("");
}

QIcon ALedPlugin::icon() const
{
    return QIcon();
}

QString ALedPlugin::toolTip() const
{
    return QLatin1String("");
}

QString ALedPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool ALedPlugin::isContainer() const
{
    return false;
}

QString ALedPlugin::domXml() const
{
    return QLatin1String("<widget class=\"ALed\" name=\"aLed\">\n</widget>\n");
}

QString ALedPlugin::includeFile() const
{
    return QLatin1String("aled.h");
}

