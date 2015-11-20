#include <iostream>
#include "matrix.h"

Matrix::Matrix()
{
    cout << "Constructor" << endl;
}
Matrix Matrix::copy(Matrix*)
{
    cout << "Copy" << endl;
}
Matrix Matrix::sum(Matrix*)
{
    cout << "Sum"  << endl;
}
Matrix Matrix::subtraction(Matrix*)
{
    cout << "Subrtaction" << endl;
}
Matrix Matrix::multiplication(Matrix*)
{
    cout << "Multiplication" << endl;
}
Matrix Matrix::multiplication_on_number(int number)
{
    cout << "Multiplication on number" << endl;
}
Matrix::~Matrix()
{
    cout << "Destructor" << endl;
}
