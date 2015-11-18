#include <stdio.h>
#include <math.h>
#include "equation.h"

int sign_discriminant(int a, int b, int c){

    int d;
    d = b * b - 4 * a * c;

    if (d < 0) return 0;
    return 1;

}

int solve_the_equation(int a, int b, int c, struct Solutions_of_equation* f){

    if (a != 0) {
        switch (sign_discriminant(a, b, c)){
            case 0: return 0;
            case 1: calculating_of_solutions(a, b, b * b - 4 * a * c, f);
        }
      }
    return 1;
}

void calculating_of_solutions(int a, int b, int D,
                              struct Solutions_of_equation* f){

    int i;
    for(i = 0; i < 4; ++i){
        f->existence[i] = 0;
    }

    double x1_2, x2_2;

    x1_2 = (-b + sqrt(D)) / (2 * a);
    x2_2 = (-b - sqrt(D)) / (2 * a);

    if (x1_2 >= 0) {
        f->solutions[0] = sqrt(x1_2);
        f->solutions[1] = -sqrt(x1_2);
        f->existence[0] = 1;
        f->existence[1] = 1;
    }
    if (x2_2 >= 0) {
        f->solutions[2] = sqrt(x2_2);
        f->solutions[3] = -sqrt(x2_2);
        f->existence[2] = 1;
        f->existence[3] = 1;
    }

    analysis_of_solutions(f);
}

 void analysis_of_solutions(struct Solutions_of_equation *f){

    int i, j;

    for (i = 0; i < 4; ++i){
        if (f->existence[i] == 1){
            for (j = 1 + i; j < 4; ++j){
                if ((f->existence[j] == 1) && (f->solutions[i] == f->solutions[j])) {
                      f->existence[j] = 0;
                }
            }
        }

    }

 }
