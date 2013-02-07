#include "TkeyValueTreeView.h"
#include <QtGui/QVBoxLayout>
#include <QtGui/QMenu>

namespace YR2K {

    //---------------------------------------------------------------------
    TkeyValueTreeView::TkeyValueTreeView(const QString& keyName, const QStringList& valueList, QWidget* parent /*= NULL*/)
        : QWidget(parent)
        , m_strKeyName(keyName)
        , m_strValueList(valueList)
    {
        m_pTreeView = new QTreeView(this);
        m_pTreeModel = new QStandardItemModel(m_pTreeView);

        QString labelString; 
        QStandardItem* labelItem = NULL;
        QStandardItem* valueItem = NULL;
        QList<QStandardItem*> record;
        QStandardItem* invisiableRoot = m_pTreeModel->invisibleRootItem();

        for (int i = 0; i < valueList.count(); i++)
        {
            labelString = m_strKeyName;
            labelString.append(QString::number(i));

            labelItem = new QStandardItem(labelString);
            valueItem = new QStandardItem(valueList[i]);

            record.clear();
            record << labelItem;
            record << valueItem;

            invisiableRoot->appendRow(record);
        }

        m_pTreeView->setModel(m_pTreeModel);

        QVBoxLayout* mainLayout = new QVBoxLayout(this);
        mainLayout->addWidget(m_pTreeView);

        setLayout(mainLayout);


        setContextMenuPolicy(Qt::CustomContextMenu);
        connect(m_pTreeView, SIGNAL(customContextMenuRequested(const QPoint&)), this, SLOT(onCustomContextMenuRequested(const QPoint&)));
    }

    //---------------------------------------------------------------------
    TkeyValueTreeView::~TkeyValueTreeView(void)
    {
    }

    //---------------------------------------------------------------------
    QStringList TkeyValueTreeView::getValueList() const
    {
        return m_strValueList;
    }


    //---------------------------------------------------------------------
    void TkeyValueTreeView::createActions( void )
    {
        m_pContextMenu = new QMenu(tr(""), this);
        m_pAddAction = new QAction(tr("添加"), m_pContextMenu);
        m_pRemoveAction = new QAction(tr("删除该行记录"), m_pContextMenu);
        m_pContextMenu->addAction(m_pAddAction);
        m_pContextMenu->addAction(m_pRemoveAction);

        connect(m_pAddAction, SIGNAL(triggered()), this, SLOT(onAddActionTriggered()));
        connect(m_pRemoveAction, SIGNAL(triggered()), this, SLOT(onRemoveActionTriggered()));
    }

    //---------------------------------------------------------------------
    void TkeyValueTreeView::updateValueList()
    {
        Q_ASSERT_X(m_pTreeModel != NULL, "TkeyValueTreeView::updateValueList", "");
        if (m_pTreeModel)
        {
            m_strValueList.clear();
            QStandardItem* invisiableRoot = m_pTreeModel->invisibleRootItem();
            int valueListCount = invisiableRoot->row();
            QStandardItem* child = NULL;
            for (int i = 0; i < valueListCount; i++)
            {
                child = invisiableRoot->child(i, 1);
                m_strValueList << child->text();
            }
        }

    }

    //---------------------------------------------------------------------
    void TkeyValueTreeView::onCustomContextMenuRequested( const QPoint& pos )
    {
        Q_ASSERT_X(m_pTreeView != NULL, "TkeyValueTreeView::onCustomContextMenuRequested", "");
        if (m_pTreeView)
        {
            m_contextMenuTriggeredIndex = m_pTreeView->indexAt(pos);
            int row = m_contextMenuTriggeredIndex.row();
            if (m_contextMenuTriggeredIndex.isValid())
            {
                QPoint pos = QCursor::pos();
                m_pContextMenu->exec(pos);
            }
        }
    }

    //---------------------------------------------------------------------
    void TkeyValueTreeView::onAddActionTriggered()
    {
        emit addValueTriggered();
    }

    //---------------------------------------------------------------------
    void TkeyValueTreeView::onRemoveActionTriggered()
    {
        int row = m_contextMenuTriggeredIndex.row();
        Q_ASSERT_X(m_pTreeModel != NULL, "TkeyValueTreeView::onCustomContextMenuRequested", "");
        if (m_pTreeModel)
        {
            QStandardItem* item = m_pTreeModel->item(row);
            Q_ASSERT_X(item != NULL, "TkeyValueTreeView::onCustomContextMenuRequested", "");
            if (item)
            {
                m_pTreeModel->removeRow(row);
                m_pTreeView->setModel(m_pTreeModel);

                updateValueList();
            }
        }
    }

    //---------------------------------------------------------------------
    void TkeyValueTreeView::onAddValue( const QString& value )
    {
        Q_ASSERT_X(m_pTreeModel != NULL, "TkeyValueTreeView::onCustomContextMenuRequested", "");
        if (m_pTreeModel)
        {
            int currentCount = m_strValueList.count();
            QString key = m_strKeyName;
            key.append(QString::number(currentCount));

            QStandardItem* newItemKey = new QStandardItem(key);
            QStandardItem* newItemValue = new QStandardItem(value);
            
            QList<QStandardItem*> newRecord;
            newRecord << newItemKey;
            newRecord << newItemValue;

            QStandardItem* invisibleItem = m_pTreeModel->invisibleRootItem();
            invisibleItem->appendColumn(newRecord);

            updateValueList();
        }
    }



}
