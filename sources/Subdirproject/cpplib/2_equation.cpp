#include "exceptions.h"
#include "equation.h"
#include <math.h>

Equation::Equation(int a, int b, int c): a(a), b(b), c(c), numOfsolutions(0)
{
    for(int i =0; i < 4; i++){
        solutions[i] = 0;
        existence[i] = 0;
        result[i] = 0;
    }
    if (a == 0) throw new NotBiquadratic;
    discriminant = b * b - 4 * a * c;
}

void Equation::solveEquation()
{
    if (discriminant >= 0) calculateSolutions();
}

void Equation::calculateSolutions()
{
    double x1_2, x2_2;

    x1_2 = (-b + sqrt(discriminant)) / (2 * a);
    x2_2 = (-b - sqrt(discriminant)) / (2 * a);

    if (x1_2 >= 0) {
        solutions[0] = sqrt(x1_2);
        solutions[1] = -sqrt(x1_2);
        existence[0] = 1;
        existence[1] = 1;
    }
    if (x2_2 >= 0) {
        solutions[2] = sqrt(x2_2);
        solutions[3] = -sqrt(x2_2);
        existence[2] = 1;
        existence[3] = 1;
    }

    analysisSolutions();
}

void Equation::analysisSolutions()
{
    for(int i = 0; i < 4 ; i++)
        if (existence[i] == 1)
            for (int j = i + 1; j < 4 ; j++)
                if ((existence[j] == 1) && (fabs(solutions[i] - solutions[j]) <= 10e-2))
                    existence[j] = 0;

    for (int i = 0, j = 0; i < 4; i++)
        if (existence[i] == 1){
            result[j] = solutions[i];
            j++;
            numOfsolutions++;
        }
}


