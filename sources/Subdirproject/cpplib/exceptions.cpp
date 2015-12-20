#include <iostream>
#include "exceptions.h"
#include "matrix.h"


/// Все эти короткие методы можно было сделать inline, то есть определить прямо в классе (в файле h)

IndexException::IndexException(int i, int j): i(i), j(j)
{

}

/// Это какой-то бред...
/// ch - это поле, которое хранит подробности, какие параметры матриц не равны
UnequalMatrix::UnequalMatrix(Matrix a, Matrix b)
{
    if (a.getNumOfCols() != b.getNumOfCols()) ch = 'c';
    if (a.getNumOfRows() != b.getNumOfRows()) ch = 'r';
    if ((a.getNumOfCols() != b.getNumOfCols()) &&
            a.getNumOfRows() != b.getNumOfRows()) ch = 'b'; /// b - both;
}

/// Зачем эти пустые методы?
void UnequalMatrix::errorMessage()
{

}
void ImpossibleMultiplication::errorMessage()
{

}

NoSolution::NoSolution(const int num): num(num)
{
}
