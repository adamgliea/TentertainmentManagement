#include "TpanelCreator.h"
#include "TpanelBase.h"
#include "TpanelHeaders.h"

namespace YR2K {

    TpanelCreator* TpanelCreator::m_spCreator = NULL;

    //---------------------------------------------------------------------
    TpanelCreator::TpanelCreator(void)
    {
    }

    //---------------------------------------------------------------------
    TpanelCreator::~TpanelCreator(void)
    {
    }

    //---------------------------------------------------------------------
    TpanelCreator* TpanelCreator::getInstance()
    {
        if (!m_spCreator)
        {
            m_spCreator = new TpanelCreator();
        }

        return m_spCreator;
    }

    //---------------------------------------------------------------------
    void TpanelCreator::destroyInstance()
    {
        if (m_spCreator)
        {
            delete m_spCreator;
            m_spCreator = NULL;
        }
    }

    //---------------------------------------------------------------------
    TpanelBase* TpanelCreator::create( const TEPanelIndex& type )
    {
        TpanelBase* panel = NULL;

        switch (type)
        {
        case PANEL_INVALID:
            panel = new TpanelBase();
            break;
        case PANEL_WELCOME:
            panel = new TwelcomePanel();
            break;
        case PANEL_ASSET_SETUP:
            panel = new TassetSetupPanel();
            break;
        case PANEL_MACHINE_GROUP_FUNC_DETAIL_SETUP:
            panel = new TmachineGroupFuncDetailSetupPanel();
            break;
        case PANEL_ADMIN_SETUP:
            panel = new TadminSetupPanel();
            break;
        case PANEL_MACHINE_GROUP_DETAIL_SETUP:
            panel = new TmachineGroupFuncBaseSetupPanel();
            break;
        case PANEL_MACHINE_GROUP_REPORT_ENTERAINTMENT:
            panel = new TmachineGroupReportEntertainmentPanel();
            break;
        case PANEL_MACHINE_GROUP_REPORT_GIFT:
            panel = new TmachineGroupReportGiftPanel();
            break;
        case PANEL_MACHINE_GROUP_REPORT_LOTTERY:
            panel = new TmachineGroupReportLotteryPanel();
            break;
        case PANEL_INVENTORY_REPORT:
            panel = new TinventoryReportPanel();
            break;
        case PANEL_MACHINE_GROUP_DIFFERENCE:
            panel = new TmachineGroupDifferenceReportPanel();
            break;
        case PANEL_WARNING_SYSTEM:
            panel = new TwarningSystemPanel();
            break;
        default:
            break;
        }

        return panel;
    }


}

