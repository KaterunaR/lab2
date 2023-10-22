#pragma once
#include "File.h"
#include <vector>
class CATALOG
{
private:
    vector<FILES> items;

public:
    void addItem(const FILES& item);
    const vector<FILES>& getItems() const;
    void show() const;
};