#ifndef TKEYVALUETREEVIEW_H
#define TKEYVALUETREEVIEW_H

#include <QtGui/QWidget>
#include <QtGui/QTreeView>

#include <QtGui/QStandardItem>
#include <QtGui/QStandardItemModel>


namespace YR2K {

    class TkeyValueTreeView : public QWidget
    {
        Q_OBJECT
    public:
        TkeyValueTreeView(const QString& keyName, const QStringList& valueList, QWidget* parent = NULL);
        ~TkeyValueTreeView(void);

        QStringList                 getValueList() const;

    signals:
        void                        addValueTriggered();

    private slots:
        void                        onCustomContextMenuRequested(const QPoint& pos);
        void                        onAddActionTriggered();
        void                        onRemoveActionTriggered();
        void                        onAddValue(const QString& value);

    private:
        void                        createActions(void);
        void                        updateValueList();

    private:
        QTreeView*                  m_pTreeView;
        QStandardItemModel*         m_pTreeModel;

        QString                     m_strKeyName;
        QStringList                 m_strValueList;

        QModelIndex                 m_contextMenuTriggeredIndex;
        QMenu*                      m_pContextMenu;
        QAction*                    m_pAddAction;
        QAction*                    m_pRemoveAction;
    };
}






#endif  // TKEYVALUETREEVIEW_H