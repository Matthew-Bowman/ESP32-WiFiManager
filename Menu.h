// Menu.h
#ifndef MENU_H
#define MENU_H

#define MAX_MENU_ITEMS 10

class Menu {
private:
    MenuItem* items[MAX_MENU_ITEMS];  // Array of MenuItem pointers
    int itemCount = 0;  // Keeps track of how many items are in the menu

public:
    void addItem(MenuItem* item) {
        if (itemCount < MAX_MENU_ITEMS) {
            items[itemCount++] = item;
        }
    }

    MenuItem* getItem(int index) const {
        if (index >= 0 && index < itemCount) {
            return items[index];
        }
        return nullptr;
    }

    int getItemCount() const {
        return itemCount;
    }
};

#endif  // MENU_H
