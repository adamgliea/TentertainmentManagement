#include "ToutlinerTreeView.h"
#include <QtGui/QStandardItem>
#include <QtGui/QStandardItemModel>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>

namespace YR2K {

    ToutlinerTreeView::ToutlinerTreeView( QWidget* parent /*= NULL*/ )
        : QWidget(parent)
        , m_pTreeView(NULL)
        , m_pModel(NULL)
    {
        m_pTreeView = new QTreeView(this);
        m_pModel = new QStandardItemModel(m_pTreeView);

        QStandardItem* treeRootNode = m_pModel->invisibleRootItem();

        ToutlinerTreeViewNode*  m_adminSetupPanelNode = new ToutlinerTreeViewNode(tr("����Ա����"), this);
        ToutlinerTreeViewNode*  m_assetSetupPanelNode = new ToutlinerTreeViewNode(tr("�ʲ��趨"), this);
        ToutlinerTreeViewNode*  m_inventoryReportPanelNode = new ToutlinerTreeViewNode(tr("��汨��"), this);
        ToutlinerTreeViewNode*  m_machineFuncSetupPanelNode= new ToutlinerTreeViewNode(tr("��̨��������"), this);
        ToutlinerTreeViewNode*  m_machineGroupDifferenceReportPanelNode = new ToutlinerTreeViewNode(tr("������챨��"), this);
        ToutlinerTreeViewNode*  m_machineGroupReportPanelNode= new ToutlinerTreeViewNode(tr("���鱨��"), this);
        ToutlinerTreeViewNode*  m_warningSystemPanelNode = new ToutlinerTreeViewNode(tr("����ϵͳ"), this);

        m_adminSetupPanelNode->addAllCategories();
        m_assetSetupPanelNode->addAllCategories(); 
        m_inventoryReportPanelNode->addAllCategories();
        m_machineFuncSetupPanelNode->addAllCategories();
        m_machineGroupDifferenceReportPanelNode->addAllCategories();
        m_machineGroupReportPanelNode->addAllCategories();
        m_warningSystemPanelNode->addAllCategories();

        treeRootNode->appendRow(m_adminSetupPanelNode->getRoot());
        treeRootNode->appendRow(m_assetSetupPanelNode->getRoot());
        treeRootNode->appendRow(m_inventoryReportPanelNode->getRoot());
        treeRootNode->appendRow(m_machineFuncSetupPanelNode->getRoot());
        treeRootNode->appendRow(m_machineGroupDifferenceReportPanelNode->getRoot());
        treeRootNode->appendRow(m_machineGroupReportPanelNode->getRoot());
        treeRootNode->appendRow(m_warningSystemPanelNode->getRoot());

        m_pTreeView->setModel(m_pModel);
        m_pTreeView->expandAll();
        QHBoxLayout*   mainLayout = new QHBoxLayout();
        mainLayout->addWidget(m_pTreeView);
        setLayout(mainLayout);

    }


    ToutlinerTreeView::~ToutlinerTreeView(void)
    {
    }

    QTreeView* ToutlinerTreeView::getTreeView() const
    {
        return m_pTreeView;
    }


    ToutlinerTreeViewNode::ToutlinerTreeViewNode(const QString& name, QWidget* parent )
        : QWidget(parent)
        , m_pRoot(NULL)
        , m_pCabinetCategory(NULL)
        , m_pLotteryCategory(NULL)
        , m_pSimulateCategory(NULL)
        , m_pCoinDozerCategory(NULL)
        , m_pWagerCategory(NULL)
    {
        m_pRoot = new QStandardItem(name);
        m_pRoot->setEditable(false);
    }

    ToutlinerTreeViewNode::~ToutlinerTreeViewNode()
    {
        // As all the member would be added to parent QT widget
        // we cannot delete any member here, because QT will manage
        // memory itself, otherwise the member would be deleted twice
        // and cause a crash to the software.

    }


    QStandardItem* ToutlinerTreeViewNode::getRoot() const
    {
        return m_pRoot;
    }

    QStandardItem* ToutlinerTreeViewNode::getCabinetCategoryNode() const
    {
        return m_pCabinetCategory;
    }

    QStandardItem* ToutlinerTreeViewNode::getLotteryCategory() const
    {
        return m_pLotteryCategory;
    }

    QStandardItem* ToutlinerTreeViewNode::getSimulateCategory() const
    {
        return m_pSimulateCategory;
    }

    QStandardItem* ToutlinerTreeViewNode::getCoinDozerCategory() const
    {
        return m_pCoinDozerCategory;
    }

    QStandardItem* ToutlinerTreeViewNode::getWagerCategory() const
    {
        return m_pWagerCategory;
    }

    void ToutlinerTreeViewNode::addCategory(TECategory category)
    {
        Q_ASSERT(m_pRoot);

        switch (category)
        {
        case CATEGORY_CABINET:
            if (!m_pCabinetCategory)
            {
                m_pCabinetCategory = new QStandardItem(tr("������"));
                m_pCabinetCategory->setEditable(false);
                m_pRoot->appendRow(m_pCabinetCategory);
            }
            break;
        case CATEGORY_LOTTERY:
            if (!m_pSimulateCategory)
            {
                m_pLotteryCategory = new QStandardItem(tr("��Ʊ��"));
                m_pLotteryCategory->setEditable(false);
                m_pRoot->appendRow(m_pLotteryCategory);
            }
            break;
        case CATEGORY_SIMULATE:
            if (!m_pSimulateCategory)
            {
                m_pSimulateCategory = new QStandardItem(tr("ģ����"));
                m_pSimulateCategory->setEditable(false);
                m_pRoot->appendRow(m_pSimulateCategory);
            }
            break;
        case CATEGORY_COINDOZER:
            if (!m_pCoinDozerCategory)
            {
                m_pCoinDozerCategory = new QStandardItem(tr("�Ʊ���"));
                m_pCoinDozerCategory->setEditable(false);
                m_pRoot->appendRow(m_pCoinDozerCategory);
            }
            break;
        case CATEGORY_WAGER:
            if (!m_pWagerCategory)
            {
                m_pWagerCategory = new QStandardItem(tr("������"));
                m_pWagerCategory->setEditable(false);
                m_pRoot->appendRow(m_pWagerCategory);
            }
            break;
        default:
            break;
        }
        
    }

    void ToutlinerTreeViewNode::addAllCategories()
    {

        addCategory(CATEGORY_CABINET);
        addCategory(CATEGORY_LOTTERY);
        addCategory(CATEGORY_SIMULATE);
        addCategory(CATEGORY_COINDOZER);
        addCategory(CATEGORY_WAGER);

    }

//     void ToutlinerTreeViewNode::destroyIfNotAddedToQTWidget()
//     {
//     }

}

