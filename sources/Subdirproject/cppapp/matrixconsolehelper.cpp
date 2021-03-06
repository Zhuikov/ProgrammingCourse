#include "matrixconsolehelper.h"
#include <iomanip>

void MatrixConsoleHelper::printMatrix(const Matrix matrix)
{
    for(int i = 0; i < matrix.getNumOfRows(); i++){
        for(int j = 0; j < matrix.getNumOfCols(); j++){
            std::cout << std::setw(4) << matrix.get(i, j);
        }
        std::cout << std::endl;
    }
}

Matrix MatrixConsoleHelper::makeMatrix()
{
    int n, m;
    std::cout << "Число строк: ";
    std::cin >> n;
    std::cout << "Число столбцов: ";
    std::cin >> m;
    Matrix arr(n, m);

    return arr;
}
