//
// Created by djvas on 08/11/2017.
//

#ifndef LP1_PR06_EX2017_H
#define LP1_PR06_EX2017_H


int main_pr06_ex2017(int argc, const char *argv[]);

float **create_matrix_floats(int n, int c);

void create_or_resize_dynarray_floats(float **ppf, int *psize);

int *using_malloc_create_dynarray_ints(int n);

int *init_dynarray_ints_pow2(int *pi, int size);

void print_dynarray_ints(int *p, int n);

int *create_or_resize_dynarray_ints(int *p, int size, int newSize);

char **read_array_dyn_strings(char *array[], int size);

void print_array_dyn_strings(char *astr[], int size);

#endif //LP1_PR06_EX2017_H
