#include <iostream>
#include "indexexception.h"
#include "matrix.h"

IndexException::IndexException(int i, int j): i(i), j(j)
{

}

void IndexException::printBoundsMatrix(Matrix matrix)
{
    std::cout << matrix.getNumOfRows() << "x" << matrix.getNumOfCols();
}
