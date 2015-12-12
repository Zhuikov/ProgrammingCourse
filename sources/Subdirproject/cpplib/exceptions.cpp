#include <iostream>
#include "exceptions.h"
#include "matrix.h"

IndexException::IndexException(int i, int j): i(i), j(j)
{

}

void IndexException::printBoundsMatrix(Matrix matrix)
{
    std::cout << matrix.getNumOfRows() << "x" << matrix.getNumOfCols();
}

UnequalMatrix::UnequalMatrix()
{

}

void UnequalMatrix::errorMessage()
{
    std::cout << "Размеры матриц неравны!" << std::endl;
}

ImpossibleMultiplication::ImpossibleMultiplication()
{

}

void ImpossibleMultiplication::errorMessage()
{
    std::cout << "Нельзя перемножить данные матрицы!" << std::endl;
}

NotBiquadratic::NotBiquadratic()
{

}

NoRow::NoRow()
{

}

NotNatural::NotNatural()
{

}
