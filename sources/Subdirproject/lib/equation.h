#ifndef EQUATION_H
#define EQUATION_H
#ifdef __cplusplus
extern "C" {
#endif

struct Solutions_of_equation {
    double solutions [4];
    int existence[4];
};
int solve_the_equation(int, int, int, struct Solutions_of_equation*);
void calculating_of_solutions(int, int, int, struct Solutions_of_equation*);
int sign_discriminant(int, int, int);
void analysis_of_solutions(struct Solutions_of_equation *);

#ifdef __cplusplus
}
#endif
#endif // EQUATION_H

