#ifndef TMACHINEGROUPFUNCBASESETUPPANEL_H
#define TMACHINEGROUPFUNCBASESETUPPANEL_H

#include "TpanelBase.h"
#include "TDatabaseManager.h"
#include <QtGui/QWidget>
#include <QtGui/QPushButton>
#include "ui_TmachineGroupFuncBaseSetupViewItemAddWidget.h"
#include "ui_TmachineGroupFuncBaseSetupViewItemTable.h"

namespace YR2K {
    class TmachineGroupFuncBaseSetupPanel : public TpanelBase
    {
        Q_OBJECT
    public:
        TmachineGroupFuncBaseSetupPanel(QWidget* parent = NULL);
        ~TmachineGroupFuncBaseSetupPanel(void);

        virtual void                                    doInitPanel(const TECategory& category, unsigned int itemData);

        DBMachineBaseInfo                               getInfo(void) const;

    signals:
        void                                            machineBaseRecordAdded(const DBMachineBaseInfo& machineBaseInfo);
        void                                            machineBaseRecordRemoved(const DBMachineBaseInfo& machineBaseInfo);

    private slots:
        void                                            onAddButtonClicked();
        void                                            onConfirmAddNewRecord();
        void                                            onCancelAddNewRecord();

        void                                            onCustomContextMenuRequested(const QPoint& pos);
        void                                            onRemoveActionTriggered();

    private:
        void                                            destroyAddWidgetPanel();
        void                                            insertRecordToTable(const int rowIndex, const DBMachineBaseInfo& info);
        void                                            createActions(void);

    private:
        Ui::TmachineDetailSetupViewItemTable*               m_pMachineBaseSetupTable;
        Ui::TmachineGroupFuncBaseSetupViewItemAddWidget*    m_pMachineBaseSetupAddWidget;
        QPushButton*                                        m_pPushButton;

        QWidget*                                            m_pAddWidgetPanel;

        QModelIndex                                         m_contextMenuTriggeredIndex;
        QMenu*                                              m_pContextMenu;
        QAction*                                            m_pRemoveAction;

        std::vector<DBMachineBaseInfo>                      m_vecMachineFuncBaseInfoFoundResult;

        TECategory                                          m_eCurrentOperatingCategory;
    };

}
#endif  // TMACHINEGROUPFUNCBASESETUPPANEL_H

