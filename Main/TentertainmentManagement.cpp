#include "TentertainmentManagement.h"
#include "ToutlinerTreeView.h"

#include <QtGui/QTextEdit>
#include <QtGui/QTextFrame>
#include <QtGui/QTextFrameFormat>
#include <QtGui/QPrinter>
#include <QtGui/QPrintDialog>
#include <QtGui/QStatusBar>
#include <QtGui/QFileDialog>
#include <QtGui/QApplication>
#include <QtGui/QMessageBox>
#include <QtGui/QAction>
#include <QtGui/QMenuBar>
#include <QtGui/QToolBar>
#include <QtGui/QDockWidget>
#include <QtGui/QListWidget>
#include <QtGui/QTreeView>
#include <QtGui/QStackedWidget>
#include <QtGui/QHBoxLayout>
#include <QtGui/QSplitter>
#include <QtCore/QDate>
#include <QtCore/QTextStream>

#include "TcommonTypes.h"
#include "TpanelHeaders.h"
#include "TDatabaseManager.h"

namespace YR2K {

    typedef std::vector<DBMachineBaseInfo>::iterator DBMachineBaseInfoIter;

    static const int WINDOW_SIZE_WIDTH = 1280;
    static const int WINDOW_SIZE_HEIGHT = 720;

    //---------------------------------------------------------------------
    TentertainmentManagement::TentertainmentManagement()
        : m_pOutlinerTreeView(NULL)
        , m_pDockWindow(NULL)
        , m_pStackedWidget(NULL)
        , m_pSplitterWindow(NULL)
    {
        resize(WINDOW_SIZE_WIDTH, WINDOW_SIZE_HEIGHT);

        for(int i = 0; i < PANEL_NUM; i++)
        {
            m_aryPanelWidgets[i] = TpanelCreator::getInstance()->create(static_cast<TEPanelIndex>(i));
            m_aryPanelWidgetScrollAreas[i] = new QScrollArea(this);
            m_aryPanelWidgetScrollAreas[i]->setWidget(m_aryPanelWidgets[i]);
        }
        m_aryPanelWidgets[PANEL_NUM] = TpanelCreator::getInstance()->create(PANEL_INVALID);
        m_aryPanelWidgetScrollAreas[PANEL_NUM] = new QScrollArea(this);
        m_aryPanelWidgetScrollAreas[PANEL_NUM]->setWidget(m_aryPanelWidgets[PANEL_NUM]);

        createActions();
        createMenus();
        createStatusBar();
        createStackedWidget();
        setWindowTitle(tr("Entertainment Management"));
        createTreeView();
        createSplitWindows();

        connect(m_pOutlinerTreeView, SIGNAL(treeMenuClicked(const TEPanelIndex&, const TECategory&, unsigned int)), this, SLOT(onTreeMenuClicked(const TEPanelIndex&, const TECategory&, unsigned int)));
        connect(m_pOutlinerTreeView, SIGNAL(initInventoryTreeCabinetNode(QStandardItem*)), this, SLOT(onInitInventoryTreeCabinetNode(QStandardItem*)));
        connect(m_pOutlinerTreeView, SIGNAL(initInventoryTreeLotteryNode(QStandardItem*)), this, SLOT(onInitInventoryTreeLotteryNode(QStandardItem*)));
        connect(m_pOutlinerTreeView, SIGNAL(initInventoryTreeSimulateNode(QStandardItem*)), this, SLOT(onInitInventoryTreeSimulateNode(QStandardItem*)));
        connect(m_pOutlinerTreeView, SIGNAL(initInventoryTreeCoindozerNode(QStandardItem*)), this, SLOT(onInitInventoryTreeCoindozerNode(QStandardItem*)));
        connect(m_pOutlinerTreeView, SIGNAL(initInventoryTreeWagerNode(QStandardItem*)), this, SLOT(onInitInventoryTreeWagerNode(QStandardItem*)));

        connect(m_aryPanelWidgets[PANEL_MACHINE_GROUP_FUNC_BASE_SETUP], SIGNAL(machineBaseRecordAdded(const DBMachineBaseInfo&)), m_pOutlinerTreeView, SLOT(onMachineBaseRecordAdded(const DBMachineBaseInfo&)));
        connect(m_aryPanelWidgets[PANEL_MACHINE_GROUP_FUNC_BASE_SETUP], SIGNAL(machineBaseRecordRemoved(const DBMachineBaseInfo&)), m_pOutlinerTreeView, SLOT(onMachineBaseRecordRemoved(const DBMachineBaseInfo&)));

        m_pOutlinerTreeView->initInventoryTreeNode();

    }

    //---------------------------------------------------------------------
    void TentertainmentManagement::print()
    {
    #ifndef QT_NO_PRINTDIALOG
        QPrinter printer;

        QPrintDialog *dlg = new QPrintDialog(&printer, this);
        if (dlg->exec() != QDialog::Accepted)
            return;

        // print
        statusBar()->showMessage(tr("Ready"), 2000);
    #endif
    }

    //---------------------------------------------------------------------
    void TentertainmentManagement::save()
    {
        QString fileName = QFileDialog::getSaveFileName(this,
            tr("Choose a file name"), ".",
            tr("HTML (*.html *.htm)"));
        if (fileName.isEmpty())
            return;
        QFile file(fileName);
        if (!file.open(QFile::WriteOnly | QFile::Text)) {
            QMessageBox::warning(this, tr("Dock Widgets"),
                tr("Cannot write file %1:\n%2.")
                .arg(fileName)
                .arg(file.errorString()));
            return;
        }

        QTextStream out(&file);
        QApplication::setOverrideCursor(Qt::WaitCursor);
        // To do:
        // write to file
        QApplication::restoreOverrideCursor();

        statusBar()->showMessage(tr("Saved '%1'").arg(fileName), 2000);
    }

    //---------------------------------------------------------------------
    void TentertainmentManagement::undo()
    {
    }

    //---------------------------------------------------------------------
    void TentertainmentManagement::about()
    {
        QMessageBox::about(this, tr("About Enterainment Management"),
            tr("The <b>Dock Widgets</b> example demonstrates how to "
            "use Qt's dock widgets. You can enter your own text, "
            "click a customer to add a customer name and "
            "address, and click standard paragraphs to add them."));
    }

    //---------------------------------------------------------------------
    void TentertainmentManagement::createActions()
    {
        m_pSaveAct = new QAction(QIcon(":/images/save.png"), tr("&Save..."), this);
        m_pSaveAct->setShortcuts(QKeySequence::Save);
        m_pSaveAct->setStatusTip(tr("Save the current form letter"));
        connect(m_pSaveAct, SIGNAL(triggered()), this, SLOT(save()));

        m_pPrintAct = new QAction(QIcon(":/images/print.png"), tr("&Print..."), this);
        m_pPrintAct->setShortcuts(QKeySequence::Print);
        m_pPrintAct->setStatusTip(tr("Print the current form letter"));
        connect(m_pPrintAct, SIGNAL(triggered()), this, SLOT(print()));

        m_pUndoAct = new QAction(QIcon(":/images/undo.png"), tr("&Undo"), this);
        m_pUndoAct->setShortcuts(QKeySequence::Undo);
        m_pUndoAct->setStatusTip(tr("Undo the last editing action"));
        connect(m_pUndoAct, SIGNAL(triggered()), this, SLOT(undo()));

        m_pQuitAct = new QAction(tr("&Quit"), this);
        m_pQuitAct->setShortcuts(QKeySequence::Quit);
        m_pQuitAct->setStatusTip(tr("Quit the application"));
        connect(m_pQuitAct, SIGNAL(triggered()), this, SLOT(close()));

        m_pAboutAct = new QAction(tr("&About"), this);
        m_pAboutAct->setStatusTip(tr("Show the application's About box"));
        connect(m_pAboutAct, SIGNAL(triggered()), this, SLOT(about()));
    }

    //---------------------------------------------------------------------
    void TentertainmentManagement::createMenus()
    {
        m_pFileMenu = menuBar()->addMenu(tr("&File"));
        m_pFileMenu->addAction(m_pSaveAct);
        m_pFileMenu->addAction(m_pPrintAct);
        m_pFileMenu->addSeparator();
        m_pFileMenu->addAction(m_pQuitAct);

        m_pEditMenu = menuBar()->addMenu(tr("&Edit"));
        m_pEditMenu->addAction(m_pUndoAct);

        m_pViewMenu = menuBar()->addMenu(tr("&View"));

        menuBar()->addSeparator();

        m_pHelpMenu = menuBar()->addMenu(tr("&Help"));
        m_pHelpMenu->addAction(m_pAboutAct);
    }


    //---------------------------------------------------------------------
    void TentertainmentManagement::createStatusBar()
    {
        statusBar()->showMessage(tr("Ready"));
    }

    //---------------------------------------------------------------------
    void TentertainmentManagement::createStackedWidget()
    {
        m_pStackedWidget = new QStackedWidget(this);

        for (int i = 0; i < PANEL_NUM + 1; i++)
        {
            m_pStackedWidget->insertWidget(i, m_aryPanelWidgetScrollAreas[i]);
        }

        m_pStackedWidget->setCurrentIndex(PANEL_NUM);

    }

    //---------------------------------------------------------------------
    void TentertainmentManagement::createTreeView()
    {
        m_pOutlinerTreeView = new ToutlinerTreeView(this);
    }

    //---------------------------------------------------------------------
    void TentertainmentManagement::createSplitWindows()
    {
        m_pSplitterWindow = new QSplitter(this);
        setCentralWidget(m_pSplitterWindow);

        m_pSplitterWindow->addWidget(m_pOutlinerTreeView);
        m_pSplitterWindow->addWidget(m_pStackedWidget);
        QList<int> sizes;
        int treeViewWidth = WINDOW_SIZE_WIDTH / 5;
        int stackedWidgetWidth = WINDOW_SIZE_WIDTH / 5 * 4;
        sizes << treeViewWidth << stackedWidgetWidth;
        m_pSplitterWindow->setSizes(sizes);

    }

    //---------------------------------------------------------------------
    void TentertainmentManagement::onTreeMenuClicked( const TEPanelIndex& menuType, const TECategory& category, unsigned int itemData )
    {
        int index = menuType;
        if (menuType == PANEL_INVALID)
        {
            index = PANEL_NUM;
        }

        TpanelBase* panel = m_aryPanelWidgets[menuType];
        Q_ASSERT_X(panel != NULL, "TentertainmentManagement::onTreeMenuClicked", "");

        if (panel)
        {
            panel->initPanel(category, itemData);
        }

        m_pStackedWidget->setCurrentIndex(index);

    }

    static void addChildNodeToTreeNode(QStandardItem* parentItem, std::vector<DBMachineBaseInfo>& data)
    {
        DBMachineBaseInfoIter iter = data.begin();
        DBMachineBaseInfoIter end = data.end();

        QStandardItem* item = NULL;
        for (; iter != end; ++iter)
        {
            item = new QStandardItem((*iter).factoryName.c_str());
            item->setData((*iter).machineId, Qt::UserRole);
            item->setEditable(false);
            parentItem->appendRow(item);
        }
    }

    //---------------------------------------------------------------------
    void TentertainmentManagement::onInitInventoryTreeCabinetNode( QStandardItem* cabinetItem )
    {
        std::vector<DBMachineBaseInfo> cabinetRecords;
        TDatabaseManager::getInstance()->findMachineBaseInfoWithAssetType(CATEGORY_CABINET, cabinetRecords);

        addChildNodeToTreeNode(cabinetItem, cabinetRecords);
    }

    //---------------------------------------------------------------------
    void TentertainmentManagement::onInitInventoryTreeLotteryNode( QStandardItem* lotteryItem )
    {
        std::vector<DBMachineBaseInfo> lotteryRecords;
        TDatabaseManager::getInstance()->findMachineBaseInfoWithAssetType(CATEGORY_LOTTERY, lotteryRecords);

        addChildNodeToTreeNode(lotteryItem, lotteryRecords);
    }

    //---------------------------------------------------------------------
    void TentertainmentManagement::onInitInventoryTreeSimulateNode( QStandardItem* simulateItem )
    {
        std::vector<DBMachineBaseInfo> simulateRecords;
        TDatabaseManager::getInstance()->findMachineBaseInfoWithAssetType(CATEGORY_SIMULATE, simulateRecords);

        addChildNodeToTreeNode(simulateItem, simulateRecords);
    }

    //---------------------------------------------------------------------
    void TentertainmentManagement::onInitInventoryTreeCoindozerNode( QStandardItem* coindozerItem )
    {
        std::vector<DBMachineBaseInfo> coindozerRecords;
        TDatabaseManager::getInstance()->findMachineBaseInfoWithAssetType(CATEGORY_COINDOZER, coindozerRecords);

        addChildNodeToTreeNode(coindozerItem, coindozerRecords);
    }

    //---------------------------------------------------------------------
    void TentertainmentManagement::onInitInventoryTreeWagerNode( QStandardItem* wagerItem )
    {
        std::vector<DBMachineBaseInfo> wagerRecords;
        TDatabaseManager::getInstance()->findMachineBaseInfoWithAssetType(CATEGORY_WAGER, wagerRecords);

        addChildNodeToTreeNode(wagerItem, wagerRecords);
    }


}
