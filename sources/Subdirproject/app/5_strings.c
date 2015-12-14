#include <stdio.h>
#include <stdlib.h>
#include "stringsx.h"
#include "strings.h"

void results_of_competition(){

    FILE* f;
    char str[40];
    int results [3];
    short int i, max;
    struct Competitors{
        char name [40];
        int res;
    };
    struct Competitors participant, first, second, third;

    first.res = -1;
    second.res = -1;
    third.res = -1;
    f = fopen("competition.txt", "r");

    while (fgets(str, 40, f) != NULL) {
        i = find_name(str, &participant);
        find_results(i, str, results);

        max = -1;
        for (i = 0; i < 3; ++i){
            if (results[i] > max)  max = results[i];
        }
        participant.res = max;

        if (compare_structs(&participant, &first) == 1) {
            assigment_of_structs(&second, &third);
            assigment_of_structs(&first, &second);
            assigment_of_structs(&participant, &first);
        }
        else if (compare_structs(&participant, &second) == 1) {
                assigment_of_structs(&second, &third);
                assigment_of_structs(&participant, &second);
             }
             else if (compare_structs(&participant, &third) == 1) {
                      assigment_of_structs(&participant, &third);
                  }
    }

    fclose(f);

    if (first.res != -1) printf("I место: %s, результат: %d\n", first.name, first.res);
    if (second.res != -1) printf("II место: %s, результат: %d\n", second.name, second.res);
    if (third.res != -1) printf("III место: %s, результат: %d\n", third.name, third.res);

}
