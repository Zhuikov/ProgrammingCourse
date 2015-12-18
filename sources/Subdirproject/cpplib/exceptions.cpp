#include <iostream>
#include "exceptions.h"
#include "matrix.h"


/// Все эти короткие методы можно было сделать inline, то есть определить прямо в классе (в файле h)

IndexException::IndexException(int i, int j): i(i), j(j)
{

}

void IndexException::printBoundsMatrix(Matrix matrix)
{
    /// Лучше бы они не печатали, а то вдруг не в консоль надо будет эти данные отправить
    std::cout << matrix.getNumOfRows() << "x" << matrix.getNumOfCols();
}

UnequalMatrix::UnequalMatrix()
{

}

void UnequalMatrix::errorMessage()
{
    /// Лучше бы они не печатали, а то вдруг не в консоль надо будет эти данные отправить
    std::cout << "Размеры матриц неравны!" << std::endl;
}

ImpossibleMultiplication::ImpossibleMultiplication()
{

}

void ImpossibleMultiplication::errorMessage()
{
    /// Лучше бы они не печатали, а то вдруг не в консоль надо будет эти данные отправить
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
