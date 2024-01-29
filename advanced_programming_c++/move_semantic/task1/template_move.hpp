#pragma once
#include <vector>

template<class T>
int MoveVector(std::vector<T>& in_vec_1, std::vector<T>& out_vec_2) {

    in_vec_1 = std::move(out_vec_2);

   return 0; 

}