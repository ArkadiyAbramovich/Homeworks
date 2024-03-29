#include "clone.hpp"
#include <memory>
#include "tridiagonal_matrix.hpp"

std::unique_ptr Clone() {
    auto down = m_down;
    auto upper = m_upper;
    auto middle = m_middle;
    auto ptr = std::make_unique<TridiagonalMatrix>(down, upper, middle);
    return ptr;
}