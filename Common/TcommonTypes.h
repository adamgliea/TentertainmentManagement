#ifndef TCOMMONTYPES_H
#define TCOMMONTYPES_H
#include <stdio.h>
#include <QtCore/QtGlobal>

namespace YR2K {
    enum TEPanelIndex
    {
        PANEL_WELCOME                   = 0,
        PANEL_ASSET_SETUP               = 1,
        PANEL_MACHINE_FUNC_SETUP        = 2,
        PANEL_ADMIN_SETUP               = 3,
        PANEL_MACHINE_GROUP_REPORT_ENTERAINTMENT        = 4,
        PANEL_MACHINE_GROUP_REPORT_GIFT                 = 5,
        PANEL_MACHINE_GROUP_REPORT_LOTTERY              = 6,
        PANEL_INVENTORY_REPORT          = 7,
        PANEL_MACHINE_GROUP_DIFFERENCE  = 8,
        PANEL_WARNING_SYSTEM            = 9,

        PANEL_NUM
    };

    enum TECategory
    {
        CATEGORY_CABINET = 0,
        CATEGORY_LOTTERY,
        CATEGORY_SIMULATE,
        CATEGORY_COINDOZER,
        CATEGORY_WAGER,

        CATEGORY_NUM
    };

    enum TEStatementCategory
    {
        STATMENT_CATEGORY_ENTERTAINMENT = 0,
        STATMENT_CATEGORY_GIFT,
        STATMENT_CATEGORY_GAMING,
        STATMENT_CATEGORY_NUM,
    };

}
#endif  // TCOMMONTYPES_H

