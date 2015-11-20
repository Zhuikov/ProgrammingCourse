#ifndef MATRIX_H
#define MATRIX_H


class XoGame
{
public:

    XoGame(); // конструктор

    void helloworld();
    void setMyVar(int var);
    int getMyVar();
    ~XoGame(); // очищает память, деструктор

    int myVar;

};

//class Matrix
//{
//public:
//    Matrix();

//    void matrix_copy(int mat1[][], int res[][]);
//    void matrix_sum(int mat1[][], int mat2[][], int res[][]);
//    void matrix_subtraction(int mat1[][], int mat2[][], int res[][]);
//    void matrix_multiplication(int mat1[][], int mat2[][], int res[][]);
//    void matrix_multiplication_on_number(int mat[][], int n);

//    int mat1[][], mat2[][];
//    ~Matrix();
//};

#endif // MATRIX_H
