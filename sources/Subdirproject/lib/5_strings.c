#include <string.h>
#include <stdlib.h>
#include "stringsx.h"
#include "strings.h"

int parse_name(char name [40], struct Competitors* ptr){

    int k, i;
    k = 0;
    i = 0;

    while (k < 2) {
        if (name[i] == ' ') k = k + 1;
        ptr->name[i] = name[i];
        i = i + 1;
    }
    ptr->name[i] = '\0';
    return i;
}

void parse_results(int i, char name[40], int results[3]){

    short int j, u;
    char res [6];

    for (j = 0; j < 3; ++j) {
        u = 0;
        while ((name[i] != ' ') && (name[i] != '\n')) {
            res[u] = name[i];
            i = i + 1;
            u = u + 1;
        }
        res[u] = '\0';
        i = i + 1;
        results[j] = atoi(res);
    }

}

int compare_structs(struct Competitors* k1,
                       struct Competitors* k2){

    if (k1->res > k2->res) return 1;
    return 0;
}

void assigment_of_structs(struct Competitors* k1,
                          struct Competitors* k2){

    strcpy(k2->name, "");
    strcpy(k2->name, k1->name);
    k2->res = k1->res;

}

void place_participants(struct Competitors first, struct Competitors second, struct Competitors third, struct Competitors participant)
{
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
