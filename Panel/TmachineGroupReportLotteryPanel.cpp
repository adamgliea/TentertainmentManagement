#include "TmachineGroupReportLotteryPanel.h"

namespace YR2K {

    //---------------------------------------------------------------------
    TmachineGroupReportLotteryPanel::TmachineGroupReportLotteryPanel(QWidget* parent /*= NULL*/)
        : TpanelBase(parent)
    {

        QWidget* searchWidget = new QWidget(this);
        QWidget* table = new QWidget(this);
        m_pSearchWidget = new Ui::TsearchWidget();
        m_pMachineGroupReportLotteryViewItemTable = new Ui::TmachineGroupReportLotteryViewItemTable();

        m_pSearchWidget->setupUi(searchWidget);
        m_pMachineGroupReportLotteryViewItemTable->setupUi(table);
        QVBoxLayout* mainLayout = new QVBoxLayout(this);
        mainLayout->addWidget(searchWidget);
        mainLayout->addWidget(table);

        int w = searchWidget->width() > table->width() ? searchWidget->width() : table->width();
        int h = searchWidget->height() + table->height();
        setLayout(mainLayout);

        setFixedSize(w, h);

    }

    //---------------------------------------------------------------------
    TmachineGroupReportLotteryPanel::~TmachineGroupReportLotteryPanel(void)
    {
    }

    //---------------------------------------------------------------------
    void TmachineGroupReportLotteryPanel::doInitPanel(const TECategory& category)
    {

    }

}
