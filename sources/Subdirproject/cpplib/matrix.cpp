#include <iostream>
#include <iomanip>
#include "exceptions.h"
#include "matrix.h"

Matrix::Matrix(int a, int b): n(a), m(b)
{
    matrix = new int*[n];
    for (int i = 0; i < n; ++i){
        matrix[i] = new int[m];
        for (int j = 0; j < m; j++)
            matrix[i][j] = 0;
    }

}

Matrix::Matrix(const Matrix& ptr): n(ptr.n), m(ptr.m)
{
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
    if (n != arr.getNumOfRows() || m != arr.getNumOfCols())
        throw UnequalMatrix(this->getNumOfRows(), this->getNumOfCols(),
                            arr.getNumOfRows(), arr.getNumOfCols());

    if (this != &arr){
        int i, j;

        for (i = 0; i < this->getNumOfRows(); i++)
            delete[] this->matrix[i];
        delete[] this->matrix;

        this->matrix = new int*[n];
        for (i = 0; i < n; i++)
            matrix[i] = new int[m];

        for (i = 0; i < arr.getNumOfRows(); i++)
            for (j = 0; j < arr.getNumOfCols(); j++)
                this->set(i, j, arr.get(i, j));
    }
    return *this;
}

Matrix Matrix::operator+(const Matrix& a)
{

    if (n != a.getNumOfRows() || m != a.getNumOfCols())
        throw UnequalMatrix(this->getNumOfRows(), this->getNumOfCols(),
                            a.getNumOfRows(), a.getNumOfCols());

    Matrix result(a.getNumOfRows(), a.getNumOfCols());
    for (int i = 0; i < result.getNumOfRows(); i++)
        for (int j = 0; j < result.getNumOfCols(); j++)
            result.set(i, j, a.get(i, j) + this->get(i, j));
    return result;
}

Matrix Matrix::operator-(const Matrix& a)
{
    if (n != a.getNumOfRows() || m != a.getNumOfCols())
        throw UnequalMatrix(this->getNumOfRows(), this->getNumOfCols(),
                            a.getNumOfRows(), a.getNumOfCols());

    Matrix result(a.getNumOfRows(), a.getNumOfCols());
    for (int i = 0; i < result.getNumOfRows(); i++)
        for (int j = 0; j < result.getNumOfCols(); j ++)
            result.set(i, j, this->get(i, j) - a.get(i, j));
    return result;
}

Matrix Matrix::operator*(const int number)
{
    Matrix result(n, m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            result.set(i, j, matrix[i][j] * number);
    return result;
}

Matrix Matrix::operator*(const Matrix& a)
{
    if (m != a.getNumOfRows())
        throw ImpossibleMultiplication(this->getNumOfCols(), a.getNumOfRows());

    Matrix result(this->getNumOfRows(), a.getNumOfCols());
    int element = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < a.getNumOfCols(); j++){
            for (int u = 0; u < m; u++)
                element = element + (this->get(i, u) * a.get(u, j));
            result.set(i, j, element);
            element = 0;
        }
    return result;

}

void Matrix::set(int i, int j, int val)
{
    if (i < 0 || i > n || j < 0 || j > m) throw IndexException(i, j);
    matrix[i][j] = val;
}

int Matrix::get(int i, int j) const
{
    if (i < 0 || i > n || j < 0 || j > m) throw IndexException(i, j);
    return matrix[i][j];
}

Matrix::~Matrix()
{
    for (int i = 0; i < n; ++i){
        delete[] matrix[i];
    }
    delete[]matrix;

}
