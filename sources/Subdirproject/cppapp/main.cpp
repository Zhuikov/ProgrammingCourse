#include "matrix.h"
#include "matrixconsolehelper.h"
#include <iostream>

using namespace std;

int main()
{
    MatrixConsoleHelper matrixSlave;
    Matrix arr2(3, 8), arr3(3, 8);
    Matrix arr = matrixSlave.makeMatrix();
    for (int i = 0; i < arr.getNumOfRows(); i++)
        for (int j = 0; j < arr.getNumOfCols(); j ++ )
            arr.set(i, j, (i + 1) * j);
    matrixSlave.printMatrix(arr);
    arr2 = arr;
    matrixSlave.printMatrix(arr2);
    arr3 = arr + arr2;
    matrixSlave.printMatrix(arr3);

    return 0;
}
