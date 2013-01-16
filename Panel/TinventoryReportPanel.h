#ifndef TINVENTORYREPORTPANEL_H
#define TINVENTORYREPORTPANEL_H
#include <QtGui/QWidget>
#include "ui_TsearchWidget.h"
#include "ui_TinventoryReportViewItemTable.h"

class QPushButton;
class QLabel;
class QLineEdit;

namespace YR2K {

    class TinventoryReportPanel : public QWidget
    {
    public:
        TinventoryReportPanel(QWidget* parent = NULL);
        ~TinventoryReportPanel(void);

    private:
        QPushButton*                            m_pAddNewRecordButton;
        QLabel*                                 m_pTotalInventoryLabel;
        QLineEdit*                              m_pTotalInventoryLineEdit;

        Ui::TinventoryReportViewItemTable*      m_pIinventoryReportViewItemTable;
        Ui::TsearchWidget*                      m_pSearchWidget;

    };

}
#endif  // TINVENTORYREPORTPANEL_H

