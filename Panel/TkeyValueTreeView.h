#ifndef TKEYVALUETREEVIEW_H
#define TKEYVALUETREEVIEW_H

#include <QtGui/QWidget>
#include <QtGui/QTreeView>

#include <QtGui/QStandardItem>
#include <QtGui/QStandardItemModel>
#include <QtGui/QPushButton>

class QCloseEven;

namespace YR2K {

    class TkeyValueTreeView : public QWidget
    {
        Q_OBJECT
    public:
        TkeyValueTreeView(const QString& keyName, const QStringList& valueList, QWidget* parent = NULL);
        ~TkeyValueTreeView(void);

        void                        init();

        QStringList                 getValueList() const;
        void                        setValueList(const QStringList& valueList);

    signals:
        void                        valueUpdated();

    protected:

        private slots:
        void                        onAddButtonClicked();
        void                        onRemoveButtonClicked();
        void                        onAddValue(const QString& value);
        void                        onItemClicked(const QModelIndex& modelIndex);

    private:
        void                        updateValueList();

    private:
        QTreeView*                  m_pTreeView;
        QStandardItemModel*         m_pTreeModel;

        QString                     m_strKeyName;
        QStringList                 m_strValueList;

        QModelIndex                 m_currentClickedModelIndex;

        QPushButton*                m_pAddButton;
        QPushButton*                m_pRemoveButton;

        QPushButton*                m_pApplyButton;
    };
}






#endif  // TKEYVALUETREEVIEW_H