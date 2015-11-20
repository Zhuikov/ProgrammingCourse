#ifndef MATRIX_H
#define MATRIX_H

class Matrix
{
public:
    Matrix(int n, int m);
    void set(int, int, int);
    int get(int, int);
    Matrix copy();
    Matrix sum(Matrix*);
    Matrix subtraction(Matrix*);
    Matrix multiplication(Matrix*);
    Matrix multiplication_on_number(int number);

    ~Matrix();

private:
    int ** matrix;
    int n, m;
};

#endif // MATRIX_H
