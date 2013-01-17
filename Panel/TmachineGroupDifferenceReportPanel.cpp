#include "TmachineGroupDifferenceReportPanel.h"
#include <QtGui/QVBoxLayout>

namespace YR2K {

    TmachineGroupDifferenceReportPanel::TmachineGroupDifferenceReportPanel(QWidget* parent /*= NULL*/)
        : QWidget(parent)
    {
        m_pMachineGroupDifferenceReportViewItemTable = new Ui::TmachineGroupDifferenceReportViewItemTable();

        QWidget* table = new QWidget(this);
        m_pMachineGroupDifferenceReportViewItemTable->setupUi(table);

        QVBoxLayout* mainLayout = new QVBoxLayout(this);
        mainLayout->addWidget(table);

        int w = table->width();
        int h = table->height();

        setFixedSize(w, h);

        setLayout(mainLayout);
    }


    TmachineGroupDifferenceReportPanel::~TmachineGroupDifferenceReportPanel(void)
    {
    }
}

