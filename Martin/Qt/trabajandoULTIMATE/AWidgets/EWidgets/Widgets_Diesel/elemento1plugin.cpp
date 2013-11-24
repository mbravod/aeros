#include "elemento1.h"
#include "elemento1plugin.h"

#include <QtCore/QtPlugin>

Elemento1Plugin::Elemento1Plugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void Elemento1Plugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool Elemento1Plugin::isInitialized() const
{
    return m_initialized;
}

QWidget *Elemento1Plugin::createWidget(QWidget *parent)
{
    return new Elemento1(parent);
}

QString Elemento1Plugin::name() const
{
    return QLatin1String("Elemento1");
}

QString Elemento1Plugin::group() const
{
    return QLatin1String("");
}

QIcon Elemento1Plugin::icon() const
{
    return QIcon();
}

QString Elemento1Plugin::toolTip() const
{
    return QLatin1String("");
}

QString Elemento1Plugin::whatsThis() const
{
    return QLatin1String("");
}

bool Elemento1Plugin::isContainer() const
{
    return false;
}

QString Elemento1Plugin::domXml() const
{
    return QLatin1String("<widget class=\"Elemento1\" name=\"elemento1\">\n</widget>\n");
}

QString Elemento1Plugin::includeFile() const
{
    return QLatin1String("elemento1.h");
}

