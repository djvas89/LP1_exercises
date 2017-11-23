//
// Created by djvas on 23/11/2017.
//

#include "pr08_ex2017.h"

int main_pr08_ex2017(int argc, const char *argv[]) {
    struct point delta2 { 5, 5 };
    struct point p1 = {0, 0}, p2 = {0, 0};
    struct point *pp = &p1;
    int size = 0;
    int delta = M5;
    printf("Point = (%d,%d)\n", (*pp).x, (*pp).y);
    scanf("%d%d", &(*pp).x, &(*pp).y);
    pp = create_dyn_array_points(pp, &size, delta);
    print_dyn_array_points(pp, size);
    translation_dyn_array_points(pp, size, delta2);
    ARRAY_DYN_POINTS adp1 = {NULL, 0};
    return 0;
}

struct point *create_dyn_array_points(struct point *ppts, int *psize, int delta) {
    struct point *pnew = NULL;
    if (ppts == NULL) {
        *psize = delta;
        pnew = (struct point *) calloc(*psize, sizeof(struct point));
        return pnew;
    }
    *psize += delta;
    pnew = (struct point *) realloc(ppts, *psize);
    for (int i = (*psize - delta); i < *psize; ++i) {
        (*(pnew + i)).x = 0;
        (pnew + i)->y = 0;
    }
    return pnew;
}

void print_dyn_array_points(struct point *ppts, int size) {
    struct point *paux = ppts;
    while (paux < (ppts + size)) {
        printf("Point : (%d, %d)\n", (*paux).x, paux->y);
        paux++;
    }
}

void translation_dyn_array_points(struct point *ppts, int size, struct point delta) {
    struct point *paux = ppts;
    for (int i = 0; i < size; ++i) {
        (*paux).x += delta.x;
        paux-> += delta.y;
        paux++;
    }
}

void translation_dyn_array_points2(ARRAY_DYN_POINTS adp, struct point delta) {

    for (int i = 0; i < adp.sizepp; ++i) {
        (*(adp.pfirst)).x += delta.x;
        adp.pfirst->y += delta.y;
        adp.pfirst++;
    }
}
