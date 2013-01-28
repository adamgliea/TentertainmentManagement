#ifndef TCOMMONTYPES_H
#define TCOMMONTYPES_H
#include <stdio.h>
#include <QtCore/QtGlobal>

namespace YR2K {
    enum TEPanelIndex
    {
        PANEL_INVALID                   = -1,
        PANEL_WELCOME                   = 0,
        PANEL_ASSET_SETUP,
        PANEL_MACHINE_FUNC_SETUP,
        PANEL_ADMIN_SETUP,
        PANEL_MACHINE_GROUP_DETAIL_SETUP,
        PANEL_MACHINE_GROUP_REPORT_ENTERAINTMENT,
        PANEL_MACHINE_GROUP_REPORT_GIFT,
        PANEL_MACHINE_GROUP_REPORT_LOTTERY,
        PANEL_INVENTORY_REPORT,
        PANEL_MACHINE_GROUP_DIFFERENCE,
        PANEL_WARNING_SYSTEM,

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

