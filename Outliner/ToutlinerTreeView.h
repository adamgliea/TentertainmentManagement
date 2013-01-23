#ifndef TOUTLINERTREEVIEW_H
#define TOUTLINERTREEVIEW_H

#include <QtGui/QTreeView>

#include "TcommonTypes.h"

class QStandardItemModel;
class QStandardItem;

namespace YR2K {
    class ToutlinerTreeViewNode : public QWidget
    {
    public:
        ToutlinerTreeViewNode(const QString& name, QWidget* parent);
        ~ToutlinerTreeViewNode();

        QStandardItem*  getRoot() const;
        QStandardItem*  getCabinetCategoryNode() const;
        QStandardItem*  getLotteryCategory() const;
        QStandardItem*  getSimulateCategory() const;
        QStandardItem*  getCoinDozerCategory() const;
        QStandardItem*  getWagerCategory() const;

        void            addCategory(TECategory category);
        void            addAllCategories();
//         void            destroyIfNotAddedToQTWidget();
    private:
        QStandardItem*  m_pRoot;
        QStandardItem*  m_pCabinetCategory;
        QStandardItem*  m_pLotteryCategory;
        QStandardItem*  m_pSimulateCategory;
        QStandardItem*  m_pCoinDozerCategory;
        QStandardItem*  m_pWagerCategory;
    };


    class ToutlinerTreeView : public QWidget
    {
    public:
        ToutlinerTreeView(QWidget* parent = NULL);
        ~ToutlinerTreeView(void);

        QTreeView*              getTreeView() const;
    private:
        QTreeView*              m_pTreeView;
        QStandardItemModel*     m_pModel;

        ToutlinerTreeViewNode*  m_adminSetupPanelNode;
        ToutlinerTreeViewNode*  m_assetSetupPanelNode;
        ToutlinerTreeViewNode*  m_inventoryReportPanelNode;
        ToutlinerTreeViewNode*  m_machineFuncSetupPanelNode;
        ToutlinerTreeViewNode*  m_machineGroupDifferenceReportPanelNode;
        ToutlinerTreeViewNode*  m_machineGroupReportPanelNode;
        ToutlinerTreeViewNode*  m_warningSystemPanelNode;

    };

}


#endif  // TOUTLINERTREEVIEW_H

