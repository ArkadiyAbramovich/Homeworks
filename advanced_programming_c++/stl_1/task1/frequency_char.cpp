#include "frequency_char.hpp"
#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
 
void FrequencyChar(std::string str)
{
    std::map<char, int> M;
 
    for (int i = 0; str[i]; i++) 
    {
  
        if (M.find(str[i]) == M.end()) {

            M.insert(std::make_pair(str[i], 1));
        } else {

            M[str[i]]++;
        }
    }


    
    std::vector<std::pair<char, int>> arr;

        for (const auto &item : M) {
            arr.emplace_back(item);
    }

    std::sort(arr.begin(), arr.end(), [](const auto &x, const auto &y) { return x.second > y.second; });
 
    for (const auto& it : arr) {
        std::cout << it.first << ": " << it.second << std::endl;
    }
}
