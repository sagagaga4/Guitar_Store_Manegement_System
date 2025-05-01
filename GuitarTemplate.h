//___GuitarStoreManagement___/
//***__GuitarTemplate.h__***/

#ifndef STORE_H
#define STORE_H

#include <vector>
#include <iostream>
using namespace std;

template <typename T>
class Store {
private:
    vector<T> inventory; // Stores pointers to Guitars or derived types

public:
    Store() = default;

    // Copy constructor (deep copy for pointer types)
    Store(const Store<T>& other) {
        for (const auto& item : other.inventory) {
            inventory.push_back(new typename remove_pointer<T>::type(*item)); // deep copy
        }
    }
 
    //Iterative Destructor for inventory vector
    ~Store() {
        for (auto& item : inventory) {
            delete item;
        }
        inventory.clear();
    }
//In order to add item at the end of a vector list, PUSH BACK
    void addItem(T item) {
        inventory.push_back(item);
    }

    void printInventory() const {
        if (inventory.empty()) {
            cout << "Inventory is empty.\n";
            return;
        }

        for (const auto& item : inventory) {
            item->getInfo(); // polymorphic call
            cout << "--------------------------\n";
        }
    }

    // Optional: total value friend function
    friend void printTotalValue(const Store<T>& s) {
        double total = 0.0;
        for (const auto& item : s.inventory) {
            total += item->getPrice(432); // `getPrice(double)` signature from your class
        }
        cout << "Total Store Value: $" << total << endl;
    }
};

#endif

