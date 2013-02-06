#include "TmachineGroupFuncBaseSetupPanel.h"
#include "DatabaseResultModel.h"
#include <QtGui/QGridLayout>
#include <QtGui/QVBoxLayout>
#include <QtGui/QMenu>
#include <QtCore/QTextCodec>

namespace YR2K {

    typedef std::vector<DBMachineBaseInfo>::iterator DBMachineBaseInfoIter;

    static const char* CATEGORY_STRING[CATEGORY_NUM] =
    {
        "柜体类",
        "彩票类",
        "模拟类",
        "推币类",
        "博彩类",
    };

    //---------------------------------------------------------------------
    TmachineGroupFuncBaseSetupPanel::TmachineGroupFuncBaseSetupPanel(QWidget* parent /*= NULL*/)
        : TpanelBase(parent)
        , m_eCurrentOperatingCategory(CATEGORY_INVALID)
        , m_pContextMenu(NULL)
        , m_pRemoveAction(NULL)
    {
        m_pMachineBaseSetupTable = new Ui::TmachineDetailSetupViewItemTable();
        m_pMachineBaseSetupTable->setupUi(this);
        m_pPushButton = new QPushButton(this);
        m_pPushButton->setText(tr("添加明细"));

        QGridLayout* mainLayout = new QGridLayout(this);

        QSpacerItem *horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
        mainLayout->addWidget(m_pPushButton, 0, 0);
        mainLayout->addItem(horizontalSpacer, 0, 1);
        mainLayout->addWidget(m_pMachineBaseSetupTable->m_machineGroupFuncBaseSetupTable, 1, 0, 1, 2);

        setLayout(mainLayout);

        m_pMachineBaseSetupAddWidget = new Ui::TmachineGroupFuncBaseSetupViewItemAddWidget();

        // connect signals and slots.
        //
        connect(m_pPushButton, SIGNAL(clicked()), this, SLOT(onAddButtonClicked()));

        createActions();
        m_pMachineBaseSetupTable->m_machineGroupFuncBaseSetupTable->setContextMenuPolicy(Qt::CustomContextMenu);
        m_pMachineBaseSetupTable->m_machineGroupFuncBaseSetupTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        connect(m_pMachineBaseSetupTable->m_machineGroupFuncBaseSetupTable, SIGNAL(customContextMenuRequested(const QPoint&)), this, SLOT(onCustomContextMenuRequested(const QPoint&)));

    }

    //---------------------------------------------------------------------
    TmachineGroupFuncBaseSetupPanel::~TmachineGroupFuncBaseSetupPanel(void)
    {
    }

    //---------------------------------------------------------------------
    DBMachineBaseInfo TmachineGroupFuncBaseSetupPanel::getInfo( void ) const
    {
        DBMachineBaseInfo info;

        Q_ASSERT_X(m_pMachineBaseSetupAddWidget != NULL, "TassetSetupPanel::getInfo", "");
        if (m_pMachineBaseSetupAddWidget)
        {
            info.assetType = m_eCurrentOperatingCategory;
            info.factoryName = m_pMachineBaseSetupAddWidget->m_factoryNameLineEdit->text().toStdString();
            info.factoryPhoneNumber = m_pMachineBaseSetupAddWidget->m_factoryPhoneNumberLineEdit->text().toStdString();
            info.location = m_pMachineBaseSetupAddWidget->m_locationTextEdit->toPlainText().toStdString();
            info.businessConditions = m_pMachineBaseSetupAddWidget->m_businessConditionsComboBox->currentIndex() == 1;
            info.remark = m_pMachineBaseSetupAddWidget->m_remarkTextEdit->toPlainText().toStdString();
        }

        return info;
    }

    //---------------------------------------------------------------------
    void TmachineGroupFuncBaseSetupPanel::doInitPanel(const TECategory& category, unsigned int itemData)
    {
        Q_ASSERT_X(m_pMachineBaseSetupTable->m_machineGroupFuncBaseSetupTable != NULL, "", "");
        QTableWidget* table = m_pMachineBaseSetupTable->m_machineGroupFuncBaseSetupTable;
        if (table)
        {
            int count = table->rowCount();
            while (count--)
            {
                int& rowIndex = count;
                table->removeRow(rowIndex);
            }
        }

        m_vecMachineFuncBaseInfoFoundResult.clear();

        TDatabaseManager::getInstance()->findMachineBaseInfoWithAssetType(category, m_vecMachineFuncBaseInfoFoundResult);

        DBMachineBaseInfoIter iter = m_vecMachineFuncBaseInfoFoundResult.begin();
        DBMachineBaseInfoIter end = m_vecMachineFuncBaseInfoFoundResult.end();

        int i = 0;
        for (; iter != end; ++iter)
        {
            insertRecordToTable(i, *iter);
            i++;
        }

        m_eCurrentOperatingCategory = category;
    }

    //---------------------------------------------------------------------
    void TmachineGroupFuncBaseSetupPanel::insertRecordToTable( const int rowIndex, const DBMachineBaseInfo& info )
    {
        Q_ASSERT_X(m_pMachineBaseSetupTable->m_machineGroupFuncBaseSetupTable != NULL, "", "");
        QTableWidget* table = m_pMachineBaseSetupTable->m_machineGroupFuncBaseSetupTable;
        if (table)
        {
            QTableWidgetItem* item = NULL;

            table->insertRow(rowIndex);

            // Set factory name.
            // 
            item = new QTableWidgetItem();
            std::string xxx = info.factoryName;
            QString yy = tr(info.factoryName.c_str());
            item->setText(tr(info.factoryName.c_str()));
            table->setItem(rowIndex, BASE_SETUP_TABLE_COLUMN_FACTORY_NAME, item);
            item->setData(Qt::UserRole, info.machineId);

            // Set factory phone number.
            // 
            item = new QTableWidgetItem();
            item->setText(tr(info.factoryPhoneNumber.data()));
            table->setItem(rowIndex, BASE_SETUP_TABLE_COLUMN_FACTORY_PHONE_NUMBER, item);

            // Set location.
            // 
            item = new QTableWidgetItem();
            item->setText(tr(info.location.data()));
            table->setItem(rowIndex, BASE_SETUP_TABLE_COLUMN_LOCATION, item);

            // Set business conditions.
            // 
            item = new QTableWidgetItem();
            if (info.businessConditions)
            {
                item->setText(tr("是"));
            }
            else
            {
                item->setText(tr("否"));
            }
            table->setItem(rowIndex, BASE_SETUP_TABLE_COLUMN_BUSINESS_CONDITIONS, item);

            // Set remark.
            // 
            item = new QTableWidgetItem();
            item->setText(tr(info.remark.data()));
            table->setItem(rowIndex, BASE_SETUP_TABLE_COLUMN_REMARK, item);

        }
    }

    //---------------------------------------------------------------------
    void TmachineGroupFuncBaseSetupPanel::destroyAddWidgetPanel()
    {
        if (m_pAddWidgetPanel)
        {
            m_pAddWidgetPanel->close();
            delete m_pAddWidgetPanel;
            m_pAddWidgetPanel = NULL;
        }
    }

    //---------------------------------------------------------------------
    void TmachineGroupFuncBaseSetupPanel::createActions( void )
    {
        m_pContextMenu = new QMenu(tr(""), this);
        m_pRemoveAction = new QAction(tr("删除该行记录"), m_pContextMenu);
        m_pContextMenu->addAction(m_pRemoveAction);
        connect(m_pRemoveAction, SIGNAL(triggered()), this, SLOT(onRemoveActionTriggered()));
    }

    //---------------------------------------------------------------------
    void TmachineGroupFuncBaseSetupPanel::onAddButtonClicked()
    {
        // Initialize the panel and launch it up.
        // 
        m_pAddWidgetPanel = new QWidget();
        m_pMachineBaseSetupAddWidget->setupUi(m_pAddWidgetPanel);
        connect(m_pMachineBaseSetupAddWidget->m_buttonBox, SIGNAL(accepted()), this, SLOT(onConfirmAddNewRecord()));
        connect(m_pMachineBaseSetupAddWidget->m_buttonBox, SIGNAL(rejected()), this, SLOT(onCancelAddNewRecord()));
        m_pAddWidgetPanel->show();
    }

    //---------------------------------------------------------------------
    void TmachineGroupFuncBaseSetupPanel::onConfirmAddNewRecord()
    {

        std::vector<DBAssetsInfo> assets;
        TDatabaseManager::getInstance()->findAssetsWithAssetType(m_eCurrentOperatingCategory, assets);
        // Add new record into DB.
        // 
        DBMachineBaseInfo machineBaseInfo = this->getInfo();
        bool success = TDatabaseManager::getInstance()->addMachine(machineBaseInfo, assets[0].clearCoinCycle);

        emit machineBaseRecordAdded(machineBaseInfo);
        // Close the window and destroy the panel object.
        // 
        this->destroyAddWidgetPanel();

        Q_ASSERT_X(m_pMachineBaseSetupTable->m_machineGroupFuncBaseSetupTable != NULL, "", "");
        QTableWidget* table = m_pMachineBaseSetupTable->m_machineGroupFuncBaseSetupTable;
        if (table)
        {
            int rowIndex = table->rowCount();
            this->insertRecordToTable(rowIndex, machineBaseInfo);
        }
    }

    //---------------------------------------------------------------------
    void TmachineGroupFuncBaseSetupPanel::onCancelAddNewRecord()
    {
        // Close the window and destroy the panel object.
        // 
        this->destroyAddWidgetPanel();
    }

    //---------------------------------------------------------------------
    void TmachineGroupFuncBaseSetupPanel::onCustomContextMenuRequested( const QPoint& pos )
    {
        Q_ASSERT_X(m_pMachineBaseSetupTable != NULL, "TmachineGroupFuncBaseSetupPanel::onCustomContextMenuRequested", "");
        if (m_pMachineBaseSetupTable)
        {
            QTableWidget* table = m_pMachineBaseSetupTable->m_machineGroupFuncBaseSetupTable;
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
    void TmachineGroupFuncBaseSetupPanel::onRemoveActionTriggered()
    {
        int row = m_contextMenuTriggeredIndex.row();
        Q_ASSERT_X(m_pMachineBaseSetupTable != NULL, "TmachineGroupFuncBaseSetupPanel::onCustomContextMenuRequested", "");
        if (m_pMachineBaseSetupTable)
        {
            QTableWidget* table = m_pMachineBaseSetupTable->m_machineGroupFuncBaseSetupTable;
            Q_ASSERT_X(table != NULL, "TmachineGroupFuncBaseSetupPanel::onCustomContextMenuRequested", "");

            if (table)
            {
                QTableWidgetItem* item = table->item(row, ASSET_SETUP_TABLE_COLUMN_CATEGORY_NAME);
                Q_ASSERT_X(item != NULL, "TmachineGroupFuncBaseSetupPanel::onCustomContextMenuRequested", "");
                if (item)
                {
                    DBMachineBaseInfo infoToBeRemoved;
                    int machineBasiInfoId = item->data(Qt::UserRole).toInt();
                    bool success = TDatabaseManager::getInstance()->findMachineBaseInfoWithMachineId(machineBasiInfoId, infoToBeRemoved);
                    success = TDatabaseManager::getInstance()->removeMachine(machineBasiInfoId);
                    table->removeRow(row);

                    emit machineBaseRecordRemoved(infoToBeRemoved);
                }
            }
        }
    }



}
