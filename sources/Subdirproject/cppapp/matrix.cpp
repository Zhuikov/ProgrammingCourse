#include <iostream>
#include <iomanip>
#include "matrix.h"

using namespace std;

Matrix::Matrix(int a, int b)
{
    n = a;
    m = b;

    matrix = new int*[n];
    for (int i = 0; i < n; ++i){
        matrix[i] = new int[m];
    }
   cout << "Constructor" << endl;
}
void Matrix::print()
{
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j)
            cout << setw(3) << matrix[i][j] << " ";
        cout << endl;
    }
}
void Matrix::set(int i, int j, int val)
{
    if ((i < n) && (j < m)) matrix[i][j] = val;
        else cout << "Error!" << endl;
}
int Matrix::get(int i, int j)
{
    if ((i < n) && (j < m)) return matrix[i][j];
        else cout << "Error!" << endl;
    return 0;
}
Matrix Matrix::copy()
{
    Matrix array(n, m);
    for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                array.set(i, j, matrix[i][j]);
    return array;
}
//Matrix Matrix::sum(Matrix* arr)
//{
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            matrix[i][j] = matrix[i][j] + arr->get(i, j);
//    cout << "Sum"  << endl;
//    return Matrix(n, m);
//}
//Matrix Matrix::subtraction(Matrix*)
//{
//    cout << "Subtraction" << endl;
//    return Matrix(n, m);
//}
//Matrix Matrix::multiplication(Matrix*)
//{
//    cout << "Multiplication" << endl;
//    return Matrix(n, m);
//}
//Matrix Matrix::multiplication_on_number(int number)
//{
//    for (int i = 0; i < n; i++)
//        for (int j = 0; j < m; j++)
//            matrix[i][j] = matrix[i][j] * number;
//    cout << "Multiplication on number" << endl;
//    return Matrix(n, m);
//}
Matrix::~Matrix()
{
    for (int i = 0; i < n; ++i){
        delete[] matrix[i];
    }
    delete[]matrix;

    cout << "Destructor" << endl;
}
