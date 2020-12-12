#ifndef ITERATOR_H
#define ITERATOR_H

#include <utility>

template <typename K, typename V> 
class Iterator {
public:
    explicit Iterator() {
        // TODO
    }

    Iterator<K, V>& operator=(const Iterator<K, V> &other) {          
        // TODO
    }

    bool operator!=(Iterator<K, V> other) {
        // TODO
    }

    Iterator<K, V>& operator++() {
        // TODO
    }

    std::pair<K, V> operator*() {
        // TODO
    }
};

#endif