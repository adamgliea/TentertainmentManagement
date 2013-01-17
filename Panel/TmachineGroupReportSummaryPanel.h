#ifndef TMACHINEGROUPREPORTSUMMARYPANEL_H
#define TMACHINEGROUPREPORTSUMMARYPANEL_H
#include <QtGui/QWidget>
#include "ui_TmachineGroupReportViewItemSummaryWidget.h"
#include "ui_TmachineGroupReportViewItemSummaryTable.h"
#include "ui_TinventoryReportViewItemAddCoinWidget.h"
#include "ui_TinventoryReportViewItemClearCoinWidget.h"

namespace YR2K {
    class TmachineGroupReportSummaryPanel : public QWidget
    {
    public:
        TmachineGroupReportSummaryPanel(QWidget* parent = NULL);
        ~TmachineGroupReportSummaryPanel(void);

    private:
        Ui::TmachineGroupReportViewItemSummaryWidget*   m_pMachineGroupReportViewItemSummaryWidget;
        Ui::TmachineGroupReportViewItemSummaryTable*    m_pMachineGroupReportViewItemSummaryTable;
        Ui::TinventoryReportViewItemAddCoinWidget*      m_pInventoryReportViewItemAddCoinWidget;
        Ui::TinventoryReportViewItemClearCoinWidget*    m_pInventoryReportViewItemClearCoinWidget;

    };

}

#endif  // TMACHINEGROUPREPORTSUMMARYPANEL_H

