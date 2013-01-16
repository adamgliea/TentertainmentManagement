#ifndef TMACHINEGROUPREPORTLOTTERYPANEL_H
#define TMACHINEGROUPREPORTLOTTERYPANEL_H
#include <QtGui/QWidget>
#include "ui_TsearchWidget.h"
#include "ui_TmachineGroupReportLotteryViewItemTable.h"

namespace YR2K {
    class TmachineGroupReportLotteryPanel : public QWidget
    {
    public:
        TmachineGroupReportLotteryPanel(QWidget* parent = NULL);
        ~TmachineGroupReportLotteryPanel(void);

    private:
        Ui::TsearchWidget*                            m_pSearchWidget;
        Ui::TmachineGroupReportLotteryViewItemTable*  m_pMachineGroupReportLotteryViewItemTable;

    };

}

#endif  // TMACHINEGROUPREPORTLOTTERYPANEL_H

