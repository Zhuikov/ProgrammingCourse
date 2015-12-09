#include <math.h>
#include "length_of_segment.h"

Point::Point(int a, int b)
{
    x = a;
    y = b;

}

Point::Point(const Point & ptr)
{
    x = ptr.x;
    y = ptr.y;

}

double Point::length_of_segment(Point obj)
{
    double length = 0;
    length = sqrt(pow(obj.x - x, 2) + pow(obj.y - y, 2));
    return length;
}

Point::~Point()
{

}

