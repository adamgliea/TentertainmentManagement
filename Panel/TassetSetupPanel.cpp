#include "TassetSetupPanel.h"
#include <QtGui/QGridLayout>
#include <QtGui/QVBoxLayout>
namespace YR2K {

    //---------------------------------------------------------------------
    TassetSetupPanel::TassetSetupPanel(QWidget* parent /*= NULL*/)
        : QWidget(parent)
    {
        m_pAssetSetupTable = new Ui::TassetSetupViewItemTable();
        m_pAssetSetupTable->setupUi(this);
        m_pPushButton = new QPushButton(this);
        m_pPushButton->setText(tr("添加新大类"));

        QGridLayout* mainLayout = new QGridLayout(this);

        QSpacerItem *horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
        mainLayout->addWidget(m_pPushButton, 0, 0);
        mainLayout->addItem(horizontalSpacer, 0, 1);
        mainLayout->addLayout(m_pAssetSetupTable->mainLayout, 1, 0, 1, 2);

        setLayout(mainLayout);

    }

    //---------------------------------------------------------------------
    TassetSetupPanel::~TassetSetupPanel(void)
    {
    }

}
