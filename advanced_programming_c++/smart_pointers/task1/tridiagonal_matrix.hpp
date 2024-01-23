#pragma once
#include <vector>
#include <memory>

class TridiagonalMatrix {
    public:
        std::vector<double> m_down;
        std::vector<double> m_upper;
        std::vector<double> m_middle;

        TridiagonalMatrix(
            const std::vector<double>& down, 
            const std::vector<double>& upper, 
            const std::vector<double>& middle);

        ~TridiagonalMatrix();

        std::unique_ptr<TridiagonalMatrix> Clone();
        
};

