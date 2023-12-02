#include "hash_rabin_karp.h"
#include <iostream>
#include "hash.h"
#include <string>


int hash_rabin_karp(std::string str, std::string sub_str) {

    int size_str = str.size();
    int size_sub_str = sub_str.size();

    int sub_str_hash = hash(sub_str, size_sub_str);
    int str_hash = 0;

    for (int i{0}; i < str.size(); i++) {
        if (i == 0) {
            str_hash = hash(str, size_sub_str);
        } else {
            str_hash -= static_cast<int>(str[i - 1]);
            str_hash += static_cast<int>(str[i + size_sub_str - 1]);
        }

        if (str_hash != sub_str_hash) {
            return 1;
        } else {
            for (int j{0}; j < sub_str.size(); j++) {
                if (str[i + j] != sub_str[j]) {
                   return 1;
                } else {
                    return i;
                }
            } 
            
        }
    }
    return 0;
}