#include "TkeyValueTreeView.h"
#include <QtGui/QVBoxLayout>
#include <QtGui/QMenu>
#include <QtGui/QHBoxLayout>
#include <QtGui/QCloseEvent>
namespace YR2K {

    //---------------------------------------------------------------------
    TkeyValueTreeView::TkeyValueTreeView(const QString& keyName, const QStringList& valueList, QWidget* parent /*= NULL*/)
        : QWidget(parent)
        , m_strKeyName(keyName)
        , m_strValueList(valueList)
    {
        m_pTreeView = new QTreeView(this);
        m_pTreeModel = new QStandardItemModel(m_pTreeView);

        init();

        m_pAddButton = new QPushButton(this);
        m_pRemoveButton = new QPushButton(this);
        m_pApplyButton = new QPushButton(this);

        m_pAddButton->setText("+");
        m_pRemoveButton->setText("-");
        m_pApplyButton->setText("Ó¦ÓÃ");

        m_pAddButton->setFixedWidth(20);
        m_pRemoveButton->setFixedWidth(20);

        QHBoxLayout* buttonLayout = new QHBoxLayout();
        buttonLayout->addWidget(m_pAddButton, 0, Qt::AlignLeft);
        buttonLayout->addWidget(m_pRemoveButton, 0, Qt::AlignLeft);
        buttonLayout->addSpacing(180);
        buttonLayout->addWidget(m_pApplyButton);

        QVBoxLayout* mainLayout = new QVBoxLayout(this);
        mainLayout->addWidget(m_pTreeView);
        mainLayout->addLayout(buttonLayout);
        setLayout(mainLayout);

        connect(m_pAddButton, SIGNAL(clicked()), this, SLOT(onAddButtonClicked()));
        connect(m_pRemoveButton, SIGNAL(clicked()), this, SLOT(onRemoveButtonClicked()));
        connect(m_pApplyButton, SIGNAL(clicked()), this, SIGNAL(valueUpdated()));
        connect(m_pTreeView, SIGNAL(clicked(const QModelIndex &)), this, SLOT(onItemClicked(const QModelIndex &)));

    }

    //---------------------------------------------------------------------
    TkeyValueTreeView::~TkeyValueTreeView(void)
    {
    }

    //---------------------------------------------------------------------
    void TkeyValueTreeView::init()
    {
        m_pTreeModel->clear();

        QString labelString; 
        QStandardItem* labelItem = NULL;
        QStandardItem* valueItem = NULL;
        QList<QStandardItem*> record;
        QStandardItem* invisiableRoot = m_pTreeModel->invisibleRootItem();

        for (int i = 0; i < m_strValueList.count(); i++)
        {
            labelString = m_strKeyName;
            labelString.append(QString::number(i));

            labelItem = new QStandardItem(labelString);
            labelItem->setEditable(false);

            valueItem = new QStandardItem(m_strValueList[i]);
            valueItem->setEditable(false);

            record.clear();
            record << labelItem;
            record << valueItem;

            invisiableRoot->appendRow(record);
        }

        m_pTreeView->setModel(m_pTreeModel);

    }

    //---------------------------------------------------------------------
    QStringList TkeyValueTreeView::getValueList() const
    {
        return m_strValueList;
    }

    //---------------------------------------------------------------------
    void TkeyValueTreeView::setValueList( const QStringList& valueList )
    {
        m_strValueList = valueList;
    }

    //---------------------------------------------------------------------
    void TkeyValueTreeView::updateValueList()
    {
        Q_ASSERT_X(m_pTreeModel != NULL, "TkeyValueTreeView::updateValueList", "");
        if (m_pTreeModel)
        {
            m_strValueList.clear();
            QStandardItem* invisiableRoot = m_pTreeModel->invisibleRootItem();
            int valueListCount = invisiableRoot->rowCount();
            QStandardItem* child = NULL;
            for (int i = 0; i < valueListCount; i++)
            {
                child = invisiableRoot->child(i, 1);
                m_strValueList << child->text();
            }
        }

    }

    //---------------------------------------------------------------------
    void TkeyValueTreeView::onAddButtonClicked()
    {

    }

    //---------------------------------------------------------------------
    void TkeyValueTreeView::onRemoveButtonClicked()
    {
        int row = m_currentClickedModelIndex.row();
        Q_ASSERT_X(m_pTreeModel != NULL, "TkeyValueTreeView::onCustomContextMenuRequested", "");
        if (m_pTreeModel)
        {
            QStandardItem* item = m_pTreeModel->item(row);
            if (item)
            {
                m_pTreeModel->removeRow(row);
                m_pTreeView->setModel(m_pTreeModel);

                updateValueList();

                m_currentClickedModelIndex = m_pTreeView->currentIndex();
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
            newItemKey->setEditable(false);
            QStandardItem* newItemValue = new QStandardItem(value);
            newItemValue->setEditable(false);

            QList<QStandardItem*> newRecord;
            newRecord << newItemKey;
            newRecord << newItemValue;

            QStandardItem* invisibleItem = m_pTreeModel->invisibleRootItem();
            invisibleItem->appendRow(newRecord);

            updateValueList();
        }
    }

    //---------------------------------------------------------------------
    void TkeyValueTreeView::onItemClicked( const QModelIndex& modelIndex)
    {
        m_currentClickedModelIndex = modelIndex;
    }






}
