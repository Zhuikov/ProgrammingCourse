#include <stdio.h>
#include <stdlib.h>
#include"km_to_miles_ui.h"
#include"km_to_miles.h"

void km_to_miles_ui(){

    puts("Таблица пересчета миль в километры");
    puts("Введите число километров");

    double km;
    scanf("%1000lf", &km);

    if (km > 0) km_to_miles(km);
        else {
            puts("Число километров должно быть натуральным!");
            exit(0);
    }

}
