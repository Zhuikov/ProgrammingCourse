#ifndef MATRIX_H
#define MATRIX_H

class Matrix
{
public:
    Matrix(int n, int m);
    void set(int, int, int);
    void print();
    int get(int, int);
    Matrix copy();
//    Matrix sum(Matrix* arr);
//    Matrix subtraction(Matrix*);
//    Matrix multiplication(Matrix*);
//    Matrix multiplication_on_number(int number);

    ~Matrix();

private:
    int ** matrix;
    int n, m;
};

//class Matrix
//{
//public:
//    Matrix(int n, int m);
//    void set(int, int, int);
//    void print();
//    int get(int, int);
//    void copy(Matrix*, Matrix*);
//    void sum(Matrix*, Matrix*);
//    void subtraction(Matrix*, Matrix*);
//    void multiplication(Matrix*, Matrix*);
//    void multiplication_on_number(int number);
//    ~Matrix();

//private:
//    int ** matrix;
//    int n, m;

//};

#endif // MATRIX_H
