#include <stdio.h>
#include "length_oh_segment_ui.h"
#include "length_of_segment.h"

void length_of_segment_ui(){

    puts("Вычисление длины отрезка по заданным координатам концов");
    puts("Введите кординаты первой точки:");

    struct Point A;
    scanf("%30000d%300000d", &A.x, &A.y);

    puts("Введите координаты второй точки:");
    struct Point B;
    scanf("%30000d%300000d", &B.x, &B.y);

    printf("%4.2f \n", length_of_segment(A, B));

}
