#include "elemento9.h"
#include "elemento9plugin.h"

#include <QtCore/QtPlugin>

Elemento9Plugin::Elemento9Plugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void Elemento9Plugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool Elemento9Plugin::isInitialized() const
{
    return m_initialized;
}

QWidget *Elemento9Plugin::createWidget(QWidget *parent)
{
    return new Elemento9(parent);
}

QString Elemento9Plugin::name() const
{
    return QLatin1String("Elemento9");
}

QString Elemento9Plugin::group() const
{
    return QLatin1String("");
}

QIcon Elemento9Plugin::icon() const
{
    return QIcon();
}

QString Elemento9Plugin::toolTip() const
{
    return QLatin1String("");
}

QString Elemento9Plugin::whatsThis() const
{
    return QLatin1String("");
}

bool Elemento9Plugin::isContainer() const
{
    return false;
}

QString Elemento9Plugin::domXml() const
{
    return QLatin1String("<widget class=\"Elemento9\" name=\"elemento9\">\n</widget>\n");
}

QString Elemento9Plugin::includeFile() const
{
    return QLatin1String("elemento9.h");
}

