#include "elemento5.h"
#include "elemento5plugin.h"

#include <QtCore/QtPlugin>

Elemento5Plugin::Elemento5Plugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void Elemento5Plugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool Elemento5Plugin::isInitialized() const
{
    return m_initialized;
}

QWidget *Elemento5Plugin::createWidget(QWidget *parent)
{
    return new Elemento5(parent);
}

QString Elemento5Plugin::name() const
{
    return QLatin1String("Elemento5");
}

QString Elemento5Plugin::group() const
{
    return QLatin1String("");
}

QIcon Elemento5Plugin::icon() const
{
    return QIcon();
}

QString Elemento5Plugin::toolTip() const
{
    return QLatin1String("");
}

QString Elemento5Plugin::whatsThis() const
{
    return QLatin1String("");
}

bool Elemento5Plugin::isContainer() const
{
    return false;
}

QString Elemento5Plugin::domXml() const
{
    return QLatin1String("<widget class=\"Elemento5\" name=\"elemento5\">\n</widget>\n");
}

QString Elemento5Plugin::includeFile() const
{
    return QLatin1String("elemento5.h");
}

