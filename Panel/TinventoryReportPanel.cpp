#include "TinventoryReportPanel.h"

#include "TDatabaseManager.h"
#include <QtGui/QVBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QMenu>

namespace YR2K {

    typedef std::vector<DBInventoryReportInfo>::iterator DBInventoryReportInfoIter;

    //---------------------------------------------------------------------
    TinventoryReportPanel::TinventoryReportPanel(QWidget* parent /*= NULL*/)
        : TpanelBase(parent)
        , m_eCurrentOperatingCategory(CATEGORY_INVALID)
    {
        m_pAddNewRecordButton = new QPushButton();
        m_pTotalInventoryLabel = new QLabel();
        m_pTotalInventoryLineEdit = new QLineEdit();

        m_pAddNewRecordButton->setText(tr("添加新记录"));
        m_pTotalInventoryLabel->setText(tr("库存总量："));

        QHBoxLayout* totalRecordLayout = new QHBoxLayout();
        totalRecordLayout->addWidget(m_pTotalInventoryLabel);
        totalRecordLayout->addWidget(m_pTotalInventoryLineEdit);

        QWidget* table = new QWidget(this);
        m_pIinventoryReportViewItemTable = new Ui::TinventoryReportViewItemTable();
        m_pIinventoryReportViewItemTable->setupUi(table);

        QWidget* searchWidget = new QWidget(this);
        m_pSearchWidget = new Ui::TsearchWidget();
        m_pSearchWidget->setupUi(searchWidget);

        QGridLayout* mainLayout = new QGridLayout(this);

        QSpacerItem *horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
        QSpacerItem *horizontalSpacerForTotalInventory = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        totalRecordLayout->addSpacerItem(horizontalSpacerForTotalInventory);

        mainLayout->addLayout(totalRecordLayout, 0, 0);
        mainLayout->addWidget(searchWidget, 1, 0, 1, 2);
        mainLayout->addWidget(m_pAddNewRecordButton, 2, 0);
        mainLayout->addItem(horizontalSpacer, 2, 1);
        mainLayout->addWidget(table, 3, 0, 1, 2);

        setLayout(mainLayout);

        int w = table->width();
        int h = searchWidget->height() + table->height();

        setFixedSize(w, h);
    }

    //---------------------------------------------------------------------
    TinventoryReportPanel::~TinventoryReportPanel(void)
    {
    }

    //---------------------------------------------------------------------
    void TinventoryReportPanel::doInitPanel(const TECategory& category)
    {
        Q_ASSERT_X(m_pIinventoryReportViewItemTable->m_inventoryReportTableWidget != NULL, "", "");
        QTableWidget* table = m_pIinventoryReportViewItemTable->m_inventoryReportTableWidget;
        if (table)
        {
            int count = table->rowCount();
            while (count--)
            {
                int& rowIndex = count;
                table->removeRow(rowIndex);
            }
        }

//         m_vecInventoryReportInfoFoundResult.clear();

//         TDatabaseManager::getInstance()->findMachineDetailInfoWithAssetType(category, m_vecInventoryReportInfoFoundResult);

//         DBInventoryReportInfoIter iter = m_vecInventoryReportInfoFoundResult.begin();
//         DBInventoryReportInfoIter end = m_vecInventoryReportInfoFoundResult.end();
// 
//         int i = 0;
//         for (; iter != end; ++iter)
//         {
//             insertRecordToTable(i, *iter);
//             i++;
//         }
// 
//         m_eCurrentOperatingCategory = category;

    }

}
