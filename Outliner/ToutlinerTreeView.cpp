#include "ToutlinerTreeView.h"
#include "DatabaseResultModel.h"
#include <QtGui/QStandardItem>
#include <QtGui/QStandardItemModel>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>

namespace YR2K {

    //---------------------------------------------------------------------
    ToutlinerTreeView::ToutlinerTreeView( QWidget* parent /*= NULL*/ )
        : QWidget(parent)
        , m_pTreeView(NULL)
        , m_pModel(NULL)
        , m_adminSetupPanelNode(NULL)
        , m_assetSetupPanelNode(NULL)
        , m_assetSetupPanelCabinetNode(NULL)
        , m_assetSetupPanelLotteryNode(NULL)
        , m_assetSetupPanelSimulateNode(NULL)
        , m_assetSetupPanelCoindozerNode(NULL)
        , m_assetSetupPanelWagerNode(NULL)
        , m_machineGroupFuncDetailSetupPanelNode(NULL)
        , m_machineGroupFuncDetailSetupPanelCabinetNode(NULL)
        , m_machineGroupFuncDetailSetupPanelLotteryNode(NULL)
        , m_machineGroupFuncDetailSetupPanelSimulateNode(NULL)
        , m_machineGroupFuncDetailSetupPanelCoindozerNode(NULL)
        , m_machineGroupFuncDetailSetupPanelWagerNode(NULL)
        , m_machineGroupFuncBaseSetupPanel(NULL)
        , m_machineGroupFuncBaseSetupPanelCabinetNode(NULL)
        , m_machineGroupFuncBaseSetupPanelLotteryNode(NULL)
        , m_machineGroupFuncBaseSetupPanelSimulateNode(NULL)
        , m_machineGroupFuncBaseSetupPanelCoindozerNode(NULL)
        , m_machineGroupFuncBaseSetupPanelWagerNode(NULL)
        , m_machineGroupReportEntertainmentPanelNode(NULL)
        , m_machineGroupReportGiftPanelNode(NULL)
        , m_machineGroupReportLotteryPanelNode(NULL)
        , m_machineGroupReportSummaryPanelNode(NULL)
        , m_machineGroupDifferenceReportPanelNode(NULL)
        , m_machineGroupReportPanelNode(NULL)
        , m_inventoryReportPanelNode(NULL)
        , m_inventoryReportPanelCabinetNode(NULL)
        , m_inventoryReportPanelLotteryNode(NULL)
        , m_inventoryReportPanelSimulateNode(NULL)
        , m_inventoryReportPanelCoindozerNode(NULL)
        , m_inventoryReportPanelWagerNode(NULL)
        , m_warningSystemPanelNode(NULL)

    {
        m_pTreeView = new QTreeView(this);
        m_pModel = new QStandardItemModel(m_pTreeView);

        QStandardItem* invisiableRoot = m_pModel->invisibleRootItem();

        m_adminSetupPanelNode = new QStandardItem(tr("账户设定"));
        m_assetSetupPanelNode = new QStandardItem(tr("资产设定"));
        m_assetSetupPanelCabinetNode = new QStandardItem(tr("柜体类"));
        m_assetSetupPanelLotteryNode = new QStandardItem(tr("彩票类"));
        m_assetSetupPanelSimulateNode = new QStandardItem(tr("模拟类"));
        m_assetSetupPanelCoindozerNode = new QStandardItem(tr("推币类"));
        m_assetSetupPanelWagerNode = new QStandardItem(tr("博彩类"));

        m_machineGroupDifferenceReportPanelNode = new QStandardItem(tr("机组差异报表"));
        m_machineGroupReportPanelNode = new QStandardItem(tr("机组报表"));
        m_warningSystemPanelNode = new QStandardItem(tr("警告报表"));

        m_machineGroupFuncDetailSetupPanelNode = new QStandardItem(tr("机台功能设定"));
        m_machineGroupFuncDetailSetupPanelCabinetNode = new QStandardItem(tr("柜体类"));
        m_machineGroupFuncDetailSetupPanelLotteryNode = new QStandardItem(tr("彩票类"));
        m_machineGroupFuncDetailSetupPanelSimulateNode = new QStandardItem(tr("模拟类"));
        m_machineGroupFuncDetailSetupPanelCoindozerNode = new QStandardItem(tr("推币类"));
        m_machineGroupFuncDetailSetupPanelWagerNode = new QStandardItem(tr("博彩类"));

        m_machineGroupFuncBaseSetupPanel = new QStandardItem(tr("机组明细设置"));
        m_machineGroupFuncBaseSetupPanelCabinetNode = new QStandardItem(tr("柜体类"));
        m_machineGroupFuncBaseSetupPanelLotteryNode = new QStandardItem(tr("彩票类"));
        m_machineGroupFuncBaseSetupPanelSimulateNode = new QStandardItem(tr("模拟类"));
        m_machineGroupFuncBaseSetupPanelCoindozerNode = new QStandardItem(tr("推币类"));
        m_machineGroupFuncBaseSetupPanelWagerNode = new QStandardItem(tr("博彩类"));

        m_machineGroupReportEntertainmentPanelNode = new QStandardItem(tr("娱乐机"));
        m_machineGroupReportGiftPanelNode = new QStandardItem(tr("礼品机"));
        m_machineGroupReportLotteryPanelNode = new QStandardItem(tr("博彩机"));
        m_machineGroupReportSummaryPanelNode = new QStandardItem(tr("机组总报表"));

        m_inventoryReportPanelNode = new QStandardItem(tr("库存设定"));
        m_inventoryReportPanelCabinetNode = new QStandardItem(tr("柜体类"));
        m_inventoryReportPanelLotteryNode = new QStandardItem(tr("彩票类"));
        m_inventoryReportPanelSimulateNode = new QStandardItem(tr("模拟类"));
        m_inventoryReportPanelCoindozerNode = new QStandardItem(tr("推币类"));
        m_inventoryReportPanelWagerNode = new QStandardItem(tr("博彩类"));


        invisiableRoot->appendRow(m_adminSetupPanelNode);
        invisiableRoot->appendRow(m_assetSetupPanelNode);
            m_assetSetupPanelNode->appendRow(m_assetSetupPanelCabinetNode);
            m_assetSetupPanelNode->appendRow(m_assetSetupPanelLotteryNode);
            m_assetSetupPanelNode->appendRow(m_assetSetupPanelSimulateNode);
            m_assetSetupPanelNode->appendRow(m_assetSetupPanelCoindozerNode);
            m_assetSetupPanelNode->appendRow(m_assetSetupPanelWagerNode);

        invisiableRoot->appendRow(m_machineGroupDifferenceReportPanelNode);

        invisiableRoot->appendRow(m_machineGroupFuncDetailSetupPanelNode);
            m_machineGroupFuncDetailSetupPanelNode->appendRow(m_machineGroupFuncDetailSetupPanelCabinetNode);
            m_machineGroupFuncDetailSetupPanelNode->appendRow(m_machineGroupFuncDetailSetupPanelLotteryNode);
            m_machineGroupFuncDetailSetupPanelNode->appendRow(m_machineGroupFuncDetailSetupPanelSimulateNode);
            m_machineGroupFuncDetailSetupPanelNode->appendRow(m_machineGroupFuncDetailSetupPanelCoindozerNode);
            m_machineGroupFuncDetailSetupPanelNode->appendRow(m_machineGroupFuncDetailSetupPanelWagerNode);

        invisiableRoot->appendRow(m_machineGroupFuncBaseSetupPanel);
            m_machineGroupFuncBaseSetupPanel->appendRow(m_machineGroupFuncBaseSetupPanelCabinetNode);
            m_machineGroupFuncBaseSetupPanel->appendRow(m_machineGroupFuncBaseSetupPanelLotteryNode);
            m_machineGroupFuncBaseSetupPanel->appendRow(m_machineGroupFuncBaseSetupPanelSimulateNode);
            m_machineGroupFuncBaseSetupPanel->appendRow(m_machineGroupFuncBaseSetupPanelCoindozerNode);
            m_machineGroupFuncBaseSetupPanel->appendRow(m_machineGroupFuncBaseSetupPanelWagerNode);

        invisiableRoot->appendRow(m_machineGroupReportPanelNode);
            m_machineGroupReportPanelNode->appendRow(m_machineGroupReportEntertainmentPanelNode);
            m_machineGroupReportPanelNode->appendRow(m_machineGroupReportGiftPanelNode);
            m_machineGroupReportPanelNode->appendRow(m_machineGroupReportLotteryPanelNode);
            m_machineGroupReportPanelNode->appendRow(m_machineGroupReportSummaryPanelNode);

        invisiableRoot->appendRow(m_inventoryReportPanelNode);
            m_inventoryReportPanelNode->appendRow(m_inventoryReportPanelCabinetNode);
            m_inventoryReportPanelNode->appendRow(m_inventoryReportPanelLotteryNode);
            m_inventoryReportPanelNode->appendRow(m_inventoryReportPanelSimulateNode);
            m_inventoryReportPanelNode->appendRow(m_inventoryReportPanelCoindozerNode);
            m_inventoryReportPanelNode->appendRow(m_inventoryReportPanelWagerNode);

        invisiableRoot->appendRow(m_warningSystemPanelNode);

        m_adminSetupPanelNode->setEditable(false);

        m_assetSetupPanelNode->setEditable(false);
            m_assetSetupPanelCabinetNode->setEditable(false);
            m_assetSetupPanelLotteryNode->setEditable(false);
            m_assetSetupPanelSimulateNode->setEditable(false);
            m_assetSetupPanelCoindozerNode->setEditable(false);
            m_assetSetupPanelWagerNode->setEditable(false);

        m_machineGroupDifferenceReportPanelNode->setEditable(false);
        m_machineGroupReportPanelNode->setEditable(false);
        m_warningSystemPanelNode->setEditable(false);

        m_machineGroupFuncDetailSetupPanelNode->setEditable(false);
            m_machineGroupFuncDetailSetupPanelCabinetNode->setEditable(false);
            m_machineGroupFuncDetailSetupPanelLotteryNode->setEditable(false);
            m_machineGroupFuncDetailSetupPanelSimulateNode->setEditable(false);
            m_machineGroupFuncDetailSetupPanelCoindozerNode->setEditable(false);
            m_machineGroupFuncDetailSetupPanelWagerNode->setEditable(false);

        m_machineGroupFuncBaseSetupPanel->setEditable(false);
            m_machineGroupFuncBaseSetupPanelCabinetNode->setEditable(false);
            m_machineGroupFuncBaseSetupPanelLotteryNode->setEditable(false);
            m_machineGroupFuncBaseSetupPanelSimulateNode->setEditable(false);
            m_machineGroupFuncBaseSetupPanelCoindozerNode->setEditable(false);
            m_machineGroupFuncBaseSetupPanelWagerNode->setEditable(false);

        m_machineGroupReportEntertainmentPanelNode->setEditable(false);
        m_machineGroupReportGiftPanelNode->setEditable(false);
        m_machineGroupReportLotteryPanelNode->setEditable(false);
        m_machineGroupReportSummaryPanelNode->setEditable(false);

        m_inventoryReportPanelNode->setEditable(false);
            m_inventoryReportPanelCabinetNode->setEditable(false);
            m_inventoryReportPanelLotteryNode->setEditable(false);
            m_inventoryReportPanelSimulateNode->setEditable(false);
            m_inventoryReportPanelCoindozerNode->setEditable(false);
            m_inventoryReportPanelWagerNode->setEditable(false);

        m_warningSystemPanelNode->setEditable(false);

        m_pTreeView->setModel(m_pModel);
        m_pTreeView->expandAll();

        QVBoxLayout* mainLayout = new QVBoxLayout(this);

        mainLayout->addWidget(m_pTreeView);
        setLayout(mainLayout);

        connect(m_pTreeView, SIGNAL(clicked(const QModelIndex&)), this, SLOT(onTreeViewClicked(const QModelIndex&)));

    }

    //---------------------------------------------------------------------
    ToutlinerTreeView::~ToutlinerTreeView(void)
    {
    }

    //---------------------------------------------------------------------
    QTreeView* ToutlinerTreeView::getTreeView() const
    {
        return m_pTreeView;
    }

    //---------------------------------------------------------------------
    QStandardItemModel* ToutlinerTreeView::getTreeViewModel() const
    {
        return m_pModel;
    }

    //---------------------------------------------------------------------
    void ToutlinerTreeView::onTreeViewClicked( const QModelIndex& modelIndex)
    {

        if (loadPanelIfAssetSetupTreeMenuClicked(modelIndex))
        {
            return;
        }

        if (loadPanelIfMachineGroupFuncBaseSetupTreeMenuClicked(modelIndex))
        {
            return;
        }

        if (loadPanelIfMachineGroupFuncDetailTreeMenuClicked(modelIndex))
        {
            return;
        }

        if (loadPanelIfInventoryReportTreeMenuClicked(modelIndex))
        {
            return;
        }
    }

    //---------------------------------------------------------------------
    bool ToutlinerTreeView::loadPanelIfAssetSetupTreeMenuClicked(const QModelIndex& modelIndex)
    {
        QStandardItem* item = m_pModel->itemFromIndex(modelIndex);

        // Asset setup node clicked.
        // 
        if (item == m_assetSetupPanelNode)
        {
            emit treeMenuClicked(PANEL_INVALID, CATEGORY_INVALID, 0);
            return true;
        }
        if (item == m_assetSetupPanelCabinetNode)
        {
            emit treeMenuClicked(PANEL_ASSET_SETUP, CATEGORY_CABINET, 0);
            return true;
        }
        else if (item == m_assetSetupPanelLotteryNode)
        {
            emit treeMenuClicked(PANEL_ASSET_SETUP, CATEGORY_LOTTERY, 0);
            return true;
        }
        else if (item == m_assetSetupPanelSimulateNode)
        {
            emit treeMenuClicked(PANEL_ASSET_SETUP, CATEGORY_SIMULATE, 0);
            return true;
        }
        else if (item == m_assetSetupPanelCoindozerNode)
        {
            emit treeMenuClicked(PANEL_ASSET_SETUP, CATEGORY_COINDOZER, 0);
            return true;
        }
        else if (item == m_assetSetupPanelWagerNode)
        {
            emit treeMenuClicked(PANEL_ASSET_SETUP, CATEGORY_WAGER, 0);
            return true;
        }

        return false;
    }

    //---------------------------------------------------------------------
    bool ToutlinerTreeView::loadPanelIfMachineGroupFuncBaseSetupTreeMenuClicked(const QModelIndex& modelIndex)
    {
        QStandardItem* item = m_pModel->itemFromIndex(modelIndex);

        // Machine group func base setup node clicked.
        // 
        if (item == m_machineGroupFuncBaseSetupPanel)
        {
            emit treeMenuClicked(PANEL_INVALID, CATEGORY_INVALID, 0);
            return true;
        }
        if (item == m_machineGroupFuncBaseSetupPanelCabinetNode)
        {
            emit treeMenuClicked(PANEL_MACHINE_GROUP_FUNC_BASE_SETUP, CATEGORY_CABINET, 0);
            return true;
        }
        else if (item == m_machineGroupFuncBaseSetupPanelLotteryNode)
        {
            emit treeMenuClicked(PANEL_MACHINE_GROUP_FUNC_BASE_SETUP, CATEGORY_LOTTERY, 0);
            return true;
        }
        else if (item == m_machineGroupFuncBaseSetupPanelSimulateNode)
        {
            emit treeMenuClicked(PANEL_MACHINE_GROUP_FUNC_BASE_SETUP, CATEGORY_SIMULATE, 0);
            return true;
        }
        else if (item == m_machineGroupFuncBaseSetupPanelCoindozerNode)
        {
            emit treeMenuClicked(PANEL_MACHINE_GROUP_FUNC_BASE_SETUP, CATEGORY_COINDOZER, 0);
            return true;
        }
        else if (item == m_machineGroupFuncBaseSetupPanelWagerNode)
        {
            emit treeMenuClicked(PANEL_MACHINE_GROUP_FUNC_BASE_SETUP, CATEGORY_WAGER, 0);
            return true;
        }

        return false;
    }

    //---------------------------------------------------------------------
    bool ToutlinerTreeView::loadPanelIfMachineGroupFuncDetailTreeMenuClicked(const QModelIndex& modelIndex)
    {
        QStandardItem* item = m_pModel->itemFromIndex(modelIndex);

        // Machine group detail setup node clicked.
        // 
        if (item == m_machineGroupFuncDetailSetupPanelNode)
        {
            emit treeMenuClicked(PANEL_INVALID, CATEGORY_INVALID, 0);
            return true;
        }
        if (item == m_machineGroupFuncDetailSetupPanelCabinetNode)
        {
            emit treeMenuClicked(PANEL_MACHINE_GROUP_FUNC_DETAIL_SETUP, CATEGORY_CABINET, 0);
            return true;
        }
        else if (item == m_machineGroupFuncDetailSetupPanelLotteryNode)
        {
            emit treeMenuClicked(PANEL_MACHINE_GROUP_FUNC_DETAIL_SETUP, CATEGORY_LOTTERY, 0);
            return true;
        }
        else if (item == m_machineGroupFuncDetailSetupPanelSimulateNode)
        {
            emit treeMenuClicked(PANEL_MACHINE_GROUP_FUNC_DETAIL_SETUP, CATEGORY_SIMULATE, 0);
            return true;
        }
        else if (item == m_machineGroupFuncDetailSetupPanelCoindozerNode)
        {
            emit treeMenuClicked(PANEL_MACHINE_GROUP_FUNC_DETAIL_SETUP, CATEGORY_COINDOZER, 0);
            return true;
        }
        else if (item == m_machineGroupFuncDetailSetupPanelWagerNode)
        {
            emit treeMenuClicked(PANEL_MACHINE_GROUP_FUNC_DETAIL_SETUP, CATEGORY_WAGER, 0);
            return true;
        }

        return false;
    }

    //---------------------------------------------------------------------
    bool ToutlinerTreeView::loadPanelIfInventoryReportTreeMenuClicked(const QModelIndex& modelIndex)
    {
        QStandardItem* item = m_pModel->itemFromIndex(modelIndex);

        // Inventory setup node clicked.
        // 
        if (item == m_inventoryReportPanelNode)
        {
            emit treeMenuClicked(PANEL_INVALID, CATEGORY_INVALID, 0);
            return true;
        }

        if (item == m_inventoryReportPanelCabinetNode)
        {
            emit treeMenuClicked(PANEL_INVALID, CATEGORY_INVALID, 0);
            return true;
        }
        else if (item == m_inventoryReportPanelLotteryNode)
        {
            emit treeMenuClicked(PANEL_INVALID, CATEGORY_INVALID, 0);
            return true;
        }
        else if (item == m_inventoryReportPanelSimulateNode)
        {
            emit treeMenuClicked(PANEL_INVALID, CATEGORY_INVALID, 0);
            return true;
        }
        else if (item == m_inventoryReportPanelCoindozerNode)
        {
            emit treeMenuClicked(PANEL_INVALID, CATEGORY_INVALID, 0);
            return true;
        }
        else if (item == m_inventoryReportPanelWagerNode)
        {
            emit treeMenuClicked(PANEL_INVALID, CATEGORY_INVALID, 0);
            return true;
        }


        if (item->parent() == m_inventoryReportPanelCabinetNode)
        {
            emit treeMenuClicked(PANEL_INVENTORY_REPORT, CATEGORY_CABINET, 0);
            return true;
        }
        else if (item->parent() == m_inventoryReportPanelLotteryNode)
        {
            emit treeMenuClicked(PANEL_INVENTORY_REPORT, CATEGORY_LOTTERY, 0);
            return true;
        }
        else if (item->parent() == m_inventoryReportPanelSimulateNode)
        {
            emit treeMenuClicked(PANEL_INVENTORY_REPORT, CATEGORY_SIMULATE, 0);
            return true;
        }
        else if (item->parent() == m_inventoryReportPanelCoindozerNode)
        {
            emit treeMenuClicked(PANEL_INVENTORY_REPORT, CATEGORY_COINDOZER, 0);
            return true;
        }
        else if (item->parent() == m_inventoryReportPanelWagerNode)
        {
            emit treeMenuClicked(PANEL_INVENTORY_REPORT, CATEGORY_WAGER, 0);
            return true;
        }

        return false;
    }

    //---------------------------------------------------------------------
    void ToutlinerTreeView::initInventoryTreeNode()
    {
        Q_ASSERT_X(m_inventoryReportPanelCabinetNode != NULL, "", "");
        Q_ASSERT_X(m_inventoryReportPanelLotteryNode != NULL, "", "");
        Q_ASSERT_X(m_inventoryReportPanelSimulateNode != NULL, "", "");
        Q_ASSERT_X(m_inventoryReportPanelCoindozerNode != NULL, "", "");
        Q_ASSERT_X(m_inventoryReportPanelWagerNode != NULL, "", "");

        if (m_inventoryReportPanelCabinetNode)
        {
            emit initInventoryTreeCabinetNode(m_inventoryReportPanelCabinetNode);
        }

        if (m_inventoryReportPanelLotteryNode)
        {
            emit initInventoryTreeLotteryNode(m_inventoryReportPanelLotteryNode);
        }

        if (m_inventoryReportPanelSimulateNode)
        {
            emit initInventoryTreeSimulateNode(m_inventoryReportPanelSimulateNode);
        }
        
        if (m_inventoryReportPanelCoindozerNode)
        {
            emit initInventoryTreeCoindozerNode(m_inventoryReportPanelCoindozerNode);
        }

        if (m_inventoryReportPanelWagerNode)
        {
            emit initInventoryTreeWagerNode(m_inventoryReportPanelWagerNode);
        }

    }

    //---------------------------------------------------------------------
    void ToutlinerTreeView::onMachineBaseRecordAdded( const DBMachineBaseInfo& machineBaseInfo )
    {
        int assetType = machineBaseInfo.assetType;

        QStandardItem* item = new QStandardItem(tr(machineBaseInfo.factoryName.c_str()));
        item->setData(machineBaseInfo.machineId, Qt::UserRole);
        item->setEditable(false);

        switch (assetType)
        {
        case CATEGORY_CABINET:
            m_inventoryReportPanelCabinetNode->appendRow(item);
            break;
        case CATEGORY_LOTTERY:
            m_inventoryReportPanelLotteryNode->appendRow(item);
            break;
        case CATEGORY_SIMULATE:
            m_inventoryReportPanelSimulateNode->appendRow(item);
            break;
        case CATEGORY_COINDOZER:
            m_inventoryReportPanelCoindozerNode->appendRow(item);
            break;
        case CATEGORY_WAGER:
            m_inventoryReportPanelWagerNode->appendRow(item);
            break;
        }
    }

    //---------------------------------------------------------------------
    void ToutlinerTreeView::onMachineBaseRecordRemoved( const DBMachineBaseInfo& machineBaseInfo )
    {
        QStandardItem* parentItem = NULL;

        int assetType = machineBaseInfo.assetType;

        switch (assetType)
        {
        case CATEGORY_CABINET:
            parentItem = m_inventoryReportPanelCabinetNode;
            break;
        case CATEGORY_LOTTERY:
            parentItem = m_inventoryReportPanelLotteryNode;
            break;
        case CATEGORY_SIMULATE:
            parentItem = m_inventoryReportPanelSimulateNode;
            break;
        case CATEGORY_COINDOZER:
            parentItem = m_inventoryReportPanelCoindozerNode;
            break;
        case CATEGORY_WAGER:
            parentItem = m_inventoryReportPanelWagerNode;
            break;
        }

        int childrenCount = parentItem->rowCount();
        QStandardItem* childItem = NULL;
        int machineId = -1;
        for (int i = 0; i < childrenCount; i++)
        {
            childItem = parentItem->child(i);
            machineId = childItem->data(Qt::UserRole).toInt();
            if (machineId == machineBaseInfo.machineId)
            {
                parentItem->removeRow(i);
                break;
            }
        }
    }


}

