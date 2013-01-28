#ifndef TMACHINEGROUPREPORTENTERTAINMENTPANEL_H
#define TMACHINEGROUPREPORTENTERTAINMENTPANEL_H

#include "TcommonTypes.h"
#include "TpanelBase.h"
#include <QtGui/QWidget>
#include "ui_TsearchWidget.h"
#include "ui_TmachineGroupReportEntertainmentViewItemTable.h"

namespace YR2K {
    class TmachineGroupReportEntertainmentPanel : public TpanelBase
    {
    public:
        TmachineGroupReportEntertainmentPanel(QWidget* parent = NULL);
        ~TmachineGroupReportEntertainmentPanel(void);

    private:
        Ui::TsearchWidget*                                  m_pSearchWidget;
        Ui::TmachineGroupReportEntertainmentViewItemTable*  m_pMachineGroupReportEntertainmentViewItemTable;
    };

}


#endif  // TMACHINEGROUPREPORTENTERTAINMENTPANEL_H

