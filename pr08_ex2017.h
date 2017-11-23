//
// Created by djvas on 23/11/2017.
//

#ifndef LP1_PR08_EX2017_H
#define LP1_PR08_EX2017_H

#include <stdio.h>
#include <stdlib.h>

#define M5 5

struct point {
    int x;
    int y;
};

typedef struct array_dyn_points {
    struct point *pfirst;
    int sizepp;
} ARRAY_DYN_POINTS;

int main_pr08_ex2017(int argc, const char *argv[]);

struct point *create_dyn_array_points(struct point *ppts, int *psize, int delta);

void print_dyn_array_points(struct point *ppts, int size);

void translation_dyn_array_points(struct point *ppts, int size, struct point delta);


#endif //LP1_PR08_EX2017_H
