#include "Catalog.h"
#include <iostream>

void CATALOG::addItem(const FILES& item) {
    items.push_back(item);
}

const vector<FILES>& CATALOG::getItems() const {
    return items;
}

void CATALOG::show() const {
    for (const FILES& item : items) {
        item.show();
    }
}