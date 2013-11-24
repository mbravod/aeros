#include "elemento3.h"
#include "elemento3plugin.h"

#include <QtCore/QtPlugin>

Elemento3Plugin::Elemento3Plugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void Elemento3Plugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool Elemento3Plugin::isInitialized() const
{
    return m_initialized;
}

QWidget *Elemento3Plugin::createWidget(QWidget *parent)
{
    return new Elemento3(parent);
}

QString Elemento3Plugin::name() const
{
    return QLatin1String("Elemento3");
}

QString Elemento3Plugin::group() const
{
    return QLatin1String("");
}

QIcon Elemento3Plugin::icon() const
{
    return QIcon();
}

QString Elemento3Plugin::toolTip() const
{
    return QLatin1String("");
}

QString Elemento3Plugin::whatsThis() const
{
    return QLatin1String("");
}

bool Elemento3Plugin::isContainer() const
{
    return false;
}

QString Elemento3Plugin::domXml() const
{
    return QLatin1String("<widget class=\"Elemento3\" name=\"elemento3\">\n</widget>\n");
}

QString Elemento3Plugin::includeFile() const
{
    return QLatin1String("elemento3.h");
}

