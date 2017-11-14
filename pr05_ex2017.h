//
// Created by djvas on 25/10/2017.
//

#ifndef LP1_PR05_EX2017_H
#define LP1_PR05_EX2017_H

#include <stdio.h>
#include <stdlib.h>

int main_pr05_ex2017(int argc, const char *argv[]);

void double_var(double a);
void double_var_ptr(double *pa);
void double_array_ptr(double *pd, int size);
void print_double_array_ptr(double *pd, int size);


void print_non_repeated_str(char *v[], int size);
void print_args(char *v[], int size);
void swap(int a, int b);
void swapPtr(int *x, int *y);
void printArray(int *arr, int size);
void swapArray(int *arr, int size);
void roots(double a, double b, double c, double *r1, double *r2);
double *swap_double_array_ptr(double *pd, int pos1, int pos2);
void print_double_array_ptr2(double *pd, int pos1, int pos2);
int strlen(char *s);

#endif //LP1_PR05_EX2017_H
