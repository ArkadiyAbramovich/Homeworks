#include "hash.h"

int hash(std::string str, int size) {
    int sum_hash = 0;
    for (int i{0}; i < size; i++) {
        sum_hash += static_cast<int>(str[i]);
    }

    return sum_hash;
}