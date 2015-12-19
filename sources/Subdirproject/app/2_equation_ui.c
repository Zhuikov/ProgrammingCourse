#include <stdio.h>
#include "equation.h"
#include "equation_ui.h"

void solution_of_equation_ui(){

    struct Solutions_of_equation answer;

    puts("Решение биквадратного уравнения");
    puts("Введите коэффициенты и свободный член");

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    puts("Ответ:");

    if (solve_the_equation(a, b, c, &answer) == 0) {
        puts("Не имеет решений");
    }
    else {

        int i;
        for (i = 0; i < 4; ++i){
            if (answer.existence[i] == 1){
                printf("%4.2f\n", answer.solutions[i]);
            }
        }
    }

}
