#ifndef INDEXEXCEPTION_H
#define INDEXEXCEPTION_H
#include "matrix.h"

class IndexException
{
    const int i;
    const int j;
public:
    IndexException(int i, int j): i(i), j(j){}

    int getNumOfRow() { return i; }
    int getNumOfCol() { return j; }
};

class UnequalMatrix
{
    const int row1;
    const int row2;
    const int col1;
    const int col2;
public:
    UnequalMatrix(int r1, int c1, int r2, int c2): row1(r1), row2(r2), col1(c1), col2(c2){}
    int getRow1() { return row1; }
    int getRow2() { return row2; }
    int getCols1() { return col1; }
    int getCols2() { return col2; }
};

class ImpossibleMultiplication
{
    const int col1;
    const int row2;
public:
    ImpossibleMultiplication(int c1, int r2): col1(c1), row2(r2){}
};

class NotBiquadratic
{
};

class NoRow
{
};

class NotNatural
{
};

class NoSolution
{
    const int num;
public:
    NoSolution(const int num): num(num){}
};

#endif // INDEXEXCEPTION_H
