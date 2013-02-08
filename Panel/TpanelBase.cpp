#include "TpanelBase.h"

namespace YR2K {

    //---------------------------------------------------------------------
    TpanelBase::TpanelBase(QWidget* parent /*= NULL*/)
        : QWidget(parent)
        , m_eType(PANEL_INVALID)
    {
    }

    //---------------------------------------------------------------------
    TpanelBase::~TpanelBase(void)
    {
    }

    //---------------------------------------------------------------------
    TEPanelIndex TpanelBase::getType()
    {
        return m_eType;
    }

    //---------------------------------------------------------------------
    void TpanelBase::initPanel(const TECategory& category, unsigned int itemData)
    {
        if (category == CATEGORY_INVALID)
        {
            return;
        }

        doInitPanel(category, itemData);
    }

    //---------------------------------------------------------------------
    void TpanelBase::doInitPanel(const TECategory& category, unsigned int itemData)
    {

    }

    void TpanelBase::doHack()
    {

    }

}

