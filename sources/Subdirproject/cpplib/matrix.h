#ifndef MATRIX_H
#define MATRIX_H

class Matrix
{
public:
    Matrix(int n = 5, int m = 5);
    Matrix(const Matrix&);
    /// Вот тут хоть есть const, нет бы везде так!
    int getNumOfCols() const;
    int getNumOfRows() const;
    void set(const int,const int, const int);
    int get(const int, const int) const;
    Matrix& operator=(const Matrix& arr);
    Matrix operator+(const Matrix& a);
    Matrix operator-(const Matrix& a);
    Matrix operator*(const int);
    Matrix operator*(const Matrix& a);

    ~Matrix();

private:
    int ** matrix;
    const int n, m;
};

#endif // MATRIX_H
