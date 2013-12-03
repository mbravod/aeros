#include "awmultiobject.h"
#include "awmultiobjectplugin.h"

#include <QtCore/QtPlugin>

AWMultiObjectPlugin::AWMultiObjectPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void AWMultiObjectPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool AWMultiObjectPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *AWMultiObjectPlugin::createWidget(QWidget *parent)
{
    return new AWMultiObject(parent);
}

QString AWMultiObjectPlugin::name() const
{
    return QLatin1String("AWMultiObject");
}

QString AWMultiObjectPlugin::group() const
{
    return QLatin1String("");
}

QIcon AWMultiObjectPlugin::icon() const
{
    return QIcon();
}

QString AWMultiObjectPlugin::toolTip() const
{
    return QLatin1String("");
}

QString AWMultiObjectPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool AWMultiObjectPlugin::isContainer() const
{
    return false;
}

QString AWMultiObjectPlugin::domXml() const
{
    return QLatin1String("<widget class=\"AWMultiObject\" name=\"aWMultiObject\">\n</widget>\n");
}

QString AWMultiObjectPlugin::includeFile() const
{
    return QLatin1String("awmultiobject.h");
}

