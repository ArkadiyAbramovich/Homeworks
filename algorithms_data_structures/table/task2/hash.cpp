#include "hash.h"
#include <string>
#include <stdint.h>

int hash(std::string str, int n, int p) {

    uint64_t sum_hash = 0;
    int mult = 1;

    for (int i{0}; i < str.size(); i++) {

        sum_hash += static_cast<int>(str[i]) * mult;
        mult *= p;

    }

    return sum_hash%n;

}