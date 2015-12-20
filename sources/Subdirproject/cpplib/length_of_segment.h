#ifndef LENGTH_OF_SEGMENT_H
#define LENGTH_OF_SEGMENT_H

class Point
{
    const int x;
    const int y;

public:
    /// Где const ключевые слова?? Можно же их поставить?
    Point(const int a = 0, const int b = 0);
    Point(const Point&);
    double length_of_segment(const Point&);
};

#endif // LENGTH_OF_SEGMENT_H



