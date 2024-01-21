#include "remove_duplicates.hpp"
#include <algorithm>


void rmv::RemoveDuplicates(std::vector<int>& vec) {

    std::sort(vec.begin(), vec.end());
    auto it = std::unique(vec.begin(), vec.end());
    vec.erase(it, vec.end());

}