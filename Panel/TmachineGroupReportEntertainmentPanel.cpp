#include <QtGui/QVBoxLayout>
#include <QtGui/QGridLayout>

#include "TmachineGroupReportEntertainmentPanel.h"

namespace YR2K {

    //---------------------------------------------------------------------
    TmachineGroupReportEntertainmentPanel::TmachineGroupReportEntertainmentPanel(QWidget* parent /*= NULL*/)
        : TpanelBase(parent)
    {
        QWidget* searchWidget = new QWidget(this);
        QWidget* table = new QWidget(this);
        m_pSearchWidget = new Ui::TsearchWidget();
        m_pMachineGroupReportEntertainmentViewItemTable = new Ui::TmachineGroupReportEntertainmentViewItemTable();

        m_pSearchWidget->setupUi(searchWidget);
        m_pMachineGroupReportEntertainmentViewItemTable->setupUi(table);
        QVBoxLayout* mainLayout = new QVBoxLayout(this);
        mainLayout->addWidget(searchWidget);
        mainLayout->addWidget(table);

        int w = searchWidget->width() > table->width() ? searchWidget->width() : table->width();
        int h = searchWidget->height() + table->height();
        setLayout(mainLayout);

        setFixedSize(w, h);

    }

    //---------------------------------------------------------------------
    TmachineGroupReportEntertainmentPanel::~TmachineGroupReportEntertainmentPanel(void)
    {
    }

}
