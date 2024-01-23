#include "tridiagonal_matrix.hpp"
#include <vector>
#include <memory>

int main(int argc, char** argv ) {

    auto down = std::vector<double>{-4.0, 5.0};
    auto upper = std::vector<double>{14.0, 8.0};
    auto middle = std::vector<double>{3.0, 1.0, 7.0};
    auto matrix = std::make_unique<TridiagonalMatrix>(down, upper, middle);

    auto matrix_clone = matrix->Clone();
   
    return 0;

}