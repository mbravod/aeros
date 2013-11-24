#include "welementos_b.h"
#include "welementos_bplugin.h"

#include <QtCore/QtPlugin>

wElementos_BPlugin::wElementos_BPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void wElementos_BPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool wElementos_BPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *wElementos_BPlugin::createWidget(QWidget *parent)
{
    return new wElementos_B(parent);
}

QString wElementos_BPlugin::name() const
{
    return QLatin1String("wElementos_B");
}

QString wElementos_BPlugin::group() const
{
    return QLatin1String("");
}

QIcon wElementos_BPlugin::icon() const
{
    return QIcon();
}

QString wElementos_BPlugin::toolTip() const
{
    return QLatin1String("");
}

QString wElementos_BPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool wElementos_BPlugin::isContainer() const
{
    return false;
}

QString wElementos_BPlugin::domXml() const
{
    return QLatin1String("<widget class=\"wElementos_B\" name=\"wElementos_B\">\n</widget>\n");
}

QString wElementos_BPlugin::includeFile() const
{
    return QLatin1String("welementos_b.h");
}

