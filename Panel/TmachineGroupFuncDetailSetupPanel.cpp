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
        , m_eCurrentOperatingCategory(CATEGORY_INVALID)
        , m_uiCurrentUpdateMachineId(0xFFFFFFFF)
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

        m_pMachineFuncDetailSetupUpdateWidget = new Ui::TmachineGroupFuncDetailSetupViewItemUpdate();

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

        Q_ASSERT_X(m_pMachineFuncDetailSetupUpdateWidget != NULL, "TmachineGroupFuncDetailSetupPanel::getInfo", "");
        if (m_pMachineFuncDetailSetupUpdateWidget)
        {
            info.machineId = m_uiCurrentUpdateMachineId;
            info.assetType = m_eCurrentOperatingCategory;
            info.machineType = m_pMachineFuncDetailSetupUpdateWidget->m_machineTypeLineEdit->text().toInt();
            info.cashRatio = m_pMachineFuncDetailSetupUpdateWidget->m_cashRatioLineEdit->text().toFloat();
            info.coinRatio = m_pMachineFuncDetailSetupUpdateWidget->m_coinRatioLineEdit->text().toFloat();
            info.mainProbability = m_pMachineFuncDetailSetupUpdateWidget->m_mainProbabilityLineEdit->text().toFloat();
            info.probabilityRange = m_pMachineFuncDetailSetupUpdateWidget->m_probabilityRangeLineEdit->text().toFloat();
            info.maxPoints = m_pMachineFuncDetailSetupUpdateWidget->m_maxPointsLineEdit->text().toInt();
            info.minPoints = m_pMachineFuncDetailSetupUpdateWidget->m_minPointsLineEdit->text().toInt();
            info.markPoints = m_pMachineFuncDetailSetupUpdateWidget->m_markPointsLineEdit->text().toInt();
            info.drawPoints = m_pMachineFuncDetailSetupUpdateWidget->m_drawPointsLineEdit->text().toInt();
            info.pushPointDays = m_pMachineFuncDetailSetupUpdateWidget->m_pushPointDaysLineEdit->text().toInt();
            info.clearPointCycle = m_pMachineFuncDetailSetupUpdateWidget->m_clearPointCycleLineEdit->text().toInt();
        }

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

        m_eCurrentOperatingCategory = category;
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
            item->setText(QString::number(info.probabilityRange));
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
    void TmachineGroupFuncDetailSetupPanel::destroyUpdateWidgetPanel()
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
        m_pUpdateAction = new QAction(tr("更新该行记录"), m_pContextMenu);
        m_pContextMenu->addAction(m_pUpdateAction);
        connect(m_pUpdateAction, SIGNAL(triggered()), this, SLOT(onUpdateActionTriggered()));
    }

    //---------------------------------------------------------------------
    void TmachineGroupFuncDetailSetupPanel::onUpdateActionTriggered()
    {
        // Initialize the panel and launch it up.
        // 
        m_pUpdateWidgetPanel = new QWidget();
        m_pMachineFuncDetailSetupUpdateWidget->setupUi(m_pUpdateWidgetPanel);

        initUpdateWidgetPanel(m_pMachineFuncDetailSetupUpdateWidget);

        connect(m_pMachineFuncDetailSetupUpdateWidget->m_buttonBox, SIGNAL(accepted()), this, SLOT(onConfirmUpdateNewRecord()));
        connect(m_pMachineFuncDetailSetupUpdateWidget->m_buttonBox, SIGNAL(rejected()), this, SLOT(onCancelUpdateNewRecord()));

        m_pUpdateWidgetPanel->show();

    }

    //---------------------------------------------------------------------
    void TmachineGroupFuncDetailSetupPanel::onConfirmUpdateNewRecord()
    {
        DBMachineDetailInfo machineDetailInfo = this->getInfo();
        bool success = TDatabaseManager::getInstance()->updateMachineDetailInfo(machineDetailInfo);

        doInitPanel(m_eCurrentOperatingCategory);

        // Close the window and destroy the panel object.
        // 
        this->destroyUpdateWidgetPanel();
    }

    //---------------------------------------------------------------------
    void TmachineGroupFuncDetailSetupPanel::onCancelUpdateNewRecord()
    {
        // Close the window and destroy the panel object.
        // 
        this->destroyUpdateWidgetPanel();
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
                    QTableWidgetItem* item = table->item(row, DETAIL_SETUP_TABLE_COLUMN_ASSET_TYPE);
                    if (item)
                    {
                        m_uiCurrentUpdateMachineId = item->data(Qt::UserRole).toInt();
                    }

                    QPoint pos = QCursor::pos();
                    m_pContextMenu->exec(QCursor::pos());
                }
            }
        }
    }

    //---------------------------------------------------------------------
    void TmachineGroupFuncDetailSetupPanel::initUpdateWidgetPanel(Ui::TmachineGroupFuncDetailSetupViewItemUpdate* widget)
    {
        DBMachineDetailInfo info;
        if (widget)
        {
            Q_ASSERT_X(m_pMachineFuncDetailSetupTable != NULL, "TmachineGroupFuncBaseSetupPanel::onCustomContextMenuRequested", "");
            if (m_pMachineFuncDetailSetupTable)
            {
                QTableWidget* table = m_pMachineFuncDetailSetupTable->m_machineGroupFuncDetailSetupTable;
                Q_ASSERT_X(table != NULL, "TmachineGroupFuncDetailSetupPanel::onUpdateActionTriggered", "");

                if (table)
                {
                    if (m_contextMenuTriggeredIndex.isValid())
                    {
                        int row = m_contextMenuTriggeredIndex.row();
                        QTableWidgetItem* item = table->item(row, DETAIL_SETUP_TABLE_COLUMN_ASSET_TYPE);
                        if (item)
                        {
                            int machineId = item->data(Qt::UserRole).toInt();

                            bool find = TDatabaseManager::getInstance()->findMachineDetailInfoWithMachineId(machineId, info);

                            if (find)
                            {
                                widget->m_categoryLabel->setText(CATEGORY_STRING[m_eCurrentOperatingCategory]);
                                widget->m_mainProbabilityLineEdit->setText(QString::number(info.mainProbability));
                                widget->m_probabilityRangeLineEdit->setText(QString::number(info.probabilityRange));
                                widget->m_cashRatioLineEdit->setText(QString::number(info.cashRatio));
                                widget->m_coinRatioLineEdit->setText(QString::number(info.coinRatio));
                                widget->m_maxPointsLineEdit->setText(QString::number(info.maxPoints));
                                widget->m_minPointsLineEdit->setText(QString::number(info.minPoints));
                                widget->m_markPointsLineEdit->setText(QString::number(info.markPoints));
                                widget->m_clearPointCycleLineEdit->setText(QString::number(info.clearPointCycle));
                                widget->m_pushPointDaysLineEdit->setText(QString::number(info.pushPointDays));
                                widget->m_machineTypeLineEdit->setText(QString::number(info.machineType));
                            }
                        }
                    }
                }
            }

        }
    }

}

