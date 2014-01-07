#include "ainstrumentindicator.h"
#include "ainstrumentindicatorplugin.h"

#include <QtCore/QtPlugin>

AInstrumentIndicatorPlugin::AInstrumentIndicatorPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void AInstrumentIndicatorPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool AInstrumentIndicatorPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *AInstrumentIndicatorPlugin::createWidget(QWidget *parent)
{
    return new AInstrumentIndicator(parent);
}

QString AInstrumentIndicatorPlugin::name() const
{
    return QLatin1String("AInstrumentIndicator");
}

QString AInstrumentIndicatorPlugin::group() const
{
    return QLatin1String("");
}

QIcon AInstrumentIndicatorPlugin::icon() const
{
    return QIcon();
}

QString AInstrumentIndicatorPlugin::toolTip() const
{
    return QLatin1String("");
}

QString AInstrumentIndicatorPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool AInstrumentIndicatorPlugin::isContainer() const
{
    return false;
}

QString AInstrumentIndicatorPlugin::domXml() const
{
    return QLatin1String("<widget class=\"AInstrumentIndicator\" name=\"aInstrumentIndicator\">\n <property name=\"geometry\">\n <rect>\n <x>0</x>\n <y>0</y>\n <width>70</width>\n <height>70</height>\n </rect>\n </property>\n  </widget>\n");
}



QString AInstrumentIndicatorPlugin::includeFile() const
{
    return QLatin1String("ainstrumentindicator.h");
}

