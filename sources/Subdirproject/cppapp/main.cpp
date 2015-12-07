#include "matrix.h"
#include <iostream>

using namespace std;

int main()
{
    int i, j, n, m;
    cout << "Число строк: ";
    cin >> n;
    cout << "Число столбцов: ";
    cin >> m;
    Matrix arr(n, m), arr2;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            arr.set(i, j, i * j);
    arr.print();
    arr2 = arr;
    cout << endl;
    arr2.print();
    return 0;
}
