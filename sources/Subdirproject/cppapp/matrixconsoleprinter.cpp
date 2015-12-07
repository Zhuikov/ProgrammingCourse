#include "matrixconsoleprinter.h"

MatrixConsoleIo::MatrixConsoleIo()
{

}

void MatrixConsoleIo::printMatrix(Matrix* matrix)
{
    for(int i= 0; i < matrix->getNumOfRows(); i++){
        for(int j=0; j < matrix->getNumOfCols(); j++){
            std::cout << matrix->get(i,j) << " ";
        }
        std::cout << std::endl;
    }
}

Matrix& MatrixConsoleIo::makeMatrix()
{
    int i, j, n, m;
    std::cout << "Число строк: ";
    std::cin >> n;
    std::cout << "Число столбцов: ";
    std::cin >> m;
    Matrix arr(n, m);
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            arr.set(i, j, i * j);
    return arr;
}

