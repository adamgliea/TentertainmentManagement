#ifndef TPANELBASE_H
#define TPANELBASE_H

#include "TcommonTypes.h"
#include <QtGui/QWidget>

namespace YR2K {

    class TpanelBase : public QWidget
    {
    public:
        TpanelBase(QWidget* parent = NULL);
        virtual ~TpanelBase(void);

        TEPanelIndex        getType();
        void                initPanel();


        virtual void        doInitPanel();

    protected:
        TEPanelIndex        m_eType;
    };

}

#endif  // TPANELBASE_H

