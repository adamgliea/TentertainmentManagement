#ifndef TMACHINEGROUPREPORTGIFTPANEL_H
#define TMACHINEGROUPREPORTGIFTPANEL_H
#include <QtGui/QWidget>
#include "ui_TmachineGroupReportGiftViewItemTable.h"
#include "ui_TsearchWidget.h"

namespace YR2K {
    class TmachineGroupReportGiftPanel : public QWidget
    {
    public:
        TmachineGroupReportGiftPanel(QWidget* parent = NULL);
        ~TmachineGroupReportGiftPanel(void);

    private:
        Ui::TsearchWidget*                         m_pSearchWidget;
        Ui::TmachineGroupReportGiftViewItemTable*  m_pMachineGroupReportGiftViewItemTable;

    };

}

#endif  // TMACHINEGROUPREPORTGIFTPANEL_H

