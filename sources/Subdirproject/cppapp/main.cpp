#include "matrix.h"
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    int v = 5;
    XoGame xoGame;
    xoGame.helloworld();
    xoGame.setMyVar(v);
    cout << xoGame.getMyVar() << endl;
    return 0;
}

