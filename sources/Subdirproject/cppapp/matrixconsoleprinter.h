#ifndef MATRIXDEMOAPP_H
#define MATRIXDEMOAPP_H
#include "matrix.h"
#include <iostream>


class MatrixConsoleIo
{
public:
    MatrixConsoleIo();
    void printMatrix(Matrix*);
    Matrix& makeMatrix();
};

#endif // MATRIXDEMOAPP_H
