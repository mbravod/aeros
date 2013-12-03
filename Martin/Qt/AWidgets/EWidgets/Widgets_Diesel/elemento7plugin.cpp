#include "elemento7.h"
#include "elemento7plugin.h"

#include <QtCore/QtPlugin>

Elemento7Plugin::Elemento7Plugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void Elemento7Plugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool Elemento7Plugin::isInitialized() const
{
    return m_initialized;
}

QWidget *Elemento7Plugin::createWidget(QWidget *parent)
{
    return new Elemento7(parent);
}

QString Elemento7Plugin::name() const
{
    return QLatin1String("Elemento7");
}

QString Elemento7Plugin::group() const
{
    return QLatin1String("");
}

QIcon Elemento7Plugin::icon() const
{
    return QIcon();
}

QString Elemento7Plugin::toolTip() const
{
    return QLatin1String("");
}

QString Elemento7Plugin::whatsThis() const
{
    return QLatin1String("");
}

bool Elemento7Plugin::isContainer() const
{
    return false;
}

QString Elemento7Plugin::domXml() const
{
    return QLatin1String("<widget class=\"Elemento7\" name=\"elemento7\">\n</widget>\n");
}

QString Elemento7Plugin::includeFile() const
{
    return QLatin1String("elemento7.h");
}

