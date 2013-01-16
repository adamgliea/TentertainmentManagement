#include "TinventoryReportPanel.h"

#include <QtGui/QVBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>


namespace YR2K {

    TinventoryReportPanel::TinventoryReportPanel(QWidget* parent /*= NULL*/)
        : QWidget(parent)
    {
        m_pAddNewRecordButton = new QPushButton();
        m_pTotalInventoryLabel = new QLabel();
        m_pTotalInventoryLineEdit = new QLineEdit();

        m_pAddNewRecordButton->setText(tr("添加新记录"));
        m_pTotalInventoryLabel->setText(tr("库存总量："));

        QHBoxLayout* totalRecordLayout = new QHBoxLayout();
        totalRecordLayout->addWidget(m_pTotalInventoryLabel);
        totalRecordLayout->addWidget(m_pTotalInventoryLineEdit);

        QWidget* table = new QWidget(this);
        m_pIinventoryReportViewItemTable = new Ui::TinventoryReportViewItemTable();
        m_pIinventoryReportViewItemTable->setupUi(table);

        QWidget* searchWidget = new QWidget(this);
        m_pSearchWidget = new Ui::TsearchWidget();
        m_pSearchWidget->setupUi(searchWidget);

        QGridLayout* mainLayout = new QGridLayout(this);

        QSpacerItem *horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
        QSpacerItem *horizontalSpacerForTotalInventory = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        totalRecordLayout->addSpacerItem(horizontalSpacerForTotalInventory);

        mainLayout->addLayout(totalRecordLayout, 0, 0);
        mainLayout->addWidget(searchWidget, 1, 0, 1, 2);
        mainLayout->addWidget(m_pAddNewRecordButton, 2, 0);
        mainLayout->addItem(horizontalSpacer, 2, 1);
        mainLayout->addWidget(table, 3, 0, 1, 2);

        setLayout(mainLayout);

        int w = table->width();
        int h = searchWidget->height() + table->height();

        setFixedSize(w, h);
    }


    TinventoryReportPanel::~TinventoryReportPanel(void)
    {
    }

}
