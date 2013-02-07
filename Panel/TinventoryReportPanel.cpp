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
        , m_uiCurrentOperatingId(0xFFFFFFFF)
    {
        m_pTotalInventoryLabel = new QLabel();
        m_pTotalInventoryLineEdit = new QLineEdit();
        m_pTotalInventoryLineEdit->setFixedWidth(100);

        m_pTotalInventoryLabel->setText(tr("库存总量："));

        QWidget* table = new QWidget(/*this*/);
        m_pIinventoryReportViewItemTable = new Ui::TinventoryReportViewItemTable();
        m_pIinventoryReportViewItemTable->setupUi(table);

        QWidget* searchWidget = new QWidget(/*this*/);
        m_pSearchWidget = new Ui::TsearchWidget();
        m_pSearchWidget->setupUi(searchWidget);

        QDate currentDate = QDate::currentDate();
        QString dateString = currentDate.toString("yyyy/MM/dd");
        m_pSearchWidget->m_dateEndButton->setText(dateString);
        QDate lastMonthCurrentDate(currentDate.addMonths(-1));
        dateString = lastMonthCurrentDate.toString("yyyy/MM/dd");
        m_pSearchWidget->m_dateBeginButton->setText(dateString);
        m_selectedEndDate= lastMonthCurrentDate;
        m_selectedBeginDate = currentDate;


        m_pBeginDateCalendar = new QCalendarWidget();
        m_pEndDateCalendar = new QCalendarWidget();

        QGridLayout* mainLayout = new QGridLayout(this);

        QSpacerItem *horizontalSpacerForTotalInventory = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        mainLayout->addWidget(m_pTotalInventoryLabel, 0, 0);
        mainLayout->addWidget(m_pTotalInventoryLineEdit, 0, 1);
        mainLayout->addItem(new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum), 0, 2);
        mainLayout->addItem(new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum), 0, 3);
        mainLayout->addWidget(searchWidget, 1, 0, 1, 3);
        mainLayout->addWidget(table, 2, 0, 1, 4);
        setLayout(mainLayout);

        int w = table->width();
        int h = searchWidget->height() + table->height();

        setFixedSize(w, h);


        connect(m_pSearchWidget->m_dateBeginButton, SIGNAL(clicked()), this, SLOT(onBeginDateClicked()));
        connect(m_pSearchWidget->m_dateEndButton, SIGNAL(clicked()), this, SLOT(onEndDateClicked()));
        connect(m_pBeginDateCalendar, SIGNAL(activated(const QDate&)), this, SLOT(onBeginDateActived(const QDate&)));
        connect(m_pEndDateCalendar, SIGNAL(activated(const QDate&)), this, SLOT(onEndDateActived(const QDate&)));

        connect(m_pSearchWidget->m_searchButton, SIGNAL(clicked()), this, SLOT(onSearchClicked()));

    }

    //---------------------------------------------------------------------
    TinventoryReportPanel::~TinventoryReportPanel(void)
    {
        delete m_pBeginDateCalendar;
        m_pBeginDateCalendar = NULL;

        delete m_pEndDateCalendar;
        m_pEndDateCalendar = NULL;
    }

    //---------------------------------------------------------------------
    void TinventoryReportPanel::doInitPanel(const TECategory& category, unsigned int itemData)
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

        m_vecInventoryReportInfoFoundResult.clear();

        m_uiCurrentOperatingId = itemData;

        m_eCurrentOperatingCategory = category;

        QDate currentDate = QDate::currentDate();
        QString dateString = currentDate.toString("yyyy/MM/dd");
        m_pSearchWidget->m_dateEndButton->setText(dateString);
        QDate lastMonthCurrentDate(currentDate.addMonths(-1));
        dateString = lastMonthCurrentDate.toString("yyyy/MM/dd");
        m_pSearchWidget->m_dateBeginButton->setText(dateString);

    }

    //---------------------------------------------------------------------
    void TinventoryReportPanel::doHack()
    {
        QDate date0(2013, 1, 1);
        QDate date1(2013, 1, 2);
        QDate date2(2013, 1, 3);
        QDate date3(2013, 1, 4);
        QDate date4(2013, 1, 5);
        QDate date5(2013, 1, 6);

        DBInventoryReportInfo info;
        info.machineId = 18;

        info.addPointString = "0";
        info.opTime = date0.toJulianDay();
        TDatabaseManager::getInstance()->addInventoryReport(info);

        info.addPointString = "1";
        info.opTime = date1.toJulianDay();
        TDatabaseManager::getInstance()->addInventoryReport(info);

        info.addPointString = "2";
        info.opTime = date2.toJulianDay();
        TDatabaseManager::getInstance()->addInventoryReport(info);

        info.addPointString = "3";
        info.opTime = date3.toJulianDay();
        TDatabaseManager::getInstance()->addInventoryReport(info);

        info.addPointString = "4";
        info.opTime = date4.toJulianDay();
        TDatabaseManager::getInstance()->addInventoryReport(info);

    }

    //---------------------------------------------------------------------
    void TinventoryReportPanel::onBeginDateClicked()
    {
        Q_ASSERT_X (m_pBeginDateCalendar != NULL, "", "");

        if (m_pBeginDateCalendar)
        {
            m_pBeginDateCalendar->showNormal();
        }
    }

    //---------------------------------------------------------------------
    void TinventoryReportPanel::onEndDateClicked()
    {
        Q_ASSERT_X (m_pEndDateCalendar != NULL, "", "");

        if (m_pEndDateCalendar)
        {
            m_pEndDateCalendar->showNormal();
        }
    }

    //---------------------------------------------------------------------
    void TinventoryReportPanel::onBeginDateActived( const QDate& date )
    {
        Q_ASSERT_X (m_pSearchWidget != NULL, "", "");

        if (m_pSearchWidget)
        {
            QPushButton* button = m_pSearchWidget->m_dateBeginButton;
            Q_ASSERT_X (button != NULL, "", "");

            if (button)
            {
                QString dateString = date.toString("yyyy/MM/dd");
                button->setText(dateString);
            }

            m_pBeginDateCalendar->hide();

            m_selectedBeginDate = date;
        }
    }

    //---------------------------------------------------------------------
    void TinventoryReportPanel::onEndDateActived( const QDate& date )
    {
        Q_ASSERT_X (m_pSearchWidget != NULL, "", "");

        if (m_pSearchWidget)
        {
            QPushButton* button = m_pSearchWidget->m_dateEndButton;
            Q_ASSERT_X (button != NULL, "", "");

            if (button)
            {
                QString dateString = date.toString("yyyy/MM/dd");
                button->setText(dateString);
            }

            m_pEndDateCalendar->hide();

            m_selectedEndDate = date;
        }
    }

    //---------------------------------------------------------------------
    void TinventoryReportPanel::onSearchClicked()
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

        m_vecInventoryReportInfoFoundResult.clear();

        int machineId = m_uiCurrentOperatingId;
        int beginDate = m_selectedBeginDate.toJulianDay();
        int endDate = m_selectedEndDate.toJulianDay();

        TDatabaseManager::getInstance()->findInventoryReportWithTimerange(machineId, beginDate, endDate, m_vecInventoryReportInfoFoundResult);

        DBInventoryReportInfoIter iter = m_vecInventoryReportInfoFoundResult.begin();
        DBInventoryReportInfoIter end = m_vecInventoryReportInfoFoundResult.end();

        int i = 0;
        for (; iter != end; ++iter)
        {
            insertRecordToTable(i, *iter);
            i++;
        }

    }

    //---------------------------------------------------------------------
    void TinventoryReportPanel::insertRecordToTable( const int rowIndex, const DBInventoryReportInfo& info )
    {
        Q_ASSERT_X(m_pIinventoryReportViewItemTable->m_inventoryReportTableWidget!= NULL, "", "");
        QTableWidget* table = m_pIinventoryReportViewItemTable->m_inventoryReportTableWidget;
        if (table)
        {
            QTableWidgetItem* item = NULL;

            DBMachineBaseInfo machineInfo;
            TDatabaseManager::getInstance()->findMachineBaseInfoWithMachineId(m_uiCurrentOperatingId, machineInfo);

            table->insertRow(rowIndex);

            item = new QTableWidgetItem();
            item->setText(tr(machineInfo.factoryName.c_str()));
            table->setItem(rowIndex, INVENTORY_REPORT_TABLE_COLUMN_MANCHINE_NAME, item);
            item->setData(Qt::UserRole, info.machineId);

            item = new QTableWidgetItem();
            item->setText(tr("点击查看详情"));
            table->setItem(rowIndex, INVENTORY_REPORT_TABLE_COLUMN_ADDCOIN_INFO, item);

            item = new QTableWidgetItem();
            QString addCoin = info.addPointString.c_str();
            item->setText(QString::number(computeTotalAddCoins(addCoin)));
            table->setItem(rowIndex, INVENTORY_REPORT_TABLE_COLUMN_TOTAL_ADDCOIN, item);

            item = new QTableWidgetItem();
            item->setText(tr("点击查看详情"));
            table->setItem(rowIndex, INVENTORY_REPORT_TABLE_COLUMN_CLEARCOIN_INFO, item);

            item = new QTableWidgetItem();
            QString clearCoin = info.clearPointString.c_str();
            item->setText(QString::number(computeTotalAddCoins(clearCoin)));
            table->setItem(rowIndex, INVENTORY_REPORT_TABLE_COLUMN_TOTAL_CLEARCOIN, item);

            item = new QTableWidgetItem();
            item->setText(QString::number(computeTotalBenifit(addCoin, clearCoin)));
            table->setItem(rowIndex, INVENTORY_REPORT_TABLE_COLUMN_BENIFIT, item);

        }

    }

    //---------------------------------------------------------------------
    int TinventoryReportPanel::computeTotalAddCoins( const QString& data )
    {
        return 0;
    }

    //---------------------------------------------------------------------
    int TinventoryReportPanel::computeTotalClearCoins( const QString& data )
    {
        return 0;
    }

    //---------------------------------------------------------------------
    int TinventoryReportPanel::computeTotalBenifit( const QString& addCoinData, const QString& clearCoinData )
    {
        return 0;
    }

}
