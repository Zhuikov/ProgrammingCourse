#ifndef MATRIX_H
#define MATRIX_H

class Matrix
{
public:
    Matrix(int n = 5, int m = 5);
    Matrix(const Matrix&);
    int getNumOfCols() const;
    int getNumOfRows() const;
    void set(int, int, int);
    int get(int, int) const;
    Matrix& operator=(const Matrix& arr);
    Matrix operator+(const Matrix a);
    Matrix operator-(const Matrix a);

    ~Matrix();

private:
    int ** matrix;
    const int n, m;
};

#endif // MATRIX_H
