#include "tridiagonal_matrix.hpp"
#include <iostream>
#include <memory>

TridiagonalMatrix::TridiagonalMatrix(
    const std::vector<double>& down,
    const std::vector<double>& upper, 
    const std::vector<double>& middle) : 

    m_down{down}, m_upper{upper}, m_middle{middle} {};

TridiagonalMatrix::~TridiagonalMatrix() {
    std::cout << "Destructor Called\n";
}

std::unique_ptr<TridiagonalMatrix> TridiagonalMatrix::Clone() {
    auto down = m_down;
    auto upper = m_upper;
    auto middle = m_middle;
    auto ptr = std::make_unique<TridiagonalMatrix>(down, upper, middle);
    return ptr;
    
}