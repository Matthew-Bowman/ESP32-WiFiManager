#ifndef MENU_ITEM_H
#define MENU_ITEM_H

#include <Arduino.h>

class MenuItem {
private:
    String displayName;
    String root;

public:
    MenuItem(String name, String path) : displayName(name), root(path) {}

    String getDisplayName() const { return displayName; }
    String getRoot() const { return root; }
};

#endif