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
        Q_OBJECT
    public:
        TmachineGroupFuncDetailSetupPanel(QWidget* parent = NULL);
        ~TmachineGroupFuncDetailSetupPanel(void);

        virtual void                                    doInitPanel(const TECategory& category);

        DBMachineDetailInfo                             getInfo(void) const;

    private slots:
        void                                            onUpdateActionTriggered();
        void                                            onConfirmUpdateNewRecord();
        void                                            onCancelUpdateNewRecord();

        void                                            onCustomContextMenuRequested(const QPoint& pos);

    private:
        void                                            destroyUpdateWidgetPanel();
        void                                            insertRecordToTable(const int rowIndex, const DBMachineDetailInfo& info);
        void                                            createActions(void);
        void                                            initUpdateWidgetPanel(Ui::TmachineGroupFuncDetailSetupViewItemAdd* widget);

    private:
        Ui::TmachineGroupFuncDetailSetupViewItemTable*  m_pMachineFuncDetailSetupTable;
        Ui::TmachineGroupFuncDetailSetupViewItemAdd*    m_pMachineFuncDetailSetupAddWidget;

        std::vector<DBMachineDetailInfo>                m_vecMachineFuncDetailInfoFoundResult;

        QWidget*                                        m_pUpdateWidgetPanel;

        QModelIndex                                     m_contextMenuTriggeredIndex;
        QMenu*                                          m_pContextMenu;
        QAction*                                        m_pUpdateAction;

        TECategory                                      m_eCurrentOperatingCategory;

        unsigned int                                    m_uiCurrentUpdateMachineId;
    };

}
#endif  // TMACHINEGROUPFUNCDETAILSETUPPANEL_H

