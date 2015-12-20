#ifndef MATRIXDEMOAPP_H
#define MATRIXDEMOAPP_H
#include "matrix.h"
#include <iostream>


class MatrixConsoleHelper
{
public:
/// Где const ключевые слова?? Можно же их поставить?
/// И конструктор и деструктор ему подходят по умолчанию
/// перегружать пустые не надо
    void printMatrix(const Matrix);
    Matrix makeMatrix();
};

#endif // MATRIXDEMOAPP_H
