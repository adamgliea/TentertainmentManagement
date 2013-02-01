#include "TassetSetupPanel.h"
#include "TDatabaseManager.h"
#include <QtGui/QGridLayout>
#include <QtGui/QVBoxLayout>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QMenu>

namespace YR2K {

    typedef std::vector<DBAssetsInfo>::iterator DBAssetIter;

    const char* CATEGORY_STRING[CATEGORY_NUM] =
    {
        "柜体类",
        "彩票类",
        "模拟类",
        "推币类",
        "博彩类",
    };

    const char* STAEMENT_STRING[STATEMENT_NUM] =
    {
        "账目报表1",
        "账目报表2",
        "账目报表3",
    };

    //---------------------------------------------------------------------
    TassetSetupPanel::TassetSetupPanel(QWidget* parent /*= NULL*/)
        : TpanelBase(parent)
        , m_pContextMenu(NULL)
        , m_pRemoveAction(NULL)
    {
        m_eType = PANEL_ASSET_SETUP;

        m_pAssetSetupTable = new Ui::TassetSetupViewItemTable();
        m_pAssetSetupTable->setupUi(this);
        m_pPushButton = new QPushButton(this);
        m_pPushButton->setText(tr("添加新大类"));

        QGridLayout* mainLayout = new QGridLayout(this);

        QSpacerItem *horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
        mainLayout->addWidget(m_pPushButton, 0, 0);
        mainLayout->addItem(horizontalSpacer, 0, 1);
        mainLayout->addWidget(m_pAssetSetupTable->m_assetSetupTable, 1, 0, 1, 2);

        setLayout(mainLayout);

        m_pAssetSetupAddWidget = new Ui::TassetSetupViewItemAddWidget();

        // connect signals and slots.
        //
        connect(m_pPushButton, SIGNAL(clicked()), this, SLOT(onAddButtonClicked()));

        createActions();
        m_pAssetSetupTable->m_assetSetupTable->setContextMenuPolicy(Qt::CustomContextMenu);
        m_pAssetSetupTable->m_assetSetupTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        connect(m_pAssetSetupTable->m_assetSetupTable, SIGNAL(customContextMenuRequested(const QPoint&)), this, SLOT(onCustomContextMenuRequested(const QPoint&)));
    }

    //---------------------------------------------------------------------
    TassetSetupPanel::~TassetSetupPanel(void)
    {
    }

    //---------------------------------------------------------------------
    DBAssetsInfo TassetSetupPanel::getInfo( void ) const
    {
        DBAssetsInfo info;

        Q_ASSERT_X(m_pAssetSetupAddWidget != NULL, "TassetSetupPanel::getInfo", "");
        if (m_pAssetSetupAddWidget)
        {
            info.assetType = m_pAssetSetupAddWidget->m_inputCategoryNameComboBox->currentIndex();
            info.clearCoinCycle = m_pAssetSetupAddWidget->m_clearCoinPeriodSetupLineEdit->text().toInt();
            info.clearCoinMargin = m_pAssetSetupAddWidget->m_clearCoinMarginSetupLineEdit->text().toInt();
            info.liabilities = m_pAssetSetupAddWidget->m_debtSetupLineEdit->text().toInt();
            info.allowLossDays = m_pAssetSetupAddWidget->m_continuousLossComboBox->itemText(m_pAssetSetupAddWidget->m_continuousLossComboBox->currentIndex()).toInt();

            if (m_pAssetSetupAddWidget->m_accountReportRadioButton1->isChecked())
            {
                info.statmentType = 0;
            }
            else if (m_pAssetSetupAddWidget->m_accountReportRadioButton2->isChecked())
            {
                info.statmentType = 1;
            }
            else if (m_pAssetSetupAddWidget->m_accountReportRadioButton3->isChecked())
            {
                info.statmentType = 2;
            }
        }

        return info;
    }

    //---------------------------------------------------------------------
    void TassetSetupPanel::onAddButtonClicked( void )
    {
        // Initialize the panel and launch it up.
        // 
        m_pAddWidgetPanel = new QWidget();
        m_pAssetSetupAddWidget->setupUi(m_pAddWidgetPanel);
        connect(m_pAssetSetupAddWidget->m_buttonBox, SIGNAL(accepted()), this, SLOT(onConfirmAddNewRecord()));
        connect(m_pAssetSetupAddWidget->m_buttonBox, SIGNAL(rejected()), this, SLOT(onCancelAddNewRecord()));
        m_pAddWidgetPanel->show();
    }

    //---------------------------------------------------------------------
    void TassetSetupPanel::onConfirmAddNewRecord()
    {
        // Add new record into DB.
        // 
        DBAssetsInfo assetInfo = this->getInfo();
        bool success = TDatabaseManager::getInstance()->addAsset(assetInfo);

        // Close the window and destroy the panel object.
        // 
        this->destroyAddWidgetPanel();

        Q_ASSERT_X(m_pAssetSetupTable->m_assetSetupTable != NULL, "", "");
        QTableWidget* table = m_pAssetSetupTable->m_assetSetupTable;
        if (table)
        {
            int rowIndex = table->rowCount();
            this->insertRecordToTable(rowIndex, assetInfo);
        }

    }

    //---------------------------------------------------------------------
    void TassetSetupPanel::onCancelAddNewRecord()
    {
        // Close the window and destroy the panel object.
        // 
        this->destroyAddWidgetPanel();
    }

    //---------------------------------------------------------------------
    void TassetSetupPanel::destroyAddWidgetPanel()
    {
        if (m_pAddWidgetPanel)
        {
            m_pAddWidgetPanel->close();
            delete m_pAddWidgetPanel;
            m_pAddWidgetPanel = NULL;
        }
    }

    //---------------------------------------------------------------------
    void TassetSetupPanel::doInitPanel(const TECategory& category)
    {
        Q_ASSERT_X(m_pAssetSetupTable->m_assetSetupTable != NULL, "", "");
        QTableWidget* table = m_pAssetSetupTable->m_assetSetupTable;
        if (table)
        {
            int count = table->rowCount();
            while (count--)
            {
                int& rowIndex = count;
                table->removeRow(rowIndex);
            }
        }

        m_vecAssetsFoundResult.clear();


        TDatabaseManager::getInstance()->findAssetsWithAssetType(category, m_vecAssetsFoundResult);

        DBAssetIter iter = m_vecAssetsFoundResult.begin();
        DBAssetIter end = m_vecAssetsFoundResult.end();

        int i = 0;
        for (; iter != end; ++iter)
        {
            insertRecordToTable(i, *iter);
            i++;
        }
    }

    //---------------------------------------------------------------------
    void TassetSetupPanel::insertRecordToTable( const int rowIndex, const DBAssetsInfo& info )
    {
        Q_ASSERT_X(m_pAssetSetupTable->m_assetSetupTable != NULL, "", "");
        QTableWidget* table = m_pAssetSetupTable->m_assetSetupTable;
        if (table)
        {
            QTableWidgetItem* item = NULL;

            table->insertRow(rowIndex);
            // Set category cell.
            // 
            item = new QTableWidgetItem();
            item->setText(tr(CATEGORY_STRING[info.assetType]));
            table->setItem(rowIndex, ASSET_SETUP_TABLE_COLUMN_CATEGORY_NAME, item);
            // Store id info into this cell.
            item->setData(Qt::UserRole, info.assetId);


            // Set clear coin period cell.
            // 
            item = new QTableWidgetItem();
            item->setText(QString::number(info.clearCoinCycle));
            table->setItem(rowIndex, ASSET_SETUP_TABLE_COLUMN_CLEARCOIN_PERIOD, item);

            // Set clear coin margin
            // 
            item = new QTableWidgetItem();
            item->setText(QString::number(info.clearCoinMargin));
            table->setItem(rowIndex, ASSET_SETUP_TABLE_COLUMN_CLEARCOIN_MARGIN, item);

            // Set liabilities
            // 
            item = new QTableWidgetItem();
            item->setText(QString::number(info.liabilities));
            table->setItem(rowIndex, ASSET_SETUP_TABLE_COLUMN_LIABILITIES, item);

            // Set allow loss days
            // 
            item = new QTableWidgetItem();
            item->setText(QString::number(info.allowLossDays));
            table->setItem(rowIndex, ASSET_SETUP_TABLE_COLUMN_ALLOWLOSSDAYS, item);

            // Set statement type
            // 
            item = new QTableWidgetItem();
            item->setText(tr(STAEMENT_STRING[info.statmentType]));
            table->setItem(rowIndex, ASSET_SETUP_TABLE_COLUMN_STATEMENTTYPE, item);
        }
    }

    //---------------------------------------------------------------------
    void TassetSetupPanel::onCustomContextMenuRequested( const QPoint& pos )
    {
        Q_ASSERT_X(m_pAssetSetupTable != NULL, "TassetSetupPanel::onCustomContextMenuRequested", "");
        if (m_pAssetSetupTable)
        {
            QTableWidget* table = m_pAssetSetupTable->m_assetSetupTable;
            Q_ASSERT_X(table != NULL, "TassetSetupPanel::onCustomContextMenuRequested", "");

            if (table)
            {
                m_contextMenuTriggeredIndex = table->indexAt(pos);
                int row = m_contextMenuTriggeredIndex.row();
                if (m_contextMenuTriggeredIndex.isValid())
                {
                    table->selectRow(row);
                    QPoint pos = QCursor::pos();
                    m_pContextMenu->exec(QCursor::pos());
                }
            }
        }
    }

    //---------------------------------------------------------------------
    void TassetSetupPanel::onRemoveActionTriggered()
    {
        int row = m_contextMenuTriggeredIndex.row();
        Q_ASSERT_X(m_pAssetSetupTable != NULL, "TassetSetupPanel::onCustomContextMenuRequested", "");
        if (m_pAssetSetupTable)
        {
            QTableWidget* table = m_pAssetSetupTable->m_assetSetupTable;
            Q_ASSERT_X(table != NULL, "TassetSetupPanel::onCustomContextMenuRequested", "");

            if (table)
            {
                QTableWidgetItem* item = table->item(row, ASSET_SETUP_TABLE_COLUMN_CATEGORY_NAME);
                Q_ASSERT_X(item != NULL, "TassetSetupPanel::onCustomContextMenuRequested", "");
                if (item)
                {
                    int assetInfoId = item->data(Qt::UserRole).toInt();
                    bool success = TDatabaseManager::getInstance()->removeAsset(assetInfoId);
                    table->removeRow(row);

                }
            }
        }
    }

    //---------------------------------------------------------------------
    void TassetSetupPanel::createActions( void )
    {
        m_pContextMenu = new QMenu(tr(""), this);
        m_pRemoveAction = new QAction(tr("删除该行记录"), m_pContextMenu);
        m_pContextMenu->addAction(m_pRemoveAction);
        connect(m_pRemoveAction, SIGNAL(triggered()), this, SLOT(onRemoveActionTriggered()));
    }


}
