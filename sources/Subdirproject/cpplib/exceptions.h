#ifndef INDEXEXCEPTION_H
#define INDEXEXCEPTION_H
#include "matrix.h"

class IndexException
{
    int i;
    int j;
public:
    IndexException(int i, int j);
};

class UnequalMatrix
{
    /// можно ввести поля для хранения подробностей, какие именно паметры в них не равны, и как сделать чтобы были равны
    char ch;
public:
    UnequalMatrix(Matrix a, Matrix b);
    void errorMessage();
};

class ImpossibleMultiplication
{
public:
    void errorMessage();
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
    NoSolution(const int num);
};

#endif // INDEXEXCEPTION_H
