#ifndef INDEXEXCEPTION_H
#define INDEXEXCEPTION_H
#include "matrix.h"

class IndexException
{
    int i;
    int j;
public:
    IndexException(int i, int j);
    void printBoundsMatrix(Matrix matrix);
};

class UnequalMatrix
{
    /// можно ввести поля для хранения подробностей, какие именно паметры в них не равны, и как сделать чтобы были равны
public:
    UnequalMatrix();
    void errorMessage();
};

class ImpossibleMultiplication
{

public:
    ImpossibleMultiplication();
    void errorMessage();
};

class NotBiquadratic
{
public:
    NotBiquadratic();
};

class NoRow
{
public:
    NoRow();
};

class NotNatural
{
public:
    NotNatural();
};

#endif // INDEXEXCEPTION_H
