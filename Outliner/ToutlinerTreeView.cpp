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
        m_inventoryReportPanelNode = new QStandardItem(tr("库存设定"));
        m_machineFuncSetupPanelNode = new QStandardItem(tr("机台功能设定"));
        m_machineGroupDifferenceReportPanelNode = new QStandardItem(tr("机组差异报表"));
        m_machineGroupReportPanelNode = new QStandardItem(tr("机组报表"));
        m_warningSystemPanelNode = new QStandardItem(tr("警告报表"));

        m_machineGroupDetailSetupPanelNode = new QStandardItem(tr("机组明细设置"));
        m_machineGroupReportEntertainmentPanelNode = new QStandardItem(tr("娱乐机"));
        m_machineGroupReportGiftPanelNode = new QStandardItem(tr("礼品机"));
        m_machineGroupReportLotteryPanelNode = new QStandardItem(tr("博彩机"));
        m_machineGroupReportSummaryPanelNode = new QStandardItem(tr("机组总报表"));

        invisiableRoot->appendRow(m_adminSetupPanelNode);
        invisiableRoot->appendRow(m_assetSetupPanelNode);
        invisiableRoot->appendRow(m_inventoryReportPanelNode);
        invisiableRoot->appendRow(m_machineFuncSetupPanelNode);
        invisiableRoot->appendRow(m_machineGroupDifferenceReportPanelNode);
        invisiableRoot->appendRow(m_machineGroupDetailSetupPanelNode);
        invisiableRoot->appendRow(m_machineGroupReportPanelNode);
            m_machineGroupReportPanelNode->appendRow(m_machineGroupReportEntertainmentPanelNode);
            m_machineGroupReportPanelNode->appendRow(m_machineGroupReportGiftPanelNode);
            m_machineGroupReportPanelNode->appendRow(m_machineGroupReportLotteryPanelNode);
            m_machineGroupReportPanelNode->appendRow(m_machineGroupReportSummaryPanelNode);
        invisiableRoot->appendRow(m_warningSystemPanelNode);

        m_adminSetupPanelNode->setEditable(false);
        m_assetSetupPanelNode->setEditable(false);
        m_inventoryReportPanelNode->setEditable(false);
        m_machineFuncSetupPanelNode->setEditable(false);
        m_machineGroupDifferenceReportPanelNode->setEditable(false);
        m_machineGroupReportPanelNode->setEditable(false);
        m_warningSystemPanelNode->setEditable(false);
        m_machineGroupDetailSetupPanelNode->setEditable(false);
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

        if (item == m_assetSetupPanelNode)
        {
            emit treeMenuClicked(PANEL_ASSET_SETUP);
        }
    }

}

