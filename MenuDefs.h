// MenuDefs.h
#ifndef MENU_DEFS_H
#define MENU_DEFS_H

#include "MenuItem.h"

// MenuDefinition now owns the MenuItem directly
struct MenuDefinition {
    const char* group;
    MenuItem item;

    MenuDefinition(const char* grp, const char* name, const char* path)
        : group(grp), item(name, path) {}
};

// Define Menu groupings and items {"GROUP", "DISPLAY_NAME", "ROUTE"}
MenuDefinition allMenuDefs[] = {
    { "/", "Test", "/" },
};

const int menuDefsCount = sizeof(allMenuDefs) / sizeof(MenuDefinition);

#endif