#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "length_oh_segment_ui.h"
#include "equation_ui.h"
#include "km_to_miles_ui.h"
#include "matrix.h"
#include "strings.h"

int main(int argc, char* argv[])
{

     printf("\n argc = %d \n", argc);

     printf("value is %s\n", argv[0]);
     puts("1. Нахождение расстояния между двумя точками");
     puts("2. Решение биквадратного уравнения");
     puts("3. Таблица пересчета миль в километры");
     puts("4. Замена элемента матрицы А[i, j] на сумму");
     puts(" элементов подматрицы A'[i, j]");
     puts("5. Определение победителя в соревнованиях.");
     printf("> ");

     int choice;
     scanf("%d", &choice);
     switch(choice){
        case 1: {
            length_of_segment_ui();
            break;
        }
        case 2: {
            solution_of_equation_ui();
            break;
        }
        case 3: {
            km_to_miles_ui();
            break;
        }
        case 4: {
            change_matrix();
            break;            
        } 
        case 5: {
            results_of_competition();
        }
     }

     return 0;
}
