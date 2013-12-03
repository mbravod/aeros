#include "elemento2.h"
#include "elemento2plugin.h"

#include <QtCore/QtPlugin>

Elemento2Plugin::Elemento2Plugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void Elemento2Plugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool Elemento2Plugin::isInitialized() const
{
    return m_initialized;
}

QWidget *Elemento2Plugin::createWidget(QWidget *parent)
{
    return new Elemento2(parent);
}

QString Elemento2Plugin::name() const
{
    return QLatin1String("Elemento2");
}

QString Elemento2Plugin::group() const
{
    return QLatin1String("");
}

QIcon Elemento2Plugin::icon() const
{
    return QIcon();
}

QString Elemento2Plugin::toolTip() const
{
    return QLatin1String("");
}

QString Elemento2Plugin::whatsThis() const
{
    return QLatin1String("");
}

bool Elemento2Plugin::isContainer() const
{
    return false;
}

QString Elemento2Plugin::domXml() const
{
    return QLatin1String("<widget class=\"Elemento2\" name=\"elemento2\">\n</widget>\n");
}

QString Elemento2Plugin::includeFile() const
{
    return QLatin1String("elemento2.h");
}

