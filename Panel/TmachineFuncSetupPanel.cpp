#include "TmachineFuncSetupPanel.h"
#include <QtGui/QGridLayout>
#include <QtGui/QVBoxLayout>
#include <QtGui/QPushButton>

namespace YR2K {

    TmachineFuncSetupPanel::TmachineFuncSetupPanel(QWidget* parent /*= NULL*/)
        : QWidget(parent)
    {
        m_pMachineFuncSetupTable = new Ui::TmachineFuncSetupViewItemTable();
        m_pMachineFuncSetupTable->setupUi(this);
        m_pPushButton = new QPushButton(this);
        m_pPushButton->setText(tr("添加机台功能"));

        QGridLayout* mainLayout = new QGridLayout(this);

        QSpacerItem *horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
        mainLayout->addWidget(m_pPushButton, 0, 0);
        mainLayout->addItem(horizontalSpacer, 0, 1);
        mainLayout->addLayout(m_pMachineFuncSetupTable->mainLayout, 1, 0, 1, 2);

        setLayout(mainLayout);
    }

    TmachineFuncSetupPanel::~TmachineFuncSetupPanel(void)
    {
    }

}
