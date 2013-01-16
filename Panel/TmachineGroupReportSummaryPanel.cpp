#include "TmachineGroupReportSummaryPanel.h"
#include <QtGui/QVBoxLayout>

namespace YR2K {

    //---------------------------------------------------------------------
    TmachineGroupReportSummaryPanel::TmachineGroupReportSummaryPanel(QWidget* parent /*= NULL*/)
        : QWidget(parent)
    {

        QWidget* summaryWidget = new QWidget(this);
        QWidget* table = new QWidget(this);
        m_pMachineGroupReportViewItemSummaryWidget = new Ui::TmachineGroupReportViewItemSummaryWidget();
        m_pMachineGroupReportViewItemSummaryTable = new Ui::TmachineGroupReportViewItemSummaryTable();

        m_pMachineGroupReportViewItemSummaryWidget->setupUi(summaryWidget);
        m_pMachineGroupReportViewItemSummaryTable->setupUi(table);
        QVBoxLayout* mainLayout = new QVBoxLayout(this);
        mainLayout->addWidget(summaryWidget);
        mainLayout->addWidget(table);

        int w = summaryWidget->width() > table->width() ? table->width() : table->width();
        int h = summaryWidget->height() + table->height();
        setLayout(mainLayout);

        setFixedSize(w, h);

    }

    //---------------------------------------------------------------------
    TmachineGroupReportSummaryPanel::~TmachineGroupReportSummaryPanel(void)
    {
    }

}
