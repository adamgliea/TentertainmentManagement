#ifndef TMACHINEGROUPREPORTGIFTPANEL_H
#define TMACHINEGROUPREPORTGIFTPANEL_H

#include "TpanelBase.h"
#include <QtGui/QWidget>
#include "ui_TmachineGroupReportGiftViewItemTable.h"
#include "ui_TsearchWidget.h"

namespace YR2K {
    class TmachineGroupReportGiftPanel : public TpanelBase
    {
    public:
        TmachineGroupReportGiftPanel(QWidget* parent = NULL);
        ~TmachineGroupReportGiftPanel(void);

        virtual void                                doInitPanel(const TECategory& category);

    private:
        Ui::TsearchWidget*                         m_pSearchWidget;
        Ui::TmachineGroupReportGiftViewItemTable*  m_pMachineGroupReportGiftViewItemTable;

    };

}

#endif  // TMACHINEGROUPREPORTGIFTPANEL_H

