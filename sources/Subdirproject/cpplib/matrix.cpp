#include <iostream>
#include <iomanip>
#include "matrix.h"

using namespace std;

Matrix::Matrix(int a, int b): n(a), m(b)
{
    matrix = new int*[n];
    for (int i = 0; i < n; ++i){
        matrix[i] = new int[m];
        for (int j = 0; j < m; j++)
            matrix[i][j] = 0;
    }

    cout << "Constructor" << endl;
}

Matrix::Matrix(const Matrix& ptr): n(ptr.n), m(ptr.m)
{
    cout << "Copy constructor" << endl;
    matrix = new int*[n];
    for (int i = 0; i < n; i++){
        matrix[i] = new int[m];
        for (int j = 0; j < m; j++)
            matrix[i][j] = ptr.matrix[i][j];
    }
}

int Matrix::getNumOfCols() const
{
    return m;
}

int Matrix::getNumOfRows() const
{
    return n;
}

Matrix&Matrix::operator=(const Matrix &arr)
{
    cout << "assignment operator" << endl;
    if (this != &arr){
        cout<< "lets copy"<< endl;

        for (int i = 0; i < this->getNumOfRows(); i++)
            delete matrix[i];
        delete matrix;

        matrix = new int*[n];
        for (int i = 0; i < n; i++)
            matrix[i] = new int[m];

        for (int i = 0; i < arr.getNumOfRows(); i++)
            for (int j = 0; j < arr.getNumOfCols(); j++)
                this->set(i, j, arr.get(i, j));
    }
    return *this;
}

Matrix Matrix::operator+(Matrix a)
{
    Matrix result(a.getNumOfRows(), a.getNumOfCols());
    for (int i = 0; i < result.getNumOfRows(); i++)
        for (int j = 0; j < result.getNumOfCols(); j++)
            result.set(i, j, a.get(i, j) + this->get(i, j));
    return result;
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
int Matrix::get(int i, int j) const
{
    if ((i < n) && (j < m)) return matrix[i][j];
    else cout << "Error!" << endl;
    return 0;
}


Matrix Matrix::sum(Matrix arr)
{
    Matrix array(n, m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            array.matrix[i][j] = matrix[i][j] + arr.matrix[i][j];
    cout << "Sum"  << endl;
    return array;
}
Matrix Matrix::subtraction(Matrix* arr)
{
    Matrix array(n, m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            array.set(i, j, matrix[i][j] - arr->get(i, j));
    cout << "Subtraction" << endl;
    return array;
}
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
