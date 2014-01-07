#include "auptextlabel.h"
#include "auptextlabelplugin.h"

#include <QtCore/QtPlugin>

AUpTextLabelPlugin::AUpTextLabelPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void AUpTextLabelPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool AUpTextLabelPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *AUpTextLabelPlugin::createWidget(QWidget *parent)
{
    return new AUpTextLabel(parent);
}

QString AUpTextLabelPlugin::name() const
{
    return QLatin1String("AUpTextLabel");
}

QString AUpTextLabelPlugin::group() const
{
    return QLatin1String("");
}

QIcon AUpTextLabelPlugin::icon() const
{
    return QIcon();
}

QString AUpTextLabelPlugin::toolTip() const
{
    return QLatin1String("");
}

QString AUpTextLabelPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool AUpTextLabelPlugin::isContainer() const
{
    return false;
}

QString AUpTextLabelPlugin::domXml() const
{
    return QLatin1String("<widget class=\"AUpTextLabel\" name=\"aUpTextLabel\">\n</widget>\n");
}

QString AUpTextLabelPlugin::includeFile() const
{
    return QLatin1String("auptextlabel.h");
}

