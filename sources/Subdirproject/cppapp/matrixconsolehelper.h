#ifndef MATRIXDEMOAPP_H
#define MATRIXDEMOAPP_H
#include "matrix.h"
#include <iostream>


class MatrixConsoleHelper
{
public:

    MatrixConsoleHelper();
    void printMatrix(Matrix);
    Matrix makeMatrix();
    ~MatrixConsoleHelper();
};

#endif // MATRIXDEMOAPP_H
