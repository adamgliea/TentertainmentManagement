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
    void TpanelBase::initPanel(const TECategory& category)
    {
        if (category == CATEGORY_INVALID)
        {
            return;
        }

        doInitPanel(category);
    }

    //---------------------------------------------------------------------
    void TpanelBase::doInitPanel(const TECategory& category)
    {

    }

}

