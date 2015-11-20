#ifndef MATRIX_H
#define MATRIX_H

class Matrix
{
public:
    Matrix();

    Matrix copy(Matrix*);
    Matrix sum(Matrix*);
    Matrix subtraction(Matrix*);
    Matrix multiplication(Matrix*);
    Matrix multiplication_on_number(int number);

    ~Matrix();

private:
    int ** matrix;
};

#endif // MATRIX_H
