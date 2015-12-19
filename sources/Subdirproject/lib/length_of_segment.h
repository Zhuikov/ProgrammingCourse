#ifndef LENGTH_OF_SEGMENT_H
#define LENGTH_OF_SEGMENT_H
#ifdef __cplusplus
extern "C" {
#endif

struct Point {
    int x;
    int y;
};

double length_of_segment(struct Point a, struct Point b);

#ifdef __cplusplus
}
#endif
#endif // LENGTH_OF_SEGMENT_H

