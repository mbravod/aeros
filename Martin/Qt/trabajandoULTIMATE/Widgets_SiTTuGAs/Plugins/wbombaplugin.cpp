#include "wbomba.h"
#include "wbombaplugin.h"

#include <QtCore/QtPlugin>

wBombaPlugin::wBombaPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void wBombaPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool wBombaPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *wBombaPlugin::createWidget(QWidget *parent)
{
    return new wBomba(parent);
}

QString wBombaPlugin::name() const
{
    return QLatin1String("wBomba");
}

QString wBombaPlugin::group() const
{
    return QLatin1String("");
}

QIcon wBombaPlugin::icon() const
{
    return QIcon();
}

QString wBombaPlugin::toolTip() const
{
    return QLatin1String("");
}

QString wBombaPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool wBombaPlugin::isContainer() const
{
    return false;
}

QString wBombaPlugin::domXml() const
{
    return QLatin1String("<widget class=\"wBomba\" name=\"wBomba\">\n</widget>\n");
}

QString wBombaPlugin::includeFile() const
{
    return QLatin1String("wbomba.h");
}

