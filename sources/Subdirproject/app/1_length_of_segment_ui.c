#include <stdio.h>
#include "length_oh_segment_ui.h"
#include "length_of_segment.h"

void length_of_segment_ui(){

    puts("Вычисление длины отрезка по заданным координатам концов");
    puts("Введите кординаты первой точки:");

    struct Point A;
    scanf("%d%d", &A.x, &A.y);

    puts("Введите координаты второй точки:");
    struct Point B;
    scanf("%d%d", &B.x, &B.y);

    /// не помню, писала ли я об этом раньше, сейчас не буду искать в истории,
    /// но было бы хорошо сделать структуру для координат, а не передавать четыре штуки по отдельности
    printf("%4.2f \n", length_of_segment(A, B));

}
