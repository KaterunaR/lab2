#include <iostream>
#include "File.h"
#include "Catalog.h"
using namespace std;

int main() {
    CATALOG catalog1;

    for (int i = 0; i < 3; ++i) {
        string name, data, time, atributs;
        int size;

        cout << "Enter the name of file " << i + 1 << ": ";
        cin >> name;
        cout << "Enter the size of file: ";
        cin >> size;
        cout << "Enter the data: ";
        cin >> data;
        cout << "Enter the time: ";
        cin >> time;
        cout << "Enter the atributs: ";
        cin >> atributs;

        catalog1.addItem(FILES(name, size, data, time, atributs));
    }

    cout << "Files in catalog:" << endl;
    catalog1.show();

    return 0;
}