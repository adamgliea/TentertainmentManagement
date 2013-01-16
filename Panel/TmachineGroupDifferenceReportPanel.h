#ifndef TMACHINEGROUPDIFFERENCEREPORTPANEL_H
#define TMACHINEGROUPDIFFERENCEREPORTPANEL_H
#include <QtGui/QWidget>
#include "ui_TinventoryReportViewItemAddCoinWidget.h"
#include "ui_TinventoryReportViewItemClearCoinWidget.h"

namespace YR2K {

    class TmachineGroupDifferenceReportPanel : public QWidget
    {
    public:
        TmachineGroupDifferenceReportPanel(void);
        ~TmachineGroupDifferenceReportPanel(void);

    private:
        Ui::TinventoryReportViewItemAddCoinWidget*      m_pInventoryReportViewItemAddCoinWidget;
        Ui::TinventoryReportViewItemClearCoinWidget*    m_pInventoryReportViewItemClearCoinWidget;

    };

}
#endif  // TMACHINEGROUPDIFFERENCEREPORTPANEL_H

