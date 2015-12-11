#include "exceptions.h"
#include "matrix.h"
#include "matrixconsolehelper.h"
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
    matrixSlave.printMatrix(arr);
    try {

    arr2 = arr;
    matrixSlave.printMatrix(arr2);
    arr3 = arr + arr2;
    matrixSlave.printMatrix(arr3);
    arr3 = arr * 3;
    matrixSlave.printMatrix(arr3);
    std::cout << "arr" << std::endl;
    matrixSlave.printMatrix(arr);
    std::cout << "arr2" << std::endl;
    matrixSlave.printMatrix(arr2);
    arr3 = arr2 * arr;
    std::cout << "arr3" << std::endl;
    matrixSlave.printMatrix(arr3);

    }
    catch (UnequalMatrix* e){
        e->errorMessage();
    }
    catch (ImpossibleMultiplication* e){
        e->errorMessage();
    }


    return 0;
}
