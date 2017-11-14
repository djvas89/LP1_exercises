//
// Created by djvas on 08/11/2017.
//

#include <malloc.h>
#include <stdio.h>
#include <math.h>
#include <mem.h>
#include "pr06_ex2017.h"

int M200 = 200;

int main_pr06_ex2017(int argc, const char *argv[]) {
    int *pi = NULL;
    int size = 10;
    pi = using_malloc_create_dynarray_ints(size);
    init_dynarray_ints_pow2(pi, size);
    print_dynarray_ints(pi, size);
    *pi = 18;

    scanf("%d", pi);
    return 0;
}

void change_pointer_to_array(int **ppi, int *p) {
    *ppi = p;
}

float **create_matrix_floats(int n, int c) {
    float **ppf = NULL;
    ppf = (float *) malloc(sizeof(float *) * n);
    for (int i = 0; i < n; ++i) {
        *(ppf + i) = (float *) malloc(sizeof(float) * c);
    }
    return ppf;
}

void create_or_resize_dynarray_floats(float **ppf, int *psize) {
    if (**ppf == NULL) {
        *psize = 5;
        *ppf = (float *) malloc(sizeof(float) * (*psize));
        float *paux = *ppf;
        for (int i = 0; i < *psize; ++i) {
            *(paux + i) = 0.0;
        }
        return;
    }
}

int *using_malloc_create_dynarray_ints(int n) {
    int *p = NULL;
    p = (int *) malloc(sizeof(int));
    for (int i = 0; i < n; ++i) {
        *(p + i) = 0;
    }
    return p;
}

int *init_dynarray_ints_pow2(int *p, int n) {
    for (int i = 0; i < n; ++i) {
        *(p + i) = (int) pow(2, i);
    }
    return p;
}

void print_dynarray_ints(int *p, int n) {
    int *paux = p;

    while (paux < (p + n)) {

    }
}

int *create_or_resize_dynarray_ints(int *p, int size, int newSize) {
    int *pnew = NULL;
    if (*p == NULL) {
        p = using_malloc_create_dynarray_ints(newSize);
        return p;
    }
    pnew = using_malloc_create_dynarray_ints(newSize);

    for (int i = 0; i < size; ++i) {
        *(pnew + i) = *(p + i);
    }
    free(p);
    return pnew;
}

char **read_array_dyn_strings(char *astr[], int size) {
    char saux[M200] = "";
    printf("Insira %d nomes : \n", size);
    for (int i = 0; i < size; ++i) {
        fgets(saux, M200, stdin);
        int len = strlen(saux);
        saux[len - 1] = saux[len];
        astr[i] = malloc(strlen(saux) + 1);
        strcpy(astr[i], saux);
    }
    return astr;
}

void print_array_dyn_strings(char *astr[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("astr[%d]=%d\n", i, astr[i]);
    }
}

