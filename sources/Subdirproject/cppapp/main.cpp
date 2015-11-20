#include "matrix.h"
#include <iostream>

using namespace std;

int main()
{
//    int i, j, n, m;
//    cout << "Число строк: ";
//    cin >> n;
//    cout << "Число столбцов: ";
//    cin >> m;
    Matrix arr(9, 9);
//    for (i = 0; i < n; ++i)
//        for (j = 0; j < m; ++j)
//            arr.set(i, j, i * j);
//    for (i = 0; i < n; ++i) {
//        for (j = 0; j < m; ++j)
//            cout << arr.get(i, j);
//        cout << endl;
//    }
    arr.copy();
    arr.sum(&arr);
    arr.subtraction(&arr);
    arr.multiplication(&arr);
    arr.multiplication_on_number(8);

    return 0;
}
