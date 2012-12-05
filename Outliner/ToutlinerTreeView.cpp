#include "ToutlinerTreeView.h"
#include <QtGui/QStandardItem>
#include <QtGui/QStandardItemModel>

namespace YR2K {

    ToutlinerTreeView::ToutlinerTreeView( QWidget* parent /*= NULL*/ )
        : QWidget(parent)
        , m_pTreeView(NULL)
        , m_pModel(NULL)
    {
        m_pTreeView = new QTreeView(this);
        m_pModel = new QStandardItemModel(m_pTreeView);

        QStandardItem* root = m_pModel->invisibleRootItem();
        QStandardItem* adminSetupPanelNode = new QStandardItem(tr("管理员设置"));
        QStandardItem* assetSetupPanelNode = new QStandardItem(tr("资产设定"));
        QStandardItem* inventoryReportPanelNode = new QStandardItem(tr("库存报表"));
        QStandardItem* machineFuncSetupPanelNode = new QStandardItem(tr("机台功能设置"));
        QStandardItem* machineGroupDifferenceReportPanelNode = new QStandardItem(tr("机组差异报表"));
        QStandardItem* machineGroupReportPanelNode = new QStandardItem(tr("机组报表"));
        QStandardItem* warningSystemPanelNode = new QStandardItem(tr("报警系统"));

        root->appendRow(adminSetupPanelNode);
        addCategoryToItem(adminSetupPanelNode);
        root->appendRow(assetSetupPanelNode);
        addCategoryToItem(assetSetupPanelNode);
        root->appendRow(inventoryReportPanelNode);
        addCategoryToItem(inventoryReportPanelNode);
        root->appendRow(machineFuncSetupPanelNode);
        addCategoryToItem(machineFuncSetupPanelNode);
        root->appendRow(machineGroupDifferenceReportPanelNode);
        addCategoryToItem(machineGroupDifferenceReportPanelNode);
        root->appendRow(machineGroupReportPanelNode);
        addCategoryToItem(machineGroupReportPanelNode);
        root->appendRow(warningSystemPanelNode);
        addCategoryToItem(warningSystemPanelNode);

        m_pTreeView->setModel(m_pModel);
        m_pTreeView->expandAll();
    }


    ToutlinerTreeView::~ToutlinerTreeView(void)
    {
    }

    void ToutlinerTreeView::addCategoryToItem( QStandardItem* item )
    {

        QStandardItem* cabinetCategory = new QStandardItem(tr("柜体类"));
        QStandardItem* lotteryCategory = new QStandardItem(tr("彩票类"));
        QStandardItem* simulateCategory = new QStandardItem(tr("模拟类"));
        QStandardItem* coinDozerCategory = new QStandardItem(tr("推币类"));
        QStandardItem* wagerCategory = new QStandardItem(tr("博彩类"));

        item->appendRow(cabinetCategory);
        item->appendRow(lotteryCategory);
        item->appendRow(simulateCategory);
        item->appendRow(coinDozerCategory);
        item->appendRow(wagerCategory);

    }

//     Tcategory::Tcategory()
//         : m_pCabinetCategory(NULL)
//         , m_pLotteryCategory(NULL)
//         , m_pSimulateCategory(NULL)
//         , m_pCoinDozerCategory(NULL)
//         , m_pWagerCategory(NULL)
//     {
//         m_pCabinetCategory = new QStandardItem(tr("柜体类"));
//         m_pLotteryCategory = new QStandardItem(tr("彩票类"));
//         m_pSimulateCategory = new QStandardItem(tr("模拟类"));
//         m_pCoinDozerCategory = new QStandardItem(tr("推币类"));
//         m_pWagerCategory = new QStandardItem(tr("博彩类"));
//     }

//     Tcategory::~Tcategory()
//     {
//         if (m_pCabinetCategory)
//         {
//             delete m_pCabinetCategory;
//         }
// 
//         if (m_pLotteryCategory)
//         {
//             delete m_pLotteryCategory;
//         }
// 
//         if (m_pSimulateCategory)
//         {
//             delete m_pSimulateCategory;
//         }
// 
//         if (m_pCoinDozerCategory)
//         {
//             delete m_pCoinDozerCategory;
//         }
// 
//         if (m_pWagerCategory)
//         {
//             delete m_pWagerCategory;
//         }
// 
// 
//     }

}

