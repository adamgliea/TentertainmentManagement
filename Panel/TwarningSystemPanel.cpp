#include "TwarningSystemPanel.h"
#include <QtGui/QVBoxLayout>

namespace YR2K {

    TwarningSystemPanel::TwarningSystemPanel(QWidget* parent /*= NULL*/)
        : QWidget(parent)
    {
        m_pWarningSystemViewItemTable = new Ui::TwarningSystemViewItemTable();

        QWidget* table = new QWidget(this);
        m_pWarningSystemViewItemTable->setupUi(table);

        QVBoxLayout* mainLayout = new QVBoxLayout(this);
        mainLayout->addWidget(table);

        int w = table->width();
        int h = table->height();

        setFixedSize(w, h);

        setLayout(mainLayout);
    }


    TwarningSystemPanel::~TwarningSystemPanel(void)
    {
    }
}

