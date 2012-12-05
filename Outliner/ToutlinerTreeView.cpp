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
        QStandardItem* adminSetupPanelNode = new QStandardItem(tr("����Ա����"));
        QStandardItem* assetSetupPanelNode = new QStandardItem(tr("�ʲ��趨"));
        QStandardItem* inventoryReportPanelNode = new QStandardItem(tr("��汨��"));
        QStandardItem* machineFuncSetupPanelNode = new QStandardItem(tr("��̨��������"));
        QStandardItem* machineGroupDifferenceReportPanelNode = new QStandardItem(tr("������챨��"));
        QStandardItem* machineGroupReportPanelNode = new QStandardItem(tr("���鱨��"));
        QStandardItem* warningSystemPanelNode = new QStandardItem(tr("����ϵͳ"));

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

        QStandardItem* cabinetCategory = new QStandardItem(tr("������"));
        QStandardItem* lotteryCategory = new QStandardItem(tr("��Ʊ��"));
        QStandardItem* simulateCategory = new QStandardItem(tr("ģ����"));
        QStandardItem* coinDozerCategory = new QStandardItem(tr("�Ʊ���"));
        QStandardItem* wagerCategory = new QStandardItem(tr("������"));

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
//         m_pCabinetCategory = new QStandardItem(tr("������"));
//         m_pLotteryCategory = new QStandardItem(tr("��Ʊ��"));
//         m_pSimulateCategory = new QStandardItem(tr("ģ����"));
//         m_pCoinDozerCategory = new QStandardItem(tr("�Ʊ���"));
//         m_pWagerCategory = new QStandardItem(tr("������"));
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

