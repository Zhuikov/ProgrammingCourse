#include <math.h>
#include "length_of_segment.h"

double length_of_segment(struct Point a, struct Point b){

    return sqrt(pow((a.x - b.x), 2) + pow((b.y - a.y), 2));
}
