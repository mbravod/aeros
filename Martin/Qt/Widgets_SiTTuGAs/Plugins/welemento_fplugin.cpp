#include "welemento_f.h"
#include "welemento_fplugin.h"

#include <QtCore/QtPlugin>

wElemento_FPlugin::wElemento_FPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void wElemento_FPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool wElemento_FPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *wElemento_FPlugin::createWidget(QWidget *parent)
{
    return new wElemento_F(parent);
}

QString wElemento_FPlugin::name() const
{
    return QLatin1String("wElemento_F");
}

QString wElemento_FPlugin::group() const
{
    return QLatin1String("");
}

QIcon wElemento_FPlugin::icon() const
{
    return QIcon();
}

QString wElemento_FPlugin::toolTip() const
{
    return QLatin1String("");
}

QString wElemento_FPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool wElemento_FPlugin::isContainer() const
{
    return false;
}

QString wElemento_FPlugin::domXml() const
{
    return QLatin1String("<widget class=\"wElemento_F\" name=\"w_Elemento_F\">\n</widget>\n");
}

QString wElemento_FPlugin::includeFile() const
{
    return QLatin1String("welemento_f.h");
}

