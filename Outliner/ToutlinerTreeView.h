#ifndef TOUTLINERTREEVIEW_H
#define TOUTLINERTREEVIEW_H

#include <QtGui/QTreeView>

class QStandardItemModel;
class QStandardItem;

namespace YR2K {
//     struct Tcategory
//     {
//         Tcategory();
//         ~Tcategory();
//         QStandardItem*  m_pCabinetCategory;
//         QStandardItem*  m_pLotteryCategory;
//         QStandardItem*  m_pSimulateCategory;
//         QStandardItem*  m_pCoinDozerCategory;
//         QStandardItem*  m_pWagerCategory;
//     };


    class ToutlinerTreeView : public QWidget
    {
    public:
        ToutlinerTreeView(QWidget* parent = NULL);
        ~ToutlinerTreeView(void);

    private:
        void    addCategoryToItem(QStandardItem* item);

    private:
        QTreeView*              m_pTreeView;
        QStandardItemModel*     m_pModel;
    };

}


#endif  // TOUTLINERTREEVIEW_H

