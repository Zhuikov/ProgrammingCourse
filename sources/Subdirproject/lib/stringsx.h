#ifndef STRINGSX_H
#define STRINGSX_H
#ifdef __cplusplus
extern "C" {
#endif

struct Competitors {
    char name [40];
    int res;
};
int compare_structs(struct Competitors*, struct Competitors*);
int parse_name(char [40], struct Competitors*);
void parse_results(int, char [40], int [3]);
void assigment_of_structs(struct Competitors *,
                          struct Competitors *);
void place_participants(struct Competitors, struct Competitors, struct Competitors, struct Competitors);

#ifdef __cplusplus
}
#endif
#endif // STRINGSX_H

