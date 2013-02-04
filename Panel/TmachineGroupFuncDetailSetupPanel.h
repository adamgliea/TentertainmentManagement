#ifndef TMACHINEGROUPFUNCDETAILSETUPPANEL_H
#define TMACHINEGROUPFUNCDETAILSETUPPANEL_H
#include <QtGui/QWidget>

#include "TDatabaseManager.h"
#include "TpanelBase.h"
#include "ui_TmachineGroupFuncDetailSetupViewItemAdd.h"
#include "ui_TmachineGroupFuncDetailSetupViewItemTable.h"

namespace YR2K {

    class TmachineGroupFuncDetailSetupPanel : public TpanelBase
    {
    public:
        TmachineGroupFuncDetailSetupPanel(QWidget* parent = NULL);
        ~TmachineGroupFuncDetailSetupPanel(void);

        virtual void                            doInitPanel(const TECategory& category);

    private:
        void                                    insertRecordToTable(const int rowIndex, const DBMachineDetailInfo& info);
    private:
        Ui::TmachineGroupFuncDetailSetupViewItemTable*     m_pMachineFuncSetupTable;
        Ui::TmachineGroupFuncDetailSetupViewItemAdd*       m_pMachineFuncSetupAddWidget;

        std::vector<DBMachineDetailInfo>                   m_vecMachineFuncDetailInfoFoundResult;
    };

}
#endif  // TMACHINEGROUPFUNCDETAILSETUPPANEL_H

