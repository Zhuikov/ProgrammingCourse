#include "exceptions.h"
#include "matrix.h"
#include "matrixconsolehelper.h"
#include "equation.h"
#include <iostream>

int main()
{
    MatrixConsoleHelper matrixSlave;
    Matrix arr2(3, 8), arr3(3, 8);
    Matrix arr = matrixSlave.makeMatrix();
    for (int i = 0; i < arr.getNumOfRows(); i++)
        for (int j = 0; j < arr.getNumOfCols(); j++)
            arr.set(i, j, (i + 1) + j);
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            arr2.set(i, j, (i + 1) * (j + 1));
    std::cout << "матрица 1 (3x8)" << std::endl;
    matrixSlave.printMatrix(arr);
    try {

    arr2 = arr;
    std::cout << "Матрица 2 (3x8) = матрица 1" << std::endl;
    matrixSlave.printMatrix(arr2);
    arr3 = arr + arr2;
    std::cout << "Матрица 3 (3x8) = матрица 2 + матрица1" << std::endl;
    matrixSlave.printMatrix(arr3);
    arr3 = arr * 3;
    std::cout << "матрица 3 = матрица1 * 3" << std::endl;
    matrixSlave.printMatrix(arr3);
    std::cout << std::endl;
    Matrix arr4(8, 2), arr5(3, 2);
    for (int i = 0; i < arr4.getNumOfRows(); i ++)
        for(int j = 0; j < arr4.getNumOfCols(); j ++)
            arr4.set(i, j, i + j + 1);
    std::cout << "Матрица4 (8х2)" << std::endl;
    matrixSlave.printMatrix(arr4);
    arr5 = arr * arr4;
    std::cout << "матрица5(3х2) = матрица1(3х8) * матрица4(8х2)" << std::endl;
    matrixSlave.printMatrix(arr5);
    }
    catch (UnequalMatrix* e){
        e->errorMessage();
    }
    catch (ImpossibleMultiplication* e){
        e->errorMessage();
    }

    return 0;
}
