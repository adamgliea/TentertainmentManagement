#include "TinventoryReportPanel.h"

#include "TDatabaseManager.h"
#include <QtGui/QVBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QMenu>

#include <QtGui/QStandardItem>
#include <QtGui/QStandardItemModel>

namespace YR2K {

    typedef std::vector<DBInventoryReportInfo>::iterator DBInventoryReportInfoIter;

    //---------------------------------------------------------------------
    TinventoryReportPanel::TinventoryReportPanel(QWidget* parent /*= NULL*/)
        : TpanelBase(parent)
        , m_eCurrentOperatingCategory(CATEGORY_INVALID)
        , m_uiCurrentOperatingMachineId(0xFFFFFFFF)
        , m_uiCurrentOperatingReportId(0xFFFFFFFF)
    {
        m_pTotalInventoryLabel = new QLabel();
        m_pTotalInventoryLineEdit = new QLineEdit();
        m_pTotalInventoryLineEdit->setFixedWidth(100);
        m_pTotalInventoryLineEdit->setEnabled(false);

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
        m_selectedEndDate= currentDate;
        m_selectedBeginDate = lastMonthCurrentDate;


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

        m_addCoinTreeView = new TkeyValueTreeView(tr("加币"), QStringList());
        m_clearCoinTreeView = new TkeyValueTreeView(tr("清币"), QStringList());

        int w = table->width();
        int h = searchWidget->height() + table->height();

        setFixedSize(w, h);


        connect(m_pSearchWidget->m_dateBeginButton, SIGNAL(clicked()), this, SLOT(onBeginDateClicked()));
        connect(m_pSearchWidget->m_dateEndButton, SIGNAL(clicked()), this, SLOT(onEndDateClicked()));
        connect(m_pBeginDateCalendar, SIGNAL(activated(const QDate&)), this, SLOT(onBeginDateActived(const QDate&)));
        connect(m_pEndDateCalendar, SIGNAL(activated(const QDate&)), this, SLOT(onEndDateActived(const QDate&)));

        connect(m_pSearchWidget->m_searchButton, SIGNAL(clicked()), this, SLOT(onSearchClicked()));
        connect(m_pIinventoryReportViewItemTable->m_inventoryReportTableWidget, SIGNAL(cellClicked (int, int)), this, SLOT(onCellClicked(int, int)));

        connect(m_addCoinTreeView, SIGNAL(valueUpdated()), this, SLOT(onAddCoinUpdated()));
        connect(m_clearCoinTreeView, SIGNAL(valueUpdated()), this, SLOT(onClearCoinUpdated()));
    }

    //---------------------------------------------------------------------
    TinventoryReportPanel::~TinventoryReportPanel(void)
    {
        if (m_pBeginDateCalendar)
        {
            delete m_pBeginDateCalendar;
            m_pBeginDateCalendar = NULL;
        }

        if (m_pEndDateCalendar)
        {
            delete m_pEndDateCalendar;
            m_pEndDateCalendar = NULL;
        }

        if (m_addCoinTreeView)
        {
            delete m_addCoinTreeView;
            m_addCoinTreeView = NULL;
        }

        if (m_clearCoinTreeView)
        {
            delete m_clearCoinTreeView;
            m_clearCoinTreeView = NULL;
        }
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

        m_uiCurrentOperatingMachineId = itemData;

        m_eCurrentOperatingCategory = category;

        QDate currentDate = QDate::currentDate();
        QString dateString = currentDate.toString("yyyy/MM/dd");
        m_pSearchWidget->m_dateEndButton->setText(dateString);
        QDate lastMonthCurrentDate(currentDate.addMonths(-1));
        dateString = lastMonthCurrentDate.toString("yyyy/MM/dd");
        m_pSearchWidget->m_dateBeginButton->setText(dateString);

        updateTotalInventoryInfo();

    }

    //---------------------------------------------------------------------
    void TinventoryReportPanel::doHack()
    {
        QDate date0(2013, 1, 8);
        QDate date1(2013, 1, 9);
        QDate date2(2013, 1, 10);
        QDate date3(2013, 1, 11);
        QDate date4(2013, 1, 12);
        QDate date5(2013, 1, 13);

        DBInventoryReportInfo info;
        info.machineId = 18;

        info.addPointString = "1|2|3|4|5";
        info.clearPointString = "0|1|2";
        info.opTime = date0.toJulianDay();

        TDatabaseManager::getInstance()->addInventoryReport(info);

        info.addPointString = "2|3|4|5|6";
        info.clearPointString = "1|2|3";
        info.opTime = date1.toJulianDay();
        TDatabaseManager::getInstance()->addInventoryReport(info);

        info.addPointString = "2|2|2|4|4";
        info.clearPointString = "1|1|3";
        info.opTime = date2.toJulianDay();
        TDatabaseManager::getInstance()->addInventoryReport(info);

        info.addPointString = "9|1|2|8|4";
        info.clearPointString = "4|1|3";
        info.opTime = date3.toJulianDay();
        TDatabaseManager::getInstance()->addInventoryReport(info);

        info.addPointString = "10|1";
        info.clearPointString = "4|1|3";
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

        int machineId = m_uiCurrentOperatingMachineId;
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
            TDatabaseManager::getInstance()->findMachineBaseInfoWithMachineId(m_uiCurrentOperatingMachineId, machineInfo);

            table->insertRow(rowIndex);

            item = new QTableWidgetItem();
            item->setText(tr(machineInfo.factoryName.c_str()));
            table->setItem(rowIndex, INVENTORY_REPORT_TABLE_COLUMN_MANCHINE_NAME, item);
            item->setData(Qt::UserRole, info.reportId);

            item = new QTableWidgetItem();
            item->setText(tr("点击查看详情"));
            table->setItem(rowIndex, INVENTORY_REPORT_TABLE_COLUMN_ADDCOIN_INFO, item);

            item = new QTableWidgetItem();
            QString addCoin = info.addPointString.c_str();
            item->setText(QString::number(computeCoins(addCoin)));
            table->setItem(rowIndex, INVENTORY_REPORT_TABLE_COLUMN_TOTAL_ADDCOIN, item);

            item = new QTableWidgetItem();
            item->setText(tr("点击查看详情"));
            table->setItem(rowIndex, INVENTORY_REPORT_TABLE_COLUMN_CLEARCOIN_INFO, item);

            item = new QTableWidgetItem();
            QString clearCoin = info.clearPointString.c_str();
            item->setText(QString::number(computeCoins(clearCoin)));
            table->setItem(rowIndex, INVENTORY_REPORT_TABLE_COLUMN_TOTAL_CLEARCOIN, item);

            item = new QTableWidgetItem();
            item->setText(QString::number(computeTotalBenifit(addCoin, clearCoin)));
            table->setItem(rowIndex, INVENTORY_REPORT_TABLE_COLUMN_BENIFIT, item);

        }

    }

    //---------------------------------------------------------------------
    int TinventoryReportPanel::computeCoins( const QString& data )
    {
        QStringList list = data.split("|");
        int count = list.count();

        int addCoins = 0;
        for (int i = 0; i < count; i++)
        {
            addCoins += list[i].toInt();
        }

        return addCoins;
    }

    //---------------------------------------------------------------------
    int TinventoryReportPanel::computeTotalBenifit( const QString& addCoinData, const QString& clearCoinData )
    {
        int addCoins = computeCoins(addCoinData);
        int clearCoins = computeCoins(clearCoinData);
        int benifit = clearCoins - addCoins;

        return benifit;
    }

    //---------------------------------------------------------------------
    int TinventoryReportPanel::computeTotalInventory( unsigned int machineId )
    {
        std::vector<DBInventoryReportInfo> vecInfo;
        TDatabaseManager::getInstance()->findInventoryReportWithMachineId(machineId, vecInfo);

        DBInventoryReportInfoIter iter = vecInfo.begin();
        DBInventoryReportInfoIter end = vecInfo.end();

        int benifit = 0;
        int totalInventory = 0;
        for (; iter != end; ++iter)
        {
            benifit = computeTotalBenifit((*iter).addPointString.c_str(), (*iter).clearPointString.c_str());
            totalInventory += benifit;
        }

        return totalInventory;
    }

    //---------------------------------------------------------------------
    void TinventoryReportPanel::updateTableByReportInfo( const DBInventoryReportInfo& reportInfo )
    {
        Q_ASSERT_X(m_pIinventoryReportViewItemTable->m_inventoryReportTableWidget!= NULL, "", "");
        QTableWidget* table = m_pIinventoryReportViewItemTable->m_inventoryReportTableWidget;
        if (table)
        {
            int findRowIndex = -1;
            int tableRows = table->rowCount();
            QTableWidgetItem* item = NULL;

            for (int i = 0; i < tableRows; i++)
            {
                item = table->item(i, INVENTORY_REPORT_TABLE_COLUMN_MANCHINE_NAME);
                int id = item->data(Qt::UserRole).toUInt();
                if (id == reportInfo.reportId)
                {
                    findRowIndex = i;
                    break;
                }
            }

            if (findRowIndex != -1)
            {
                table->removeRow(findRowIndex);
                insertRecordToTable(findRowIndex, reportInfo);
            }
        }
    }

    //---------------------------------------------------------------------
    void TinventoryReportPanel::updateTotalInventoryInfo()
    {
        int totalInventory = computeTotalInventory(m_uiCurrentOperatingMachineId);
        m_pTotalInventoryLineEdit->setText(QString::number(totalInventory));
    }

    //---------------------------------------------------------------------
    void TinventoryReportPanel::onCellClicked( int row, int column )
    {
        unsigned int reportId = 0;
        DBInventoryReportInfo info;

        Q_ASSERT_X(m_pIinventoryReportViewItemTable->m_inventoryReportTableWidget!= NULL, "", "");
        QTableWidget* table = m_pIinventoryReportViewItemTable->m_inventoryReportTableWidget;
        if (table)
        {
            QTableWidgetItem* item = table->item(row, INVENTORY_REPORT_TABLE_COLUMN_MANCHINE_NAME);
            if (item)
            {
                reportId = item->data(Qt::UserRole).toUInt();
            }
        }

        if (column == INVENTORY_REPORT_TABLE_COLUMN_ADDCOIN_INFO)
        {
            TDatabaseManager::getInstance()->findInventoryReportWithReportId(reportId, info);

            QString addCoinString = info.addPointString.c_str();
            QStringList list = addCoinString.split("|");

            m_addCoinTreeView->setValueList(list);
            m_addCoinTreeView->init();

            m_addCoinTreeView->showNormal();

            m_uiCurrentOperatingReportId = reportId;
            return;

        }

        if (column == INVENTORY_REPORT_TABLE_COLUMN_CLEARCOIN_INFO)
        {

            TDatabaseManager::getInstance()->findInventoryReportWithReportId(reportId, info);

            QString clearCoinString = info.clearPointString.c_str();
            QStringList list = clearCoinString.split("|");

            m_clearCoinTreeView->setValueList(list);
            m_clearCoinTreeView->init();

            m_clearCoinTreeView->showNormal();

            m_uiCurrentOperatingReportId = reportId;

            return;
        }
    }

    //---------------------------------------------------------------------
    void TinventoryReportPanel::onAddCoinUpdated()
    {
        QStringList newValueList = m_addCoinTreeView->getValueList();
        QString recordString = "";

        int count = newValueList.count();
        if (count > 0)
        {
            recordString.append(newValueList[0]);
            for (int i = 1; i < count; i++)
            {
                recordString.append("|");
                recordString.append(newValueList[i]);
            }

            DBInventoryReportInfo info;
            TDatabaseManager::getInstance()->findInventoryReportWithReportId(m_uiCurrentOperatingReportId, info);

            info.addPointString = recordString.toStdString();
            TDatabaseManager::getInstance()->updateInventoryReport(info);
            updateTableByReportInfo(info);
            updateTotalInventoryInfo();
        }

    }

    //---------------------------------------------------------------------
    void TinventoryReportPanel::onClearCoinUpdated()
    {
        QStringList newValueList = m_clearCoinTreeView->getValueList();
        QString recordString = "";

        int count = newValueList.count();
        if (count > 0)
        {
            recordString.append(newValueList[0]);
            for (int i = 1; i < count; i++)
            {
                recordString.append("|");
                recordString.append(newValueList[i]);
            }

            DBInventoryReportInfo info;
            TDatabaseManager::getInstance()->findInventoryReportWithReportId(m_uiCurrentOperatingReportId, info);

            info.clearPointString = recordString.toStdString();
            TDatabaseManager::getInstance()->updateInventoryReport(info);
            updateTableByReportInfo(info);
            updateTotalInventoryInfo();
        }
    }


}
