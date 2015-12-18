#ifndef STRINGS_H
#define STRINGS_H

struct Competitors {
    char name [40];
    int res;
};
int compare_structs(struct Competitors*, struct Competitors*);
int find_name(char [40], struct Competitors*);
void find_results(int, char [40], int [3]);
void assigment_of_structs(struct Competitors *,
                          struct Competitors *);
void place_participants(struct Competitors, struct Competitors, struct Competitors, struct Competitors);


#endif // STRINGS_H

