#include <stdio.h>
#include "length_oh_segment_ui.h"
#include "length_of_segment.h"

void length_of_segment_ui(){

    puts("Вычисление длины отрезка по заданным координатам концов");
    puts("Введите кординаты первой точки:");

    int x1, y1;
    scanf("%d%d", &x1, &y1);

    puts("Введите координаты второй точки:");
    int x2, y2;
    scanf("%d%d", &x2, &y2);

    printf("%4.2f \n", length_of_segment(x1, y1, x2, y2));

}