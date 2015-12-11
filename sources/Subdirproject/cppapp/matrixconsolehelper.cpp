#include "matrixconsolehelper.h"
#include <iomanip>

MatrixConsoleHelper::MatrixConsoleHelper()
{
 //   std::cout << "Constructor of ConsoleIO" << std::endl;
}

void MatrixConsoleHelper::printMatrix(Matrix matrix)
{
    for(int i = 0; i < matrix.getNumOfRows(); i++){
        for(int j = 0; j < matrix.getNumOfCols(); j++){
            std::cout << std::setw(3) << matrix.get(i, j);
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

MatrixConsoleHelper::~MatrixConsoleHelper()
{
  //  std::cout << "Destructor of consoleIO" << std::endl;
}

