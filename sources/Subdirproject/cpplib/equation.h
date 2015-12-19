#ifndef EQUATION_H
#define EQUATION_H


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

public:
    Equation(const int a, const int b, const int c);
    /// когда у вас паблик поле, кто-нибудь может и поменять эти корни извне,
    /// будет этот объект тогда хранить неправильные корни и количество решений
    /// лучше сделать поля private и методы для для доступа getX1, getX2 и так далее
    /// и можно, например, хранить в какой-то переменной, были найдены уже решения для этого уравнения,
    /// или еще не пытались. Если не пытались найти, то пусть при вызове гет-метода вызывается solveEquation
    /// тогда этот метод не обязательно явно вызывать
    ///
    /// В общем, с этими public полями вы нарушили инкапсуляцию   
    void solveEquation();
    void getSolutions(double array[5]);

};

#endif // EQUATION_H
