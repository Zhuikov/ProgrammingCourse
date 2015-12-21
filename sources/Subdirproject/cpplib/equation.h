#ifndef EQUATION_H
#define EQUATION_H

/// Где const ключевые слова?? Можно же их поставить?
class Equation
{
    const int a;
    const int b;
    const int c;
    double discriminant;
    short int existence[4];
    short int numOfSolutions;
    double solutions[4];
    void calculateSolutions();
    void analysisSolutions();
    double result[4];
    bool solved;
    void solveEquation();

public:
    Equation(const int a, const int b, const int c);
    int getNumOfSolutions();
    double getX1();
    double getX2();
    double getX3();
    double getX4();

};

#endif // EQUATION_H
