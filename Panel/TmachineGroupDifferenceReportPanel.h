#ifndef TMACHINEGROUPDIFFERENCEREPORTPANEL_H
#define TMACHINEGROUPDIFFERENCEREPORTPANEL_H

#include "TpanelBase.h"
#include <QtGui/QWidget>
#include "ui_TmachineGroupDifferenceReportViewItemTable.h"

namespace YR2K {

    class TmachineGroupDifferenceReportPanel : public TpanelBase
    {
    public:
        TmachineGroupDifferenceReportPanel(QWidget* parent = NULL);
        ~TmachineGroupDifferenceReportPanel(void);

    private:
        Ui::TmachineGroupDifferenceReportViewItemTable*     m_pMachineGroupDifferenceReportViewItemTable;
    };

}
#endif  // TMACHINEGROUPDIFFERENCEREPORTPANEL_H

