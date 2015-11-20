#include <iostream>
#include "matrix.h"

using namespace std;

Matrix::Matrix(int n, int m)
{
    matrix = new int*[m];
    for (int i = 0; i < n; ++i){
        matrix[i] = new int[n];
    }

    cout << "Constructor" << endl;
}
void Matrix::set(int i, int j, int val)
{
    matrix[i][j] = val;
}
int Matrix::get(int i, int j)
{
    return matrix[i][j];
}
Matrix Matrix::copy()
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
    for (int i = 0; i < m; ++i){
        delete[]matrix[i];
    }
    delete[]matrix;
    cout << "Destructor" << endl;
}
