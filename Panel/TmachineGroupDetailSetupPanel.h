#ifndef TMACHINEGROUPDETAILSETUPPANEL_H
#define TMACHINEGROUPDETAILSETUPPANEL_H

#include "TpanelBase.h"
#include <QtGui/QWidget>
#include <QtGui/QPushButton>
#include "ui_TmachineDetailSetupViewItemTable.h"
#include "ui_TmachineDetailSetupViewItemAddWidget.h"

namespace YR2K {
    class TmachineGroupDetailSetupPanel : public TpanelBase
    {
    public:
        TmachineGroupDetailSetupPanel(QWidget* parent = NULL);
        ~TmachineGroupDetailSetupPanel(void);


    private:
        Ui::TmachineDetailSetupViewItemTable*           m_pMachineDetailSetupTable;
        Ui::TmachineDetailSetupViewItemAddWidget*       m_pMachineDetailSetupAddWidget;
        QPushButton*                                    m_pPushButton;
    };

}
#endif  // TMACHINEGROUPDETAILSETUPPANEL_H

