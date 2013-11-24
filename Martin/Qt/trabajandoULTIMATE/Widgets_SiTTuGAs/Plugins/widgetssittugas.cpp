#include "flama_sectoraplugin.h"
#include "flama_sectorbplugin.h"
#include "flama_sectorcplugin.h"
#include "flama_sectordplugin.h"
#include "flama_sectoreplugin.h"
#include "flama_sectorfplugin.h"
#include "flama_sectorgplugin.h"
#include "flama_sectorhplugin.h"
#include "flama_sectoriplugin.h"
#include "flama_sectorjplugin.h"
#include "flama_sectorkplugin.h"
#include "flama_sectorlplugin.h"
#include "flama_anexomplugin.h"
#include "flama_anexonplugin.h"
#include "wventiladorplugin.h"
#include "wbombaplugin.h"
#include "welementos_bplugin.h"
#include "welemento_aplugin.h"
#include "welemento_cplugin.h"
#include "welemento_dplugin.h"
#include "welemento_eplugin.h"
#include "welemento_fplugin.h"
#include "welemento_gplugin.h"
#include "welemento_hplugin.h"
#include "widgetssittugas.h"

WidgetsSiTTuGAs::WidgetsSiTTuGAs(QObject *parent)
    : QObject(parent)
{
    m_widgets.append(new Flama_SectorAPlugin(this));
    m_widgets.append(new Flama_SectorBPlugin(this));
    m_widgets.append(new Flama_SectorCPlugin(this));
    m_widgets.append(new Flama_SectorDPlugin(this));
    m_widgets.append(new Flama_SectorEPlugin(this));
    m_widgets.append(new Flama_SectorFPlugin(this));
    m_widgets.append(new Flama_SectorGPlugin(this));
    m_widgets.append(new Flama_SectorHPlugin(this));
    m_widgets.append(new Flama_SectorIPlugin(this));
    m_widgets.append(new Flama_SectorJPlugin(this));
    m_widgets.append(new Flama_SectorKPlugin(this));
    m_widgets.append(new Flama_SectorLPlugin(this));
    m_widgets.append(new Flama_AnexoMPlugin(this));
    m_widgets.append(new Flama_AnexoNPlugin(this));
    m_widgets.append(new wVentiladorPlugin(this));
    m_widgets.append(new wBombaPlugin(this));
    m_widgets.append(new wElementos_BPlugin(this));
    m_widgets.append(new wElemento_APlugin(this));
    m_widgets.append(new wElemento_CPlugin(this));
    m_widgets.append(new wElemento_DPlugin(this));
    m_widgets.append(new wElemento_EPlugin(this));
    m_widgets.append(new wElemento_FPlugin(this));
    m_widgets.append(new wElemento_GPlugin(this));
    m_widgets.append(new wElemento_HPlugin(this));
    
}

QList<QDesignerCustomWidgetInterface*> WidgetsSiTTuGAs::customWidgets() const
{
    return m_widgets;
}

Q_EXPORT_PLUGIN2(widgetssittugasplugin, WidgetsSiTTuGAs)
