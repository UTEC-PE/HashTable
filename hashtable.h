#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include "iterator.h"

template <typename K, typename V> 
class HashTable {
public:
    bool remove(const K) {
        // TODO: Removes an element with a certain key
    }

    bool hasKey(const K) { 
        // TODO: Looks for a key 
    } 

    V operator[](const K) {
        // TODO: Gets the element with a certain key and update
        // TODO: It can also insert or update a node (like insert, e.g. tree["test"] = "hola") 
    }

    V at(const K) {
        // TODO: Gets the element with a certain key 
    }

    int size() {
        // TODO: Amount of keys
    }

    bool empty() const {
        // TODO: If the hash table is empty
    }

    void clear() {
         // TODO: Clear the hash table
    }

    Iterator<K, V> begin() {
        // TODO
    }

    Iterator<K, V> end() { 
        // TODO
    }

    ~HashTable() {
        // TODO
    }
};

#endif