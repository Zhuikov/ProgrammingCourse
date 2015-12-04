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
    Matrix arr(n, m);
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            arr.set(i, j, i * j);
    arr.print();
<<<<<<< HEAD
    arr2 = arr.sum(arr);
=======
    Matrix arr2 = arr.copy();
>>>>>>> e20c5d1fe5350e071d21b769ed393325d8af6063
    arr2.print();
    return 0;
}
