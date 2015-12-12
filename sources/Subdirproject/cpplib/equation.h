#ifndef EQUATION_H
#define EQUATION_H


class Equation
{
    int a;
    int b;
    int c;
    double discriminant;
    short int existence[4];
    double solutions[4];
    void calculateSolutions();
    void analysisSolutions();

public:
    Equation(int a, int b, int c);
    double result[4];
    int numOfsolutions;
    void solveEquation();

};

#endif // EQUATION_H
