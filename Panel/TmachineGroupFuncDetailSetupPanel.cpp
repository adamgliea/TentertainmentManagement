#include "TmachineGroupFuncDetailSetupPanel.h"
#include "DatabaseResultModel.h"
#include <QtGui/QGridLayout>
#include <QtGui/QVBoxLayout>
#include <QtGui/QPushButton>

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
    {
        m_pMachineFuncSetupTable = new Ui::TmachineGroupFuncDetailSetupViewItemTable();

        QWidget* table = new QWidget(this);
        m_pMachineFuncSetupTable->setupUi(table);

        QGridLayout* mainLayout = new QGridLayout(this);
        mainLayout->addWidget(table);

        int w = table->width();
        int h = table->height();

        setFixedSize(w, h);
        setLayout(mainLayout);
    }

    //---------------------------------------------------------------------
    TmachineGroupFuncDetailSetupPanel::~TmachineGroupFuncDetailSetupPanel(void)
    {
    }

    //---------------------------------------------------------------------
    void TmachineGroupFuncDetailSetupPanel::doInitPanel(const TECategory& category)
    {
        Q_ASSERT_X(m_pMachineFuncSetupTable->m_machineGroupFuncDetailSetupTable != NULL, "", "");
        QTableWidget* table = m_pMachineFuncSetupTable->m_machineGroupFuncDetailSetupTable;
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
        Q_ASSERT_X(m_pMachineFuncSetupTable->m_machineGroupFuncDetailSetupTable != NULL, "", "");
        QTableWidget* table = m_pMachineFuncSetupTable->m_machineGroupFuncDetailSetupTable;
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
}

