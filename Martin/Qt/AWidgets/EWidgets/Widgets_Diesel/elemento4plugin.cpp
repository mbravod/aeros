#include "elemento4.h"
#include "elemento4plugin.h"

#include <QtCore/QtPlugin>

Elemento4Plugin::Elemento4Plugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void Elemento4Plugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool Elemento4Plugin::isInitialized() const
{
    return m_initialized;
}

QWidget *Elemento4Plugin::createWidget(QWidget *parent)
{
    return new Elemento4(parent);
}

QString Elemento4Plugin::name() const
{
    return QLatin1String("Elemento4");
}

QString Elemento4Plugin::group() const
{
    return QLatin1String("");
}

QIcon Elemento4Plugin::icon() const
{
    return QIcon();
}

QString Elemento4Plugin::toolTip() const
{
    return QLatin1String("");
}

QString Elemento4Plugin::whatsThis() const
{
    return QLatin1String("");
}

bool Elemento4Plugin::isContainer() const
{
    return false;
}

QString Elemento4Plugin::domXml() const
{
    return QLatin1String("<widget class=\"Elemento4\" name=\"elemento4\">\n</widget>\n");
}

QString Elemento4Plugin::includeFile() const
{
    return QLatin1String("elemento4.h");
}

