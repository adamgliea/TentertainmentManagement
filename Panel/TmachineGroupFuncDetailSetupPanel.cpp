#include "TmachineGroupFuncDetailSetupPanel.h"
#include "DatabaseResultModel.h"
#include <QtGui/QGridLayout>
#include <QtGui/QVBoxLayout>
#include <QtGui/QPushButton>
#include <QtGui/QMenu>

namespace YR2K {

    typedef std::vector<DBMachineDetailInfo>::iterator DBMachineDetailInfoIter;

    static const char* CATEGORY_STRING[CATEGORY_NUM] =
    {
        "柜体类",
        "彩票类",
        "模拟类",
        "推币类",
        "博彩类",
    };

    //---------------------------------------------------------------------
    TmachineGroupFuncDetailSetupPanel::TmachineGroupFuncDetailSetupPanel(QWidget* parent /*= NULL*/)
        : TpanelBase(parent)
        , m_pUpdateAction(NULL)
        , m_pContextMenu(NULL)
        , m_pRemoveAction(NULL)
    {
        m_pMachineFuncDetailSetupTable = new Ui::TmachineGroupFuncDetailSetupViewItemTable();

        QWidget* table = new QWidget(this);
        m_pMachineFuncDetailSetupTable->setupUi(table);

        QGridLayout* mainLayout = new QGridLayout(this);
        mainLayout->addWidget(table);

        int w = table->width();
        int h = table->height();

        setFixedSize(w, h);
        setLayout(mainLayout);

        createActions();

        m_pMachineFuncDetailSetupTable->m_machineGroupFuncDetailSetupTable->setContextMenuPolicy(Qt::CustomContextMenu);
        m_pMachineFuncDetailSetupTable->m_machineGroupFuncDetailSetupTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        connect(m_pMachineFuncDetailSetupTable->m_machineGroupFuncDetailSetupTable, SIGNAL(customContextMenuRequested(const QPoint&)), this, SLOT(onCustomContextMenuRequested(const QPoint&)));

    }

    //---------------------------------------------------------------------
    TmachineGroupFuncDetailSetupPanel::~TmachineGroupFuncDetailSetupPanel(void)
    {
    }

    //---------------------------------------------------------------------
    DBMachineDetailInfo TmachineGroupFuncDetailSetupPanel::getInfo( void ) const
    {
        DBMachineDetailInfo info;


        return info;
    }

    //---------------------------------------------------------------------
    void TmachineGroupFuncDetailSetupPanel::doInitPanel(const TECategory& category)
    {
        Q_ASSERT_X(m_pMachineFuncDetailSetupTable->m_machineGroupFuncDetailSetupTable != NULL, "", "");
        QTableWidget* table = m_pMachineFuncDetailSetupTable->m_machineGroupFuncDetailSetupTable;
        if (table)
        {
            int count = table->rowCount();
            while (count--)
            {
                int& rowIndex = count;
                table->removeRow(rowIndex);
            }
        }

        m_vecMachineFuncDetailInfoFoundResult.clear();

        TDatabaseManager::getInstance()->findMachineDetailInfoWithAssetType(category, m_vecMachineFuncDetailInfoFoundResult);

        DBMachineDetailInfoIter iter = m_vecMachineFuncDetailInfoFoundResult.begin();
        DBMachineDetailInfoIter end = m_vecMachineFuncDetailInfoFoundResult.end();

        int i = 0;
        for (; iter != end; ++iter)
        {
            insertRecordToTable(i, *iter);
            i++;
        }
    }

    //---------------------------------------------------------------------
    void TmachineGroupFuncDetailSetupPanel::insertRecordToTable( const int rowIndex, const DBMachineDetailInfo& info )
    {
        Q_ASSERT_X(m_pMachineFuncDetailSetupTable->m_machineGroupFuncDetailSetupTable != NULL, "", "");
        QTableWidget* table = m_pMachineFuncDetailSetupTable->m_machineGroupFuncDetailSetupTable;
        if (table)
        {
            QTableWidgetItem* item = NULL;

            table->insertRow(rowIndex);
            // Set category cell.
            // 
            item = new QTableWidgetItem();
            item->setText(tr(CATEGORY_STRING[info.assetType]));
            table->setItem(rowIndex, DETAIL_SETUP_TABLE_COLUMN_ASSET_TYPE, item);
            // Store id info into this cell.
            item->setData(Qt::UserRole, info.machineId);


            // Set clear coin period cell.
            // 
            item = new QTableWidgetItem();
            item->setText(QString::number(info.machineType));
            table->setItem(rowIndex, DETAIL_SETUP_TABLE_COLUMN_MACHINE_TYPE, item);

            // Set clear coin margin
            // 
            item = new QTableWidgetItem();
            item->setText(QString::number(info.cashRatio));
            table->setItem(rowIndex, DETAIL_SETUP_TABLE_COLUMN_CASH_RATIO, item);

            // Set liabilities
            // 
            item = new QTableWidgetItem();
            item->setText(QString::number(info.coinRatio));
            table->setItem(rowIndex, DETAIL_SETUP_TABLE_COLUMN_COIN_RATIO, item);

            // Set allow loss days
            // 
            item = new QTableWidgetItem();
            item->setText(QString::number(info.mainProbability));
            table->setItem(rowIndex, DETAIL_SETUP_TABLE_COLUMN_MAIN_PROBABILITY, item);

            // Set statement type
            // 
            item = new QTableWidgetItem();
            item->setText(QString::number(info.mainProbability));
            table->setItem(rowIndex, DETAIL_SETUP_TABLE_COLUMN_PROBABILITY_RANGE, item);

            item = new QTableWidgetItem();
            item->setText(QString::number(info.maxPoints));
            table->setItem(rowIndex, DETAIL_SETUP_TABLE_COLUMN_MAX_POINTS, item);

            item = new QTableWidgetItem();
            item->setText(QString::number(info.minPoints));
            table->setItem(rowIndex, DETAIL_SETUP_TABLE_COLUMN_MIN_POINTS, item);

            item = new QTableWidgetItem();
            item->setText(QString::number(info.markPoints));
            table->setItem(rowIndex, DETAIL_SETUP_TABLE_COLUMN_MARK_POINTS, item);

            item = new QTableWidgetItem();
            item->setText(QString::number(info.drawPoints));
            table->setItem(rowIndex, DETAIL_SETUP_TABLE_COLUMN_DRAW_POINTS, item);

            item = new QTableWidgetItem();
            item->setText(QString::number(info.pushPointDays));
            table->setItem(rowIndex, DETAIL_SETUP_TABLE_COLUMN_PUSH_POINT_DAYS, item);

            item = new QTableWidgetItem();
            item->setText(QString::number(info.clearPointCycle));
            table->setItem(rowIndex, DETAIL_SETUP_TABLE_COLUMN_CLEAR_POINT_CYCLE, item);
        }
    }

    //---------------------------------------------------------------------
    void TmachineGroupFuncDetailSetupPanel::destroyAddWidgetPanel()
    {
        if (m_pUpdateWidgetPanel)
        {
            m_pUpdateWidgetPanel->close();
            delete m_pUpdateWidgetPanel;
            m_pUpdateWidgetPanel = NULL;
        }
    }

    //---------------------------------------------------------------------
    void TmachineGroupFuncDetailSetupPanel::createActions( void )
    {
        m_pContextMenu = new QMenu(tr(""), this);
        m_pRemoveAction = new QAction(tr("删除该行记录"), m_pContextMenu);
        m_pUpdateAction = new QAction(tr("更新该行记录"), m_pContextMenu);
        m_pContextMenu->addAction(m_pRemoveAction);
        connect(m_pRemoveAction, SIGNAL(triggered()), this, SLOT(onRemoveActionTriggered()));
        connect(m_pUpdateAction, SIGNAL(triggered()), this, SLOT(onUpdateActionTriggered()));
    }

    //---------------------------------------------------------------------
    void TmachineGroupFuncDetailSetupPanel::onUpdateActionTriggered()
    {
        // Initialize the panel and launch it up.
        // 
        m_pUpdateWidgetPanel = new QWidget();
        m_pMachineFuncDetailSetupAddWidget->setupUi(m_pUpdateWidgetPanel);
        connect(m_pMachineFuncDetailSetupAddWidget->m_buttonBox, SIGNAL(accepted()), this, SLOT(onConfirmUpdateNewRecord()));
        connect(m_pMachineFuncDetailSetupAddWidget->m_buttonBox, SIGNAL(rejected()), this, SLOT(onCancelUpdateNewRecord()));
        m_pUpdateWidgetPanel->show();
    }

    //---------------------------------------------------------------------
    void TmachineGroupFuncDetailSetupPanel::onConfirmUpdateNewRecord()
    {
        DBMachineDetailInfo machineDetailInfo = this->getInfo();
        bool success = TDatabaseManager::getInstance()->updateMachineDetailInfo(machineDetailInfo);

        // Close the window and destroy the panel object.
        // 
        this->destroyAddWidgetPanel();

        Q_ASSERT_X(m_pMachineFuncDetailSetupTable->m_machineGroupFuncDetailSetupTable != NULL, "", "");
        QTableWidget* table = m_pMachineFuncDetailSetupTable->m_machineGroupFuncDetailSetupTable;
        if (table)
        {
            int rowIndex = table->rowCount();
            this->insertRecordToTable(rowIndex, machineDetailInfo);
        }
    }

    //---------------------------------------------------------------------
    void TmachineGroupFuncDetailSetupPanel::onCancelUpdateNewRecord()
    {
        // Close the window and destroy the panel object.
        // 
        this->destroyAddWidgetPanel();
    }

    //---------------------------------------------------------------------
    void TmachineGroupFuncDetailSetupPanel::onCustomContextMenuRequested( const QPoint& pos )
    {
        Q_ASSERT_X(m_pMachineFuncDetailSetupTable != NULL, "TmachineGroupFuncBaseSetupPanel::onCustomContextMenuRequested", "");
        if (m_pMachineFuncDetailSetupTable)
        {
            QTableWidget* table = m_pMachineFuncDetailSetupTable->m_machineGroupFuncDetailSetupTable;
            Q_ASSERT_X(table != NULL, "TmachineGroupFuncDetailSetupPanel::onCustomContextMenuRequested", "");

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
    void TmachineGroupFuncDetailSetupPanel::onRemoveActionTriggered()
    {
        int row = m_contextMenuTriggeredIndex.row();
        Q_ASSERT_X(m_pMachineFuncDetailSetupTable != NULL, "TmachineGroupFuncBaseSetupPanel::onCustomContextMenuRequested", "");
        if (m_pMachineFuncDetailSetupTable)
        {
            QTableWidget* table = m_pMachineFuncDetailSetupTable->m_machineGroupFuncDetailSetupTable;
            Q_ASSERT_X(table != NULL, "TmachineGroupFuncDetailSetupPanel::onCustomContextMenuRequested", "");

            if (table)
            {
                QTableWidgetItem* item = table->item(row, ASSET_SETUP_TABLE_COLUMN_CATEGORY_NAME);
                Q_ASSERT_X(item != NULL, "TmachineGroupFuncDetailSetupPanel::onCustomContextMenuRequested", "");
                if (item)
                {
                    int machineBasiInfoId = item->data(Qt::UserRole).toInt();
                    bool success = TDatabaseManager::getInstance()->removeMachine(machineBasiInfoId);
                    table->removeRow(row);
                }
            }
        }
    }

}

