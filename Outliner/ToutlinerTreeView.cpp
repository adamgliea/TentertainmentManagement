#include "ToutlinerTreeView.h"
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
    {
        m_pTreeView = new QTreeView(this);
        m_pModel = new QStandardItemModel(m_pTreeView);

        QStandardItem* invisiableRoot = m_pModel->invisibleRootItem();

        m_adminSetupPanelNode = new QStandardItem(tr("账户设定"));
        m_assetSetupPanelNode = new QStandardItem(tr("资产设定"));
        m_assetSetupPanelCabinetNode = new QStandardItem(tr("柜体类"));
        m_assetSetupPanelLotteryNode = new QStandardItem(tr("模拟类"));
        m_assetSetupPanelSimulateNode = new QStandardItem(tr("彩票类"));
        m_assetSetupPanelCoindozerNode = new QStandardItem(tr("推币类"));
        m_assetSetupPanelWagerNode = new QStandardItem(tr("博彩类"));
        m_inventoryReportPanelNode = new QStandardItem(tr("库存设定"));
        m_machineFuncDetailSetupPanelNode = new QStandardItem(tr("机台功能设定"));
        m_machineGroupDifferenceReportPanelNode = new QStandardItem(tr("机组差异报表"));
        m_machineGroupReportPanelNode = new QStandardItem(tr("机组报表"));
        m_warningSystemPanelNode = new QStandardItem(tr("警告报表"));

        m_machineGroupFuncBaseSetupPanel = new QStandardItem(tr("机组明细设置"));
        m_machineGroupFuncBaseSetupPanelCabinetNode = new QStandardItem(tr("柜体类"));
        m_machineGroupFuncBaseSetupPanelLotteryNode = new QStandardItem(tr("模拟类"));
        m_machineGroupFuncBaseSetupPanelSimulateNode = new QStandardItem(tr("彩票类"));
        m_machineGroupFuncBaseSetupPanelCoindozerNode = new QStandardItem(tr("推币类"));
        m_machineGroupFuncBaseSetupPanelWagerNode = new QStandardItem(tr("博彩类"));

        m_machineGroupReportEntertainmentPanelNode = new QStandardItem(tr("娱乐机"));
        m_machineGroupReportGiftPanelNode = new QStandardItem(tr("礼品机"));
        m_machineGroupReportLotteryPanelNode = new QStandardItem(tr("博彩机"));
        m_machineGroupReportSummaryPanelNode = new QStandardItem(tr("机组总报表"));

        invisiableRoot->appendRow(m_adminSetupPanelNode);
        invisiableRoot->appendRow(m_assetSetupPanelNode);
            m_assetSetupPanelNode->appendRow(m_assetSetupPanelCabinetNode);
            m_assetSetupPanelNode->appendRow(m_assetSetupPanelLotteryNode);
            m_assetSetupPanelNode->appendRow(m_assetSetupPanelSimulateNode);
            m_assetSetupPanelNode->appendRow(m_assetSetupPanelCoindozerNode);
            m_assetSetupPanelNode->appendRow(m_assetSetupPanelWagerNode);

        invisiableRoot->appendRow(m_inventoryReportPanelNode);
        invisiableRoot->appendRow(m_machineFuncDetailSetupPanelNode);
        invisiableRoot->appendRow(m_machineGroupDifferenceReportPanelNode);
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
        invisiableRoot->appendRow(m_warningSystemPanelNode);

        m_adminSetupPanelNode->setEditable(false);
        m_assetSetupPanelNode->setEditable(false);
            m_assetSetupPanelCabinetNode->setEditable(false);
            m_assetSetupPanelLotteryNode->setEditable(false);
            m_assetSetupPanelSimulateNode->setEditable(false);
            m_assetSetupPanelCoindozerNode->setEditable(false);
            m_assetSetupPanelWagerNode->setEditable(false);

        m_inventoryReportPanelNode->setEditable(false);
        m_machineFuncDetailSetupPanelNode->setEditable(false);
        m_machineGroupDifferenceReportPanelNode->setEditable(false);
        m_machineGroupReportPanelNode->setEditable(false);
        m_warningSystemPanelNode->setEditable(false);
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
        QStandardItem* item = m_pModel->itemFromIndex(modelIndex);


        // Asset setup node clicked.
        // 
        if (item == m_assetSetupPanelNode)
        {
            emit treeMenuClicked(PANEL_INVALID, CATEGORY_INVALID);
        }
        if (item == m_assetSetupPanelCabinetNode)
        {
            emit treeMenuClicked(PANEL_ASSET_SETUP, CATEGORY_CABINET);
        }
        else if (item == m_assetSetupPanelLotteryNode)
        {
            emit treeMenuClicked(PANEL_ASSET_SETUP, CATEGORY_LOTTERY);
        }
        else if (item == m_assetSetupPanelSimulateNode)
        {
            emit treeMenuClicked(PANEL_ASSET_SETUP, CATEGORY_SIMULATE);
        }
        else if (item == m_assetSetupPanelCoindozerNode)
        {
            emit treeMenuClicked(PANEL_ASSET_SETUP, CATEGORY_COINDOZER);
        }
        else if (item == m_assetSetupPanelWagerNode)
        {
            emit treeMenuClicked(PANEL_ASSET_SETUP, CATEGORY_WAGER);
        }


        // Machine detail setup node clicked.
        // 
        if (item == m_machineGroupFuncBaseSetupPanel)
        {
            emit treeMenuClicked(PANEL_INVALID, CATEGORY_INVALID);
        }
        if (item == m_machineGroupFuncBaseSetupPanelCabinetNode)
        {
            emit treeMenuClicked(PANEL_MACHINE_GROUP_DETAIL_SETUP, CATEGORY_CABINET);
        }
        else if (item == m_machineGroupFuncBaseSetupPanelLotteryNode)
        {
            emit treeMenuClicked(PANEL_MACHINE_GROUP_DETAIL_SETUP, CATEGORY_LOTTERY);
        }
        else if (item == m_machineGroupFuncBaseSetupPanelSimulateNode)
        {
            emit treeMenuClicked(PANEL_MACHINE_GROUP_DETAIL_SETUP, CATEGORY_SIMULATE);
        }
        else if (item == m_machineGroupFuncBaseSetupPanelCoindozerNode)
        {
            emit treeMenuClicked(PANEL_MACHINE_GROUP_DETAIL_SETUP, CATEGORY_COINDOZER);
        }
        else if (item == m_machineGroupFuncBaseSetupPanelWagerNode)
        {
            emit treeMenuClicked(PANEL_MACHINE_GROUP_DETAIL_SETUP, CATEGORY_WAGER);
        }
    }

}

