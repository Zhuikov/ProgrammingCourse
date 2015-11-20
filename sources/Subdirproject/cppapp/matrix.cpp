#include <iostream>
#include "matrix.h"

XoGame::XoGame() // код для конструктора
{
    std::cout << "Hello constructor" << std::endl;
}

void XoGame::helloworld(){
    std::cout << "Hello method" << std::endl;
}

void XoGame::setMyVar(int var){
    myVar = var;
}

int XoGame::getMyVar(){
    return myVar;
}

XoGame::~XoGame(){
    std::cout << "hello destructor" << std::endl;
}

//Matrix::Matrix(){}

//Matrix::matrix_copy(int mat1[][], int res[][])
//{

//}
