#include <math.h>
#include "length_of_segment.h"

double length_of_segment(int x1, int y1, int x2, int y2){

    double a, b;

    a = pow(x1 - x2, 2);
    b = pow(y1 - y2, 2);

    return (sqrt(a + b));
}
