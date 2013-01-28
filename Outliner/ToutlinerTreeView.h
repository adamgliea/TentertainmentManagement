#ifndef TOUTLINERTREEVIEW_H
#define TOUTLINERTREEVIEW_H

#include <QtGui/QTreeView>

#include "TcommonTypes.h"

class QStandardItemModel;
class QStandardItem;

namespace YR2K {


    class ToutlinerTreeView : public QWidget
    {
        Q_OBJECT
    public:
        ToutlinerTreeView(QWidget* parent = NULL);
        ~ToutlinerTreeView(void);

        QTreeView*              getTreeView() const;
        QStandardItemModel*     getTreeViewModel() const;

    signals:
        void                    treeMenuClicked(const TEPanelIndex& type);

    private slots:
        void                    onTreeViewClicked(const QModelIndex& modelIndex);

    private:
        QTreeView*              m_pTreeView;
        QStandardItemModel*     m_pModel;

        QStandardItem*          m_adminSetupPanelNode;
        QStandardItem*          m_assetSetupPanelNode;
        QStandardItem*          m_inventoryReportPanelNode;
        QStandardItem*          m_machineFuncSetupPanelNode;
        QStandardItem*          m_machineGroupDetailSetupPanelNode;
        QStandardItem*          m_machineGroupReportEntertainmentPanelNode;
        QStandardItem*          m_machineGroupReportGiftPanelNode;
        QStandardItem*          m_machineGroupReportLotteryPanelNode;
        QStandardItem*          m_machineGroupReportSummaryPanelNode;
        QStandardItem*          m_machineGroupDifferenceReportPanelNode;
        QStandardItem*          m_machineGroupReportPanelNode;
        QStandardItem*          m_warningSystemPanelNode;

    };

}


#endif  // TOUTLINERTREEVIEW_H

