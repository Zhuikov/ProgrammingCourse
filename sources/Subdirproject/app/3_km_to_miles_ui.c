#include <stdio.h>
#include <stdlib.h>
#include"km_to_miles_ui.h"
#include"km_to_miles.h"

void km_to_miles_ui(){

    puts("Таблица пересчета миль в километры");
    puts("Введите число километров");

    float km;
    scanf("%f", &km);

    if (km <= 0){
         puts("Число километров должно быть натуральным!");
         exit(0);
        }
         else km_to_miles(km);

}
