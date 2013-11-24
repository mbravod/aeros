#include "elemento8.h"
#include "elemento8plugin.h"

#include <QtCore/QtPlugin>

Elemento8Plugin::Elemento8Plugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void Elemento8Plugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool Elemento8Plugin::isInitialized() const
{
    return m_initialized;
}

QWidget *Elemento8Plugin::createWidget(QWidget *parent)
{
    return new Elemento8(parent);
}

QString Elemento8Plugin::name() const
{
    return QLatin1String("Elemento8");
}

QString Elemento8Plugin::group() const
{
    return QLatin1String("");
}

QIcon Elemento8Plugin::icon() const
{
    return QIcon();
}

QString Elemento8Plugin::toolTip() const
{
    return QLatin1String("");
}

QString Elemento8Plugin::whatsThis() const
{
    return QLatin1String("");
}

bool Elemento8Plugin::isContainer() const
{
    return false;
}

QString Elemento8Plugin::domXml() const
{
    return QLatin1String("<widget class=\"Elemento8\" name=\"elemento8\">\n</widget>\n");
}

QString Elemento8Plugin::includeFile() const
{
    return QLatin1String("elemento8.h");
}

