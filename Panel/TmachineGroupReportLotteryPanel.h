#ifndef TMACHINEGROUPREPORTLOTTERYPANEL_H
#define TMACHINEGROUPREPORTLOTTERYPANEL_H

#include "TpanelBase.h"
#include <QtGui/QWidget>
#include "ui_TsearchWidget.h"
#include "ui_TmachineGroupReportLotteryViewItemTable.h"

namespace YR2K {
    class TmachineGroupReportLotteryPanel : public TpanelBase
    {
    public:
        TmachineGroupReportLotteryPanel(QWidget* parent = NULL);
        ~TmachineGroupReportLotteryPanel(void);

        virtual void                                    doInitPanel(const TECategory& category);

    private:
        Ui::TsearchWidget*                              m_pSearchWidget;
        Ui::TmachineGroupReportLotteryViewItemTable*    m_pMachineGroupReportLotteryViewItemTable;

    };

}

#endif  // TMACHINEGROUPREPORTLOTTERYPANEL_H

