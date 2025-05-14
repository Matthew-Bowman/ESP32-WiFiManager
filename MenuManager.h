// MenuManager.h
#ifndef MENU_MANAGER_H
#define MENU_MANAGER_H

#include "MenuDefs.h"
#include "Menu.h"

class MenuManager {
public:
    static Menu getMenuByPath(const String& path) {
        Menu menu;
        for (int i = 0; i < menuDefsCount; ++i) {
            if (String(allMenuDefs[i].group) == path) {
                menu.addItem(&allMenuDefs[i].item);
            }
        }
        return menu;
    }
};

#endif