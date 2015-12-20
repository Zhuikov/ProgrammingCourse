#include <iostream>
#include "exceptions.h"
#include "matrix.h"


/// Все эти короткие методы можно было сделать inline, то есть определить прямо в классе (в файле h)

IndexException::IndexException(int i, int j): i(i), j(j)
{

}

/// Это какой-то бред...
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

ImpossibleMultiplication::ImpossibleMultiplication()
{

}

void ImpossibleMultiplication::errorMessage()
{

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
