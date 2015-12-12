#include <iostream>
#include "kilometrestomiles.h"
#include "exceptions.h"


KilometresToMiles::KilometresToMiles(double km): km(km),  mile(0.622), kilometer(1)
{
    if (km <= 0) throw new NotNatural;
    m = 1;
    for (int i = 0; i < 400; i++){  ///магические цифры - плохо, но тут только так; сложно предугадать,
                                 /// какой длины будет таблица для динамического выделения памяти
        miles[i] = 0;
        kilometers[i] = 0;
    }
}

void KilometresToMiles::makeTable()
{
    int i = 0;
    int j = 0;
    while (kilometer <= km){
        if (mile > m) {
            miles[i] = m;
            kilometers[i] = m * 1.609;
            m = m + 1;
            i++; j++;
        }
        miles[i] = mile;
        kilometers[i] = kilometer;
        i++; j++;
        kilometer = kilometer + 1;
        mile = kilometer / 1.609;
    }
    lengthTable = i;
}

void KilometresToMiles::getRow(int number, double arr[2])
{
    if (number > lengthTable) throw new NoRow;
    arr[0] = miles[number];
    arr[1] = kilometers[number];
}

void KilometresToMiles::showTable()
{
    std::cout << "Miles     " << "Kilometers" << std::endl;
    for (int i = 0; i < lengthTable; i ++)
       std::cout << miles[i] << " " << kilometers[i] << std::endl;
}
