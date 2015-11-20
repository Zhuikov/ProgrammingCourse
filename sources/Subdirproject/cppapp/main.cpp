#include "matrix.h"
#include <iostream>

using namespace std;

int main()
{
    Matrix arr, arr2;
    Matrix.copy(&arr);
    Matrix.sum(&arr);
    Matrix.subtraction(&arr);
    Matrix.multiplication(&arr);
    Matrix.multiplication_on_number(8);

    return 0;
}
