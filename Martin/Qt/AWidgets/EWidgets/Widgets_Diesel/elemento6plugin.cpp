#include "elemento6.h"
#include "elemento6plugin.h"

#include <QtCore/QtPlugin>

Elemento6Plugin::Elemento6Plugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void Elemento6Plugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool Elemento6Plugin::isInitialized() const
{
    return m_initialized;
}

QWidget *Elemento6Plugin::createWidget(QWidget *parent)
{
    return new Elemento6(parent);
}

QString Elemento6Plugin::name() const
{
    return QLatin1String("Elemento6");
}

QString Elemento6Plugin::group() const
{
    return QLatin1String("");
}

QIcon Elemento6Plugin::icon() const
{
    return QIcon();
}

QString Elemento6Plugin::toolTip() const
{
    return QLatin1String("");
}

QString Elemento6Plugin::whatsThis() const
{
    return QLatin1String("");
}

bool Elemento6Plugin::isContainer() const
{
    return false;
}

QString Elemento6Plugin::domXml() const
{
    return QLatin1String("<widget class=\"Elemento6\" name=\"elemento6\">\n</widget>\n");
}

QString Elemento6Plugin::includeFile() const
{
    return QLatin1String("elemento6.h");
}

