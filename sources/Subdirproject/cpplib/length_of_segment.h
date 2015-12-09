#ifndef LENGTH_OF_SEGMENT_H
#define LENGTH_OF_SEGMENT_H

class Point
{
    int x;
    int y;

public:
    Point(int a = 0, int b = 0);
    Point(const Point&);
    double length_of_segment(Point);
    ~Point();
};

#endif // LENGTH_OF_SEGMENT_H



