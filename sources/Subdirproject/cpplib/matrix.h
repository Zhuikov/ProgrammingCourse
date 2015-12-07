#ifndef MATRIX_H
#define MATRIX_H

class Matrix
{
public:
    Matrix(int n = 5, int m = 5);
    Matrix(const Matrix&);
    int getNumOfCols();
    int getNumOfRows();
    void set(int, int, int);
    void print();
    int get(int, int) const;
    Matrix& operator=(const Matrix& arr);
    Matrix copy();
    Matrix sum(Matrix arr);
    Matrix subtraction(Matrix* arr);
//    Matrix multiplication(Matrix*);
//    Matrix multiplication_on_number(int number);

    ~Matrix();

private:
    int ** matrix;
    int n, m;
};

#endif // MATRIX_H
