#include "anumindicator.h"
#include "anumindicatorplugin.h"

#include <QtCore/QtPlugin>

ANumIndicatorPlugin::ANumIndicatorPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void ANumIndicatorPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool ANumIndicatorPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *ANumIndicatorPlugin::createWidget(QWidget *parent)
{
    return new ANumIndicator(parent);
}

QString ANumIndicatorPlugin::name() const
{
    return QLatin1String("ANumIndicator");
}

QString ANumIndicatorPlugin::group() const
{
    return QLatin1String("");
}

QIcon ANumIndicatorPlugin::icon() const
{
    return QIcon();
}

QString ANumIndicatorPlugin::toolTip() const
{
    return QLatin1String("");
}

QString ANumIndicatorPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool ANumIndicatorPlugin::isContainer() const
{
    return false;
}

QString ANumIndicatorPlugin::domXml() const
{
    return QLatin1String("<widget class=\"ANumIndicator\" name=\"aNumIndicator\">\n</widget>\n");
}

QString ANumIndicatorPlugin::includeFile() const
{
    return QLatin1String("anumindicator.h");
}
