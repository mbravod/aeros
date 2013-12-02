#include "welemento_a.h"
#include "welemento_aplugin.h"

#include <QtCore/QtPlugin>

wElemento_APlugin::wElemento_APlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void wElemento_APlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool wElemento_APlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *wElemento_APlugin::createWidget(QWidget *parent)
{
    return new wElemento_A(parent);
}

QString wElemento_APlugin::name() const
{
    return QLatin1String("wElemento_A");
}

QString wElemento_APlugin::group() const
{
    return QLatin1String("");
}

QIcon wElemento_APlugin::icon() const
{
    return QIcon();
}

QString wElemento_APlugin::toolTip() const
{
    return QLatin1String("");
}

QString wElemento_APlugin::whatsThis() const
{
    return QLatin1String("");
}

bool wElemento_APlugin::isContainer() const
{
    return false;
}

QString wElemento_APlugin::domXml() const
{
    return QLatin1String("<widget class=\"wElemento_A\" name=\"w_Elemento_A\">\n</widget>\n");
}

QString wElemento_APlugin::includeFile() const
{
    return QLatin1String("welemento_a.h");
}

