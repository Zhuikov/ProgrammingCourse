#include "matrix.h"
#include "matrixconsoleprinter.h"
#include <iostream>

using namespace std;

int main()
{
    MatrixConsoleIo matrixPrinter;
    Matrix arr = matrixPrinter.makeMatrix();
    matrixPrinter.printMatrix(&arr);
    Matrix arr2 = arr;
    cout << endl;
    arr2.print();

    return 0;
}
